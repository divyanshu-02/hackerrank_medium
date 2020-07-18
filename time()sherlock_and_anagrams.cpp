#include <bits/stdc++.h>

using namespace std;

struct str1
{
    string s;
    int l;
};
bool check(string s1,string s2,int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]=0;
                break;
            }
        }
    }
    for(i=0;i<d;i++)
    {
        if(s2[i]!=0)
            return false;
    }
    return true;
}
int main()
{
    int q,i,j,count=0;
    cin>>q;
    str1 a[q];
    for(i=0;i<q;i++)
    {
        cin>>a[i].s;
        a[i].l=a[i].s.size();
    }
    for(int z=0;z<q;z++)
    {
        count=0;
        for(int d=1;d<a[z].l;d++)
        {
            for(i=0;i<=a[z].l-d;i++)
            {
                string s1="";
                for(int m=i;m<i+d;m++)
                {
                    s1=s1+a[z].s[m];
                }
                j=i+1;
                for(int k=j;k<=a[z].l-d;k++)
                {
                    string s2="";
                    for(int n=k;n<k+d;n++)
                    {
                        s2=s2+a[z].s[n];
                    }
                    if(check(s1,s2,d)==true)
                        count++;
                }    
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
