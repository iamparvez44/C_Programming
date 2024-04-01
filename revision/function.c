// add two number with the help of using function

#include <stdio.h>
int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int a, b;
    printf("Enter a Number : ");
    scanf("%d", &a);
    printf("Enter b Number : ");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("%d", sum);

    return 0;
}

// Write a C function to find the sum of two integers and display the result.

#include <stdio.h>

int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int a, b;
    printf("Enter 1st Number");
    scanf("%d", &a);
    printf("Enter 2st Number");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("%d", sum);
    return 0;
}

// Create a function that calculates the area of a rectangle. The function should take the length and width as parameters and return the area.

#include <stdio.h>

int AreaOfRectangle(int x, int y)
{
    int result = x * y;
    return result;
}

int main()
{

    int lenth, width;
    printf("Enter lenth : ");
    scanf("%d", &lenth);
    printf("Enter width : ");
    scanf("%d", &width);

    printf("The area of rectangle is ");

    int area = AreaOfRectangle(lenth, width);

    printf("%d", area);

    return 0;
}

// Implement a set of overloaded functions to calculate the area for a square, rectangle, and circle. The parameters would be different for each shape.

#include <stdio.h>
// Are of rectangle

int AreaOfRectangle(int x, int y)
{
    int result = x * y;
    return result;
}

// Area of squre

int AreaOfSqure(int x)
{
    int result = x * x;
    return result;
}

// Area of circle

float AreaOfCircle(float x)
{
    float result = 3.14159265359 * x * x;
    return result;
}

int main()
{

    // area of rectangle

    int length, width;
    printf("Enter lenth : ");
    scanf("%d", &length);
    printf("Enter width : ");
    scanf("%d", &width);

    printf("The area of rectangle is ");

    int area = AreaOfRectangle(length, width);

    printf("%d\n", area);

    // Are of squre

    int a;
    printf("Enter a side of squre : ");
    scanf("%d", &a);

    int area_sqr = AreaOfSqure(a);

    printf("The area of squre is : ");
    printf("%d\n", area_sqr);

    // area of circle

    float r;
    printf("Enter the redius of circle : ");
    scanf("%f", &r);

    float area_cr = AreaOfCircle(r);

    printf("The area of circle is \n");
    printf("%f", area_cr);

    return 0;
}