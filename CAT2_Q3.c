/*
AUTHOR: NYAWIRA M COLLINS
REG NO.:CT101/G/23728/24
DATE:7 November, 2024
TITLE: WORKPAY
*/

#include <stdio.h>
int main() {
float overtime_hours;
float normalhours;
float hours_worked;
float hourly_wage; 
float grosspay; 
float taxes; 
float netpay;
//request the user to input 
printf("Enter hours worked in a week: \n");
printf("Enter hourly wage: \n");
//preprocessor directive 
scanf("%f \n", &hours_worked);
scanf("%f \n", &hourly_wage);
//calculate normal hours and overtime hours
if (hours_worked >40){
	normalhours =40;
	overtime_hours =hours_worked -40;
} else {
	normalhours =hours_worked;
	overtime_hours =0;
}
//calculate grosspay
grosspay =(normalhours *hourly_wage) +(overtime_hours *hourly_wage *1.5);
//calculate taxes charged
if (grosspay <=600) {
taxes =grosspay *0.15;
} else {
taxes =(600*0.15)+((grosspay -600) *0.20);
}
//calculate netpay
netpay =grosspay-taxes;
//preprocessor directive
printf("Gross pay: $%.2f \n", grosspay);
printf("Taxes: $%.2f \n", taxes);
printf("Net pay: $%.2f \n", netpay);
return 0;
}
