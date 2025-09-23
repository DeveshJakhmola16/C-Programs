#include <stdio.h>
int main(){
int marks;
printf("Enter the marks from 0 to 100:\n");
scanf("%d",&marks);
if(marks>=90 && marks<=100)
printf("Grade A\n");
else if(marks>=75 && marks<90)
printf("Grade B\n");
else if(marks>=50 && marks<75)
printf("Grade C\n");
else
printf("Grade F\n");
return 0;
}