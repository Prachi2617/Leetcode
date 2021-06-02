#include<bits/stdc++.h>
using namespace std;

int func(int W, int wt[], int p[], int n)
{
    if(n==0 || W==0)
        return 0;
    if(wt[n-1]>W)
        return func(W,wt, p,n-1);
    else
        return (max(p[n-1] + func(W-wt[n-1],wt,p,n-1), func(W,wt,p,n-1)));
}
int main()
{
    int n, W,i, ans;
    cout<<"enter value of N and Weight- ";
    cin>>n>>W;
    int wt[n], p[n];
    cout<<"\nenter weight of N objects- ";
    for(i=0;i<n;i++)
        cin>>wt[i];
    cout<<"\nenter profit of n objects- ";
    for(i=0;i<n;i++)
        cin>>p[i];
    ans= func(W,wt,p,n);
    cout<<"\ntotal profit is - "<<ans;
    return ans;
}
