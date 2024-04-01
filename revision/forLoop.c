#include<stdio.h>
int main(){
    int p,n, count;
    float r, si;
    for (count = 1; count <= 3;count++)
    {
        printf("Enter p,n,r");
        scanf("%d %d %f",&p,&n,&r);
        si = p*n*r/100;
        printf("The Simple Intrest is Rs, %f",si);
    }
    
    return 0;
}

#include<stdio.h>
int main(){
    for (int i = 0; i++ < 10; )
    {
        printf("%d",i);
        
    }
    return 0;
}

#include<stdio.h>
int main(){
    int r, c, sum;

    for ( r = 1; r <= 3; r++)
    {
        for ( c = 1; c <= 2; c++)
        {
            sum = r+c;
            printf("r = %d c= %d sum = %d", r,c,sum);
        }
        printf("\n");
    }
    return 0;
}

//Write a program to print numbers from 1 to 10 using a for loop.

#include<stdio.h>
int main(){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d",i);
    }
    return 0;
}

// Write a program to calculate the factorial of a number entered by the user using a for loop.

#include<stdio.h>
int main(){
    float n;
    printf("Enter a Number : ");
    scanf("%f",&n);

  float sum = 0.0;

  for (int i = 1; i <= n; i++)
  {
    sum = sum+1.0/i;

  }
  
  printf("%f",sum);
    
    return 0;
}

// Write a program to calculate the factorial of a number entered by the user using a for loop.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    
    printf("%d",fact);

    return 0;
}

//Write a program to find the sum of digits of a number entered by the user using a for loop.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum+i;
    }
    
    printf("%d",sum);

    return 0;
}

//Write a program to reverse a number entered by the user using a for loop.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d ",i);
    }
    

    return 0;
}

//Write a program to print the multiplication table of a number entered by the user using a for loop.

#include<stdio.h>
int main(){

    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int table = 1;

    for (int i = 1; i <= 10; i++)
    {
        table = n*i;
        printf("%d X %d = %d\n",n,i,table);
    }
    


    return 0;
}

//Write a program to check if a number entered by the user is prime or not using a for loop.

#include<stdio.h>
int main(){

    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int count = 0;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            count = 1;
            break;
            
        }
        
       

        
    }

     if (count == 1)
        printf("The Number is composite");

        if (count == 0)
        printf("The Number is Prime Number");

    return 0;
}