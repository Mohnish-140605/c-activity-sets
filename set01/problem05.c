#include<stdio.h>

void input(int*a,int*b,int*c)
{
    printf("Enter the three numbers\n");
    scanf("%d%d%d",a,b,c);
}

void compare(int a,int b,int c,int*largest)
{
    if(a>=b&&a>=c)
    {
        *largest=a;
    }
    if(b>=a&&b>=c)
    {
        *largest=b;
    }
    if(c>=a&&c>=b)
    {
        *largest=c;
    }
}
void output(int a,int b,int c,int largest)
{
    printf("The largest number bewteen %d,%d and %d is %d",a,b,c,largest);
            
}

int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}


