#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return hcf(b,a%b);
}
int x=0;
int lcm(int a,int b)
{
    x=x+b;
    if(x%a==0&&x%b==0)
        return x;
    else
        return lcm(a,b);
    
    

}
int main()
{
    cout<<hcf(9,21);
    cout<<endl;
    cout<<lcm(5,7);
    return 0;
}