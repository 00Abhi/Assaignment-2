#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define MX 5
using namespace std;

char QUEUE[MX];
int FRONT=-1,REAR=-1;

void push()
{
    if(FRONT==(REAR+1)%MX)
        pf("OverFlow\n");
    else{
        REAR=(REAR+1)%MX;
        pf("Enter Data That You Want To Store : ");
        cin>>QUEUE[REAR];

        if(FRONT==-1)
            FRONT=REAR;
    }
}

void pop()
{
    if(FRONT==-1 && REAR==-1)
        pf("UnderFlow\n");
    else{
        pf("Deleted Element is %c \n",QUEUE[FRONT]);
        if(FRONT==REAR)
            FRONT=REAR=-1;
        else FRONT=(FRONT+1)%MX;
    }
}

void viewQueue()
{
    if(FRONT==-1 && REAR==-1)
        pf("Queue Is Empty..\n");
    else{
        for(int t=FRONT;t<=REAR;t++)
            pf("%c ",QUEUE[t]);

        pf("\n");
    }
}

int main()
{
    int c;
    pf("1. Insert\n");
    pf("2. Delete\n");
    pf("3. viewQueue\n");

    while(1){
        pf("Select Required Operation : ");
        sf("%d",&c);
        if(c==1)
            push();
        else if(c==2)
            pop();
        else if(c==3)
            viewQueue();
        else return 0;
    }
}
