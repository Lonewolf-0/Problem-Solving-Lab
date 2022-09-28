#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            cout<<"\nLCM is "<<i;
            break;
        }
    }

    return 0;
}