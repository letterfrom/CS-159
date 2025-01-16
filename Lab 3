#include <stdio.h>
#define HALFDAY 43200
#define HALFDAY2 12

int main (void)
{
  int starthour; //gets input from user about the starting hour
  int startmin; //gets input from user about the starting minute
  int startsec; //gets input from user about the starting second

  int endhour; //gets input from user about the ending hour
  int endmin; //gets input from user about ending minute
  int endsec; //gets input from user about ending second

  int difhour; //prints difference of hours
  int difmin; //prints difference of minutes
  int difsec; //prints difference of seconds

  int starts; //starting time calculated in seconds
  int ends; //ending time calculated in seconds
  int dayadv; //prints day advanced

  int factor1; //factor to determine starting time's status (AM/PM)
  int factor2; //factor to determine ending time's status
  char selected1; //default letter value for starting time
  char selected2; //default letter value for ending time
  int timeconversion1; //converts the starting hour from military to standard time
  int timeconversion2; //converts the ending hour from military to standard time

  printf("Enter starting hours minutes and seconds -> ");
  scanf("%d %d %d", &starthour, &startmin, &startsec);
  printf("Enter ending hours minutes and seconds -> ");
  scanf("%d %d %d", &endhour, &endmin, &endsec);
  starts = starthour * 3600 + startmin * 60 + startsec;
  ends = endhour * 3600 + endmin * 60 + endsec;

  dayadv = (starts / ( ends ));
  difsec = (ends + 86400 - starts) % 86400;

  difhour = difsec / 3600;
  difmin = (difsec % 3600) / 60 ;
  difsec = difsec % 60;

  // working function
  factor1 = (starts / HALFDAY);
  factor1 = (factor1 + 2) % (factor1 + 1);
  selected1 = 'A';
  selected1 -= ('A' - 'P') * factor1;

  factor2 = (ends / HALFDAY);
  factor2 = (factor2 + 2) % (factor2 + 1);
  selected2 = 'A';
  selected2 -= ('A' - 'P') * factor2;
  // until here

 // timeconversion1 = (starthour / HALFDAY2) * HALFDAY2;
 // timeconversion2 = (endhour / HALFDAY2) * HALFDAY2; 
  timeconversion1 = ((starthour - 60) % HALFDAY2 + 60) - 48;
  timeconversion2 = ((endhour - 60) % HALFDAY2 + 60) - 48;

  printf("\nStart Time: %02d:%02d:%02d %cM\n",timeconversion1, startmin, startsec, selected1);
  printf("End Time: %02d:%02d:%02d %cM\n",timeconversion2, endmin, endsec, selected2);
  printf("Difference: %02d hours %02d minutes %02d seconds\n", difhour, difmin, difsec);
  printf("Calendar Day: +%d\n", dayadv);

  return 0;
}
