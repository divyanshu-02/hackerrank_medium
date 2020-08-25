#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int i,j,a[n],d=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]>k)
                break;
            if(a[j]-a[i]==k)
                d++;
        }
    }
    cout<<d;
    return 0;
}
