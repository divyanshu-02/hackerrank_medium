#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int l,i,a,b,j,d;
    cin>>s;
    l=0;
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')
            l++;
        i++;
    }
    a=sqrt(l);
    if(a*a!=l)
        b=a+1;
    else
        b=a;    
    while(a*b<l)
    {
        a=a+1;
    }
    for(i=0;i<b;i++)
    {
        d=0;
        for(j=0;j<a;j++)
        {
            if((i+d)<l)
            cout<<s[i+d];
            d=d+b;
        }
        cout<<" ";
    }
    return 0;
}
