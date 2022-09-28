#include<bits/stdc++.h>

using namespace std;
void palindrome(int n)
{   int num=n;
    int t=0;
    while (n!=0)
    {
        
        t=t*10+n%10;
        n=n/10;
        
    }
    
    if(t==num)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome ";
    
}    
void mean(int a[])
{
    float sum=0;
    for(int i=0;i<5;i++)
        sum+=a[i];

    cout<<"\nMean "<<sum/5;
}
void median(int a[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<"\nMedian "<<a[2];
}
int factorial(int x)
{
    if(x==0||x==1)
        return 1;
    else
        return x*factorial(x-1);
}
void perfect(int x)
{
    int sum=0;
    for(int i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x)
        cout<<"\nPerfect";
    else
        cout<<"\nNot Perfect";

}

int main()
{
    int n=10101;
    int a[]={2,5,6,7,8};
    palindrome(n);
    mean(a);
    median(a);
    cout<<endl<<factorial(5);
    perfect(6);
    
    return 0;
}