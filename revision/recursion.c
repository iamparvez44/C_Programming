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

// print sum of 1 to n prameterised(using recursion)

#include <stdio.h>

int sum(int x, int y)
{
    if (x == 0)
    {
        printf("%d", y);
        return;
    }
    sum(x - 1, y + x);
    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    sum(n, 0);

    return 0;
}

// recursion
// WAP to find the factorial of n number by using recursion

#include <stdio.h>
int factorial(int x)
{
    if (x == 1)
        return 1;
    return x * factorial(x - 1);
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

// Print n to 1 using recursion

#include <stdio.h>

void greet(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    greet(n - 1);
    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    greet(n);

    return 0;
}

// Print 1 to n using recursion

#include <stdio.h>

void increse(int x, int n)
{
    if (x > n)
        return;
    printf("%d", x);
    increse(x + 1, n);
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    increse(1, n);

    return 0;
}

// Print 1 to n using recursion (after recursive call)

#include <stdio.h>
void incresing(int n)
{
    if (n == 0)
        return;
    incresing(n - 1);
    printf("%d", n);
    return;
}

int main()
{
    int n;
    printf("nter a Number : ");
    scanf("%d", &n);

    incresing(n);

    return 0;
}

// Print the sum from 1 to n using recursion (parameterized)

#include <stdio.h>
void sum(int n, int s)
{
    if (n == 0)
    {
        printf("%d", s);
        return;
    }

    sum(n - 1, s + n);
    return;
}
int main()
{
    int n, s;
    printf("Enter a Number : ");
    scanf("%d", &n);
    s = 0;
    sum(n, s);
    return 0;
}

// revision 1 may
// calculate factorial of a number by using factrial

#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    int recAns = n * factorial(n - 1);
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

// print n to 1 using recursin

#include <stdio.h>

void decresing(int n)
{
    if (n == 0)
        return;
    printf("%d", n);
    decresing(n - 1);
    return;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    decresing(n);
    return 0;
}

// print 1 t n using recursion by using extra perameter

#include <stdio.h>
void incresing(int m, int n)
{
    if (n == 0)
        return;
    printf("%d", m);
    incresing(m + 1, n - 1);
    return;
}
int main()
{
    int n, m;
    m = 1;
    printf("Enter a Number : ");
    scanf("%d", &n);
    incresing(m, n);
    return 0;
}

// Print 1 to n using recursion (after recursive call)

#include <stdio.h>
void incresing(int n)
{
    if (n == 0)
        return;
    incresing(n - 1);
    printf("%d", n);

    return;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    incresing(n);
    return 0;
}

// Print sum of 1 to n using recursion (peramitrazised)

#include <stdio.h>
void sum(int n, int m)
{

    if (n == 0){
        printf("%d",m);
        return;
    }
        
    sum(n - 1, m + n);
    return;
}

int main()
{

    int n;
    int m = 0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    sum(n, m);

    return 0;
}

// print sum from 1 to n (as we do factorial in begning)

#include<stdio.h>

int sum(int n){
    if(n==0) return 1;
    int recAns = n + sum(n-1);
    return recAns;
}

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int result = sum(n);
    printf("%d",result);
    return 0;
}

