#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w,h,i,j;
    cin>>h>>w;
    int A[h+2][w+2];
    for(i=0;i<h+2;i++)
    {
        A[i][0]=0;
        A[i][w+1]=0;
    }
    for(i=0;i<w+2;i++)
    {
        A[0][i]=0;
        A[h+1][i]=0;
    }
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            cin>>A[i][j];
        }
    }
    int area=2*w*h;
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            if(A[i][j]-A[i-1][j]>0)
                area=area+A[i][j]-A[i-1][j];
            if(A[i][j]-A[i+1][j]>0)
                area=area+A[i][j]-A[i+1][j];
            if(A[i][j]-A[i][j-1]>0)
                area=area+A[i][j]-A[i][j-1];
            if(A[i][j]-A[i][j+1]>0)
                area=area+A[i][j]-A[i][j+1];                  
        }
    }
    
    cout<<area;
    return 0;
}
