#include<bits/stdc++.h>
using namespace std;

int summingSeries(long n) {
    long sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
        cout<<sum<<endl;
    }
    return (int)sum;

}

int main()
{
    cout<<endl<<endl<<summingSeries(3);


    return 0;
}