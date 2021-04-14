#include <stdio.h>

int findPower(int n, int p);

int main()
{
    int num, pow;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    printf("Enter Power: ");
    scanf("%d", &pow);

    printf("Result: %d\n", findPower(num, pow));

    return 0;

}

int findPower(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return n * findPower(n, p-1);
    }
}
