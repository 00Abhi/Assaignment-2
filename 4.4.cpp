#include<bits/stdc++.h>
using namespace std;

void TOWER(int n,char BEG,char AUX,char END)
{
    if(n>=1){
        TOWER(n-1,BEG,END,AUX);
        printf("%c --> %c\n",BEG,END);
        TOWER(n-1,AUX,BEG,END);
    }
}

int main()
{
    int n,i,j;
    char BEG,AUX,END;
    printf("Enter The Number OF Disks...: ");
    scanf("%d",&n);
    TOWER(n,'A','B','C');
    return 0;
}
