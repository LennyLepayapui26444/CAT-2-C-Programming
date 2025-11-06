/*
Name :Lenny Lepayapui
Reg no :CT101/G/26444/25
course: computer science
Description:c program to print elements using a  nested for loop
Date:6/11/2025
*/
#include <stdio.h>
int main() {

    float hours, hourly_wage,gross_pay,tax_rate,net_pay;

    printf("Enter hours worked in a week:");
    scanf("%f",&hours);

    printf("Enter hourly wage :");
    scanf("%f",& hourly_wage);

    //calculating of the gross pay
    if(hours>40) {
        gross_pay=40*hourly_wage+ (hours-40)*hourly_wage*1.5;
    }
    else if(hours<=40) {
        gross_pay=hours*hourly_wage;
    }
    printf("The gross pay is $ %.2f\n",gross_pay);

    //the taxes
    if(gross_pay<=600) {
        tax_rate=0.15*gross_pay;
    }
    else if(gross_pay>600) {
        tax_rate=0.15*600+(gross_pay-600)*0.2;
    }
    printf("The tatal tax is $ %.2f\n",tax_rate);

    net_pay=gross_pay-tax_rate;
    printf("The net pay is $ %.2f",net_pay);

    return 0;
}