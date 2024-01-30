// write an c programme to find sum of all natural numbers until n
#include <stdio.h>

int input_n()
{
    int n;
    printf("Enter the number range of natural numbers- ");
    scanf("%d", &n);
    return n;
}
int sum_n_nos(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)

    {
        sum += i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("the sum upto %d no is %d", n, sum);
}
int main()
{
    int n, sum;
    n = input_n();
    sum = sum_n_nos(n);
    output(n, sum);
    return 0;
}