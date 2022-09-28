#include<bits/stdc++.h>
#include<iostream>


using namespace std;
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int a,b;
    int gcd=1;

    cin>>a>>b;
    
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i == 0 && b%i == 0)
            gcd = i;
    }
    cout<<"\nGcd is "<<gcd;
    return 0;
}