#include <stdio.h>
#include <math.h>

int main (void)
{

  //variables for getting input from the user
  double r = 0; // radius of the base
  double hcone = 0; // height of the cone
  double hwater = 0; // height of the water
  double flowrate = 0; // flow rate of the water

  //variables for calculation
  double rwater; // radius at water height
  double levelrate; // change rater of water at the height
  double vwater; // volume of water at height
  double capcone; // max capacity of cone
  double capwater; // % of capacity the water takes up

  printf("Enter the radius of the base (feet) -> ");
  printf("Enter the height of the cone (feet) -> ");
  printf("Enter the height of the water (feet) -> ");
  printf("Enter the flow rate (cubic ft / minute) -> ");

  scanf("%lf", &r);
  scanf("%lf", &hcone);
  scanf("%lf", &hwater);
  scanf("%lf", &flowrate);
// Calculation
  rwater = r * (hwater / hcone);
  vwater = ((double)1 / 3) * (M_PI) * pow(rwater,2) * (hwater);
  levelrate = ((pow(hcone,2) * (flowrate)) / ((pow(hwater,2) * (M_PI) * (pow(r,2)))));
  capcone = ((double) 1 / 3) * (M_PI) * (pow(r,2)) * (hcone);
  capwater = 100.0 * (vwater / capcone);

  printf("\nRadius at water height: %.2lf feet\n", rwater);
  printf("Rate of water level change: %.3lf ft / min\n", levelrate);
  printf("Volume of water: %.3lf cubic feet\n", vwater);
  printf("Capacity of cone: %.3lf cubic feet\n", capcone);
  printf("Capacity of cone filled with water: %.2lf", capwater);
  printf("%%");

  return 0;
