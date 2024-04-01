

// Write a program to calculate the factorial of a number entered by the user using a while loop

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int i = 1;
    int factorial = 1;

    while (i <= n)
    {
        factorial = factorial * i;

        i++;
    }
    printf("%d", factorial);
    return 0;
}

// Write a program to find the sum of digits of a number entered by the user using a while loop.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;

        i++;
    }
    printf("%d", sum);
    return 0;
}

// Write a program to reverse a number entered by the user using a while loop.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int i = n;
    while (i >= 0)
    {
        printf("%d", i);
        i--;
    }
    return 0;
}

// Write a program to print the multiplication table of a number entered by the user using a while loop.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Table : ");
    scanf("%d", &n);

    int i = 1;
    int j;

    while (i <= 10)
    {

        j = n * i;
        printf("%d x %d = %d\n", n, i, j);
        i++;
    }
    return 0;
}

// Write a program to check if a number entered by the user is prime or not using a while loop.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int i = 2;
    int count = 0;

    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
        i++;
    }
    if (count == 0)
        printf("The Number is Prime");
    else
        printf("The Number is composite");

    return 0;
}

// Write a program to calculate the power of a number using a while loop.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("Enter The Power of Your Number : ");
    scanf("%d", &b);

    int n = 1;
    int result = 1;

    while (n <= b)
    {
        result = result * a;
        n++;
    }

    printf("%d", result);

    return 0;
}

// Write a program to generate the Fibonacci series up to a given number using a while loop

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int i = 1;
    int a = 1;
    int b = 1;
    int sum = 0;

    while (i <= n)
    {
        if (a == 1 && b==1)
        {
            printf("%d %d ",a,b);
        }
        
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
        i++;
    }

    return 0;
}

//Write a program to count the number of digits in a given number using a while loop.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int count=0;

    if (n == 0)
    {
        count =1;
    }else{
        while (n !=0)
        {
           n = n/10;
            count++;
        }
        
    }
    
    printf("The digists in is %d",n,count);

    return 0;
}


#include <stdio.h>

int main() {
    int n;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print prime numbers up to the given number
    printf("Prime numbers up to %d are: ", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to i-1
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        // Print i if it is prime
        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}


// youtube wala ans

#include<stdio.h>
int main(){

    int n,i,j,f,m;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for ( i = 2; i <= n; i++)
    {
        m=i;
        f=0;
        for ( j = 2; j < m; j++)
        {
            if (m%j==0)
            {
                f=1;
                break;
            }
            
        }
        if (f==0)
        {
            printf("%d ",m);
        }
        
        
    }
    

    return 0;
}
