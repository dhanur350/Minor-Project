#include<stdio.h>
int main()
{
int n,a,b,c; // int d  
printf("Enter a 4 digit no.");
scanf("%d", &n);  
/*if(n>=19)
d=a+b;
*/
a=n%10;  // 1234 % 10 = 4
n=n/10;  // 1234 / 10 = 123
b=n%10;  // 123  % 10 = 3
n=n/10;  // 123  / 10 = 12
c=n%10;  // 12   % 10 = 2
n=n/10;  // 12   / 10 = 1  
switch(n)
{
case 0:
printf("zero");
break;
case 1:
printf("One Thousand");
break;
case 2:
printf("Two Thousand");
break;
case 3:
printf("Three Thousand");
break;
case 4:
printf("Four Thousand");
break;
case 5:
printf("Five Thousand");
break;
case 6:
printf("Six Thousand");
break;
case 7:
printf("Seven Thousand");
break;
case 8:
printf("Eight Thousand");
break;
case 9:
printf("Nine Thousand");
break;
default:
printf("not a no.");
}

switch(c)
{
case 0:
printf(" zero ");
break;
case 1:
printf(" One hundred ");
break;
case 2:
printf(" Two hundred ");
break;
case 3:
printf(" Three hundred ");
break;
case 4:
printf(" Four hundred ");
break;
case 5:
printf(" Five hundred ");
break;
case 6:
printf(" Six hundred ");
break;
case 7:
printf(" Seven hundred ");
break;
case 8:
printf(" Eight hundred ");
break;
case 9:
printf(" Nine hundred ");
break;
default:
printf("not a no.");
}
switch (b)
    {
        case 1:
            // special case for numbers between 11-19
            switch (a)
            {
                case 0:
                    printf(" ten \n"); 
                    break;
                case 1:
                    printf(" eleven \n"); 
                    break;
                case 2:
                    printf(" twelve \n"); 
                    break;
                case 3:
                    printf(" thirteen \n"); 
                    break;
                case 4:
                    printf(" fourteen \n"); 
                    break;
                case 5:
                    printf(" fifteen \n"); 
                    break;
                case 6:
                    printf(" sixteen \n"); 
                    break;
                case 7:
                    printf(" seventeen \n"); 
                    break;
                case 8:
                    printf(" eigthteen \n"); 
                    break;
                case 9:
                    printf(" nineteen \n"); 
                    break;
                default:
                printf("not a no.");
                break;
            }
        case 2:
            printf(" twenty "); 
            break;
        case 3:
            printf(" thirty "); 
            break;
        case 4:
            printf(" forty "); 
            break;
        case 5:
            printf(" fifty "); 
            break;
        case 6:
            printf(" sixty "); 
            break;
        case 7:
            printf(" seventy "); 
            break;
        case 8:
            printf(" eighty "); 
            break;
        case 9:
            printf(" ninety "); 
            break;
        default:
            printf("not a no.");
            break;
    }
b+=1;
switch(b)
{
case 0:
printf(" zero\n");
break;
case 1:
printf(" one\n");
break;
case 2:
printf(" two\n");
break;
case 3:
printf(" three\n");
break;
case 4:
printf(" four\n");
break;
case 5:
printf(" five\n");
break;
case 6:
printf(" six\n");
break;
case 7:
printf(" seven\n");
break;
case 8:
printf(" eight\n");
break;
case 9:
printf(" nine\n");
break;
}
}
/*
switch (d)
{
case 11:
printf(" eleven\n");
break;
case 12:
printf(" twelve\n");
break;
case 13:
printf(" thirteen\n");
break;
case 14:
printf(" fourteen\n");
break;
case 15:
printf(" fifteen\n");
break;
case 16:
printf(" sixteen\n");
break;
case 17:
printf(" seventeen\n");
break;
case 18:
printf(" eighteen\n");
break;
case 19:
printf(" nineteen\n");
break;
default:
printf(" not a no.");
}
*/

