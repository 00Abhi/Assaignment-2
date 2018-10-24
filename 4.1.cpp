#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n=0,top,next_top;
    string s;
    stack<int>st;
    getline(cin,s);
    s=s+')';
    for(i=0;i<s.size();i++){
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                n=n*10+(s[i]-'0');
                i++;
            }
            st.push(n);
            n=0;
        }
        else if(s[i]=='/' || s[i]=='*' || s[i]=='+' || s[i]=='-'){
            top=st.top(); st.pop();
            next_top=st.top(); st.pop();
            if(s[i]=='+') st.push(next_top+top);
            else if(s[i]=='-') st.push(next_top-top);
            else if(s[i]=='*') st.push(next_top*top);
            else if(s[i]=='/') st.push(next_top/top);
        }
    }
    cout<<st.top()<<endl;

    ///input:  5 6 2 + * 12 4 / -
}

