#include <stdio.h>
float calHRA(float basic);
float calDA(float basic);
float calPF(float basic);
float calIT(float basic);
float calGS(float basic);
float calDed(float basic);
float calNS(float gross, float ded);
void printSalarySlip(int empID, float basic, float gross, float ded, float net);
int main() {
    int empID;
    float bs,gs,ded,ns;
    printf("Enter Employee ID: ");
    scanf("%d", &empID);
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);
    gs = calGS(bs);
    ded = calDed(bs);
    ns = calNS(gs, ded);
    printSalarySlip(empID, bs, gs, ded, ns);
    return 0;
}
float calHRA(float basic) {
    return 0.20 * basic;
}
float calDA(float basic) {
    return 0.50 * basic;
}
float calPF(float basic) {
    return 0.12 * basic;
}
float calIT(float basic) {
    return 0.10 * basic;
}
float calGS(float basic) {
    return basic + calHRA(basic) + calDA(basic);
}
float calDed(float basic) {
    return calPF(basic) + calIT(basic);
}
float calNS(float gross, float ded) {
    return gross - ded;
}
void printSalarySlip(int empID, float basic, float gross, float ded, float net) {
    printf("\n SALARY SLIP \n");
    printf("Employee ID     : %d\n", empID);
    printf("Basic Salary    : %.2f\n", basic);
    printf("Gross Salary    : %.2f\n", gross);
    printf("Deductions      : %.2f\n", ded);
    printf("Net Salary      : %.2f\n", net);
}
