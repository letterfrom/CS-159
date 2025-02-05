#include <stdio.h>

int main(void)
{

  // Local Declaration

  float fedtax = .184;  // federal tax rate
  float excisetax = .35;  // excise tax rate
  float salestax = .204;  // sales tax rate
  float gas;  // price of gas
  float numbgals;  // amount of gas bought in gallons
  float ftaxval = 0;  // value of federal tax
  float salestaxval = 0;  // value of sales tax
  float excisetaxval = 0;  // value of excise tax
  float totaltax = 0;  // total amount of tax 
  float subtotal;  // subtotal before tax
  float totalcost;  // total after tax

  // statements
  printf("Enter the price per gallon of gas -> ");
  scanf("%f", &gas);  // calling for gas price
  printf("Enter the number of gallons -> ");
  scanf("%f", &numbgals);  // calling for number of gallons
  subtotal = numbgals * gas;  // calculating subtotal
  ftaxval = numbgals * fedtax;  // calculating federal tax
  excisetaxval = numbgals * excisetax;  // calculating excise tax
  salestaxval = numbgals * salestax;  // calculating sales tax
  totaltax = ftaxval + excisetaxval + salestaxval;  // calculating total tax 
  totalcost = subtotal + totaltax;  // calculating total cost

  printf("\n==========================\n");
  printf("Price per gallon: $%.2f\n", gas);
  printf("Gallons purchased: %.2f\n", numbgals);
  printf("Subtotal: $%.2f\n", subtotal);  // printing values received and subtotal
  printf("==========================\n");
  printf("Federal tax: $%.2f\n", ftaxval);
  printf("Indiana use tax: $%.2f\n", salestaxval);
  printf("Indiana excise tax: $%.2f\n", excisetaxval);
  printf("Total tax: $%.2f\n", totaltax);  // printing tax values
  printf("==========================\n");
  printf("Total cost: $%.2f\n", totalcost);  // printing total cost
  printf("==========================\n");

  return 0;
}
