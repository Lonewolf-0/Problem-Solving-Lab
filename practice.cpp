#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{   
    int flag=0;
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        return false;
    else
        return true;
    
}
void prime1(int n)
{
    int a[101]={0};
    for(int i=2;a[i]==0&&i<sqrt(n);i++)
    {
        for(int j=1;j<n;j=j*i)
        {
            a[i]=1;
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(a[i])
        cout<<i;
    }
}

int main()
{
    
    int n=10;

    // for(int i=2;i<=n;i++)
    // {
    //     if(prime(i))
    //         cout<<i<<endl;
    // }
    prime1(100);
    return 0;
}