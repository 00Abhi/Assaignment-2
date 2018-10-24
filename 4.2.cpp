#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else return n*factorial(n-1);
}

int main()
{
    int n,i,j,fact;
    printf("Enter An Integer To Find It's Factorial : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial Of %d is : %d ",n,fact);
}
