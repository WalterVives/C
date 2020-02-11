#include<stdio.h>

int main(){

const double PI = 3.2426;
char a[50];

printf("Input a string: ");

gets(a);

printf("\n\nThe value of PI is %f", PI);
printf("\n\nThe string is %s\n\n", a);

return 0;

}
