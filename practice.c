#include<stdio.h>
int main()
{
int n,a,b,c;
printf("Enter a 4 digit no.");
scanf("%d", &n);  
a=n%10;  // 1234 % 10 = 4
n=n/10;  // 1234 / 10 = 123
b=n%10;  // 123 %  10 = 3
n=n/10;  // 123 /  10 = 12
c=n%10;  // 12  %  10 = 2
n=n/10;  
switch(n)
{
case 0:
printf("zero");
break;
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
case 6:
printf("six");
break;
case 7:
printf("seven");
break;
case 8:
printf("eight");
break;
case 9:
printf("nine");
break;
default:
printf("not a no.");
}

switch(c)
{
case 0:
printf("\nzero");
break;
case 1:
printf("\none");
break;
case 2:
printf("\ntwo");
break;
case 3:
printf("\nthree");
break;
case 4:
printf("\nfour");
break;
case 5:
printf("\nfive");
break;
case 6:
printf("\nsix");
break;
case 7:
printf("\nseven");
break;
case 8:
printf("\neight");
break;
case 9:
printf("\nnine");
break;
default:
printf("not a no.");

}
switch(b)
{
case 0:
printf("\nzero");
break;
case 1:
printf("\none");
break;
case 2:
printf("\ntwo");
break;
case 3:
printf("\nthree");
break;
case 4:
printf("\nfour");
break;
case 5:
printf("\nfive");
break;
case 6:
printf("\nsix");
break;
case 7:
printf("\nseven");
break;
case 8:
printf("\neight");
break;
case 9:
printf("\nnine");
break;
default:
printf("\nnot a no.");
}

switch(a)
{
case 0:
printf("\nzero");
break;
case 1:
printf("\none");
break;
case 2:
printf("\ntwo");
break;
case 3:
printf("\nthree");
break;
case 4:
printf("\nfour");
break;
case 5:
printf("\nfive");
break;
case 6:
printf("\nsix");
break;
case 7:
printf("\nseven");
break;
case 8:
printf("\neight");
break;
case 9:
printf("\nnine");
break;
default:
printf("\nnot a no.");
}
}
