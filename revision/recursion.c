// print the factorial of a given by using recurssion.

#include <stdio.h>
int factorial(int x)
{
    if (x == 1)
        return 1;
    int recAns = x * factorial(x - 1);
    return recAns;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}

// print n to 1 by using recursion

#include <stdio.h>

void reverse(int n)
{
    if (n == 0)
        return 1;
    printf("%d ", n);
    reverse(n - 1);

    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    reverse(n);

    return 0;
}

// print 1 to n by using recursion

#include <stdio.h>

void increse(int n)
{
    if (n == 0)
        return 1;
    increse(n - 1);
    printf("%d ", n);

    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    increse(n);

    return 0;
}

//print sum of 1 to n prameterised(using recursion)

#include<stdio.h>

int sum(int x, int y){
    if(x==0){
        printf("%d",y);
        return;
    }
    sum(x-1,y+x);
    return;
}

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    sum(n,0);
     

    return 0;
}