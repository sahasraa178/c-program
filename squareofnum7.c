#include<stdio.h>
int square(int);
int main()
{
int num, res;
printf("enter the number: \n",num);
scanf("%d\n", &num);
res=square(num);
printf("the square of %d=%d\n",num,res);
}
int square(int x)
{
return(x*x);
}
