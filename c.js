/**
 * Mortgage Calculator: EPI vs EP
 * * To run: node mortgage_calc.js
 */

const principal = 1000000; // 贷款总额 100万
const years = 30;
const annualRate = 0.031;  // 年利率 3.1% (LPR 3.5% - 40bp 估算)

const months = years * 12;
const monthlyRate = annualRate / 12;

// 1. 等额本息 (Equal Principal and Interest)
// Formula: P * [i(1+i)^n] / [(1+i)^n - 1]
const epiMonthly = principal * (monthlyRate * Math.pow(1 + monthlyRate, months)) / (Math.pow(1 + monthlyRate, months) - 1);
const epiTotalPayment = epiMonthly * months;
const epiTotalInterest = epiTotalPayment - principal;

// 2. 等额本金 (Equal Principal)
let epTotalInterest = 0;
const monthlyPrincipal = principal / months;
const firstMonthPayment = monthlyPrincipal + (principal * monthlyRate);

for (let i = 0; i < months; i++) {
    // 剩余本金 * 月利率 = 当月利息
    const interest = (principal - (monthlyPrincipal * i)) * monthlyRate;
    epTotalInterest += interest;
}
const epTotalPayment = principal + epTotalInterest;

console.table({
    "Mode": ["等额本息 (EPI)", "等额本金 (EP)"],
    "首月还款 (CNY)": [epiMonthly.toFixed(2), firstMonthPayment.toFixed(2)],
    "总支付利息 (CNY)": [epiTotalInterest.toFixed(2), epTotalInterest.toFixed(2)],
    "利息差额 (CNY)": ["-", (epiTotalInterest - epTotalInterest).toFixed(2)]
});

// 决策建议输出
if (annualRate < 0.03) {
    console.log("\n[建议] 低利率环境下，资金成本极低，建议【等额本息】，将现金流用于投资或自我提升。");
} else {
    console.log("\n[建议] 利率正常，根据首月还款能力选择。若能承担 " + firstMonthPayment.toFixed(0) + "，选等额本金更划算。");
}