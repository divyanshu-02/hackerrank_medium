#include <bits/stdc++.h>

using namespace std;

int multiply(int x,int fact[],int fact_size)
{
    int carry=0;
    int temp;
    for(int i=0;i<fact_size;i++)
    {
        temp=fact[i]*x + carry;
        fact[i]=temp%10;
        carry=temp/10;
    }
    while(carry)
    {
        fact[fact_size]=carry%10;
        carry=carry/10;
        fact_size++;
    }
    return fact_size;
}
void factorial(int n)
{
    int fact[600];
    fact[0]=1;
    int fact_size=1;
    for(int x=2;x<=n;x++)
    {
        fact_size=multiply(x,fact,fact_size);
    }
    for(int i=fact_size-1;i>=0;i--)
    {
        cout<<fact[i];
    }
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
