//Write a C program to compare three numbers using pass by value.
#include<stdio.h>
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    return a;
}
int compare(int a, int b, int c)
{
    int largest;

    if(a>=b&&a>=c)
    {
        largest =a;
    }
     if(b>=a&&b>=c)
    {
        largest=b;
    }
    else 
    {
        largest=c;
           }
    
    
 
    
    return largest;



}
void output(int a, int b, int c, int largest)
{

    printf("The largest between %d,%d and %d is%d",a,b,c,largest);
 }


int main ()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}