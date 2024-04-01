#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    if (n <= 10)
    {
        printf("You are a Good Human");
        
    }else{
        printf("You are a Bad human");
    }
    
    return 0;
}

// NESTED IF ELSE

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    if (n == 1)
    {
        printf("I am Parvez");
    }else{
        if (n == 2)
        {
            printf("I am Faiz");
        }else{
            printf("I am Faisal");
        }
        
    }
    return 0;
}

// write a program to find the greater number

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A");
    scanf("%d",&a);

    printf("Enter B");
    scanf("%d",&b);

    printf("Enter C");
    scanf("%d",&c);

    if (a > b && a > c)
    {
        printf("A is Greatest %d", a);
    }else if (b > a && b > c)
    {
        printf("B is Greatest %d", b);
    }else{
        printf("C is Greatest %d",c);
    }
    
    
    return 0;
}

// WAP TO FIND THE PERCENTAGE OF A STUDENT

#include<stdio.h>
int main(){
    int math, english, physics, chemisty, biology ;
    printf("Enter the Maths marks : ");
    scanf("%d",&math);

    printf("Enter the english marks : ");
    scanf("%d",&english);

    printf("Enter the physics marks : ");
    scanf("%d",&physics);

    printf("Enter the chemisty marks : ");
    scanf("%d",&chemisty);

    printf("Enter the biology marks : ");
    scanf("%d",&biology);

    float percentage = (math + english + physics + chemisty + biology) *100/500;

    if (percentage >= 70)
    {
        printf("First division %d", percentage);
    }
    else {
        if (percentage >=40 && percentage <=69)
    {
        printf("Second Division %d", percentage);
    } else
    printf("FAIL %d", percentage);
    }

    return 0;
     
}

// que 4.1 page no 65

#include<stdio.h>
int main(){
    char gender;
    int yos;
    int sal = 0;
    int qual;

    printf("Enter The Gender : ");
    scanf("%c",&gender);

     printf("Enter the year of experience : ");
    scanf("%d",&yos);

    printf("Enter the Qualification 1 or 0 : ");
    scanf("%d",&qual);

    if (gender =='m' && yos >=10 && qual ==1)
    {
        sal = 15000;
    }else if (gender == 'm' && yos >=10 && qual == 0)
    {
        sal = 10000;
    }else if (gender=='m' && yos < 10 && qual == 1)
    {
        sal = 10000;
    }else if (gender=='m' && yos < 10 && qual == 0)
    {
        sal = 10000;
    }else if (gender=='f' && yos >= 10 && qual == 1)
    {
        sal = 10000;
    }else if (gender=='f' && yos >= 10 && qual ==0)
    {
        sal = 9000;
    }else if (gender=='f' && yos < 10 && qual ==1)
    {
        sal = 10000;
    }else if (gender=='f' && yos < 10 && qual ==0)
    {
        sal = 6000;
    }
    
    printf("Employ salary is %d", sal);

    return 0;
    
    
}