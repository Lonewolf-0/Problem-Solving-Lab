#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n

int main()
{
    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}