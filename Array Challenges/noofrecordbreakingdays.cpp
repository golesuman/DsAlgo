#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int ans;
    a[n]=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    if(n==0)
    {
        cout<<"Insufficient number of elements.\n"<<endl;
        return 0;

    }
    else
    {
        int ans=0;
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mx && a[i]>a[i+1])
            {
                ans++;
            }
        mx=max(mx,a[i]);
        }
    cout<<"The no of recording breaking days are:"<<ans<<endl;
    }
}