#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,l;
        cin>>n>>m;
        int a[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        l=sum-(m*(sum/m));
        cout<<"Case #"<<(i+1)<<":"<<" "<<l<<endl;

    }
}
