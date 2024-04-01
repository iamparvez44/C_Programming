#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if (num <= 10)
    {
        printf("You are a good Human.");
    }
    
    return 0;
}

#include<stdio.h>
int main(){
    int qty;
    int dis = 0;
    float rate, tot;
    printf("Enter the Qantity and Rate : ");
    scanf("%d %f",&qty, &rate);

    if (qty > 100)
    {
        dis = 10;
    }

    tot = (qty * rate) - (qty*rate*dis/100);
    printf("Total Expense = Rs. %f\n", tot);
    
    return 0;
}

#include<stdio.h>
int main(){
    int bonus, cy , yoj , yos;
    printf("Enter the current years : ");
    scanf("%d",&cy);

    printf("Enter the year of joining : ");
    scanf("%d",&yoj);

    yos = cy - yoj;
    if (yos >=0 && yos <=3 )
    {
        bonus = 2500;
        printf("Bonus = Rs. %d\n", bonus);
    }

    if (yos >=4 && yos <=7 )
    {
        bonus = 5000;
        printf("Bonus = Rs. %d\n", bonus);
    }

    if (yos >=8 && yos <=11 )
    {
        bonus = 7500;
        printf("Bonus = Rs. %d\n", bonus);
    }

    if (yos >=12 && yos <=15 )
    {
        bonus = 10000;
        printf("Bonus = Rs. %d\n", bonus);
    }

    

    return 0;
    
}