#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter a Number : ");
    scanf("%d", &n);

    printf("Enter a Number : ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// take input from user as number rows and number of columns and print a ractange of a star,

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the Number of rows : ");
    scanf("%d", &n);

    printf("Enter the Number of columns : ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1234
// 1234
// 1234
// 1234

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
//*
//**
//***
//****

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
//* * * *
//* * *
//* *
//*

#include <stdio.h>
int main()
{
    int n;

    printf("Enter a Number : ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= a; j++)
        {
            printf("* ");
        }
        a--;

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N : ");
    scanf("%d", n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {

            printf("%d", a);
            a = a + 2;
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// A B C D
// A B C D
// A B C D
// A B C D

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= n; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// A
// A B
// A B C
// A B C D

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1
// A B
// 1 2 3
// A B C D

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                int d = a + 64;
                char ch = (char)d;
                printf("%c", ch);
                a++;
            }
            if (i % 2 != 0)
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
//     *
//     *
// * * * * *
//     *
//     *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = n / 2 + 1;
            if (i == a || j == a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
// ******
// *    *
// *    *
// *    *
// ******

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 && i == n || j == n)
            {
                printf("*");
            }
            else
                (printf(" "));
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
// *   *
//  * *
//   *
//  * *
// *   *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
            {
                printf("* ");
            }
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1
// 3 5
// 7 9 11
// 13 15 17 19

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a = a + 2;
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            a = 1;
        }
        else
            (a = 0);
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            if (a == 0)
            {
                a = 1;
            }
            else
                (a = 0);
        }

        printf("\n");
    }

    return 0;
}

// OR

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else
                (printf("0 "));
        }

        printf("\n");
    }

    return 0;
}

// print the given pattern
//       *
//     * *
//   * * *
// * * * *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//   ****
//  ****
// ****
//****

#include <stdio.h>
int main()
{

    int n;
    printf("Enter a Numbber : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//    A
//   AB
//  ABC
// ABCD

#include <stdio.h>
int main()
{
    int n;

    printf("Enter a Numnber : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        int a = 1;
        for (int k = 1; k <= i; k++)

        {

            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <stdio.h>
int main()
{

    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {

            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nums = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= nums; k++)
        {
            printf("%d", k);
        }
        nums = nums + 2;

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//       A
//     A B C
//   A B C D E
// A B C D E F G

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nums = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int alpha = 1;
        for (int k = 1; k <= nums; k++)
        {

            int d = alpha + 64;
            char ch = (char)d;
            printf("%c", ch);
            alpha++;
        }

        nums = nums + 2;
        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        for (int l = 1; l <= i - 1; l++)
        {
            printf("%d", a);
            a--;
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int nsp = n / 2;
    int nst = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }

        if (i < n / 2 + 1)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }

        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//* * * *
//  * * *
//    * *
//      *

#include <stdio.h>
int main()
{
    int n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= nst; k++)
        {

            printf("*");
        }
        nst--;
        nsp++;
        printf("\n");
    }

    return 0;
}

// PRINT THE GIVIN PATTERN
//   ********
//   *** ****
//   ***  ***
//   * *          * *
//   *              *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;

    for (int p = 1; p <= n * 2 + 1; p++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }

        nst--;
        nsp += 2;

        printf("\n");
    }

    return 0;
}


// Continue statment

#include<stdio.h>
int main(){

    for (int i = 1; i <=50; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        printf("%d",i);
    }
    

    return 0;
}

// do wnile loop

#include<stdio.h>
int main(){

    int i = 1;

    do
    {
        printf("%d",i);
        i++;
    } while (i<=10);
    

    return 0;
}