#include<stdio.h>
int main(){
int year;
printf("enter your year");
scanf("%d",&year);
if(year%4==0)
printf("%d is a leapyear",year);
else
printf("%d is not a leapyear",year);

return 0;
}
