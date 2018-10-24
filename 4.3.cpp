#include<bits/stdc++.h>
using namespace std;

int Fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    else return Fib(n-1)+Fib(n-2);
}

int main()
{
    int n,i,j,k;
    printf("Enter the number Of Terms Of Fibonacci Series You Want To See : ");
    scanf("%d",&n);
    cout<<Fib(n)<<endl;
}
