#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=2;
    int len=2;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    for(int i=0;i<n;i++)
    {
        if(pd==arr[i]-arr[i-1])
        {
            len++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            len=2;
        }
        ans=max(ans,len);
    }
    cout<<"The maximum length of arithmetic subarrays is "<<ans<<endl;
}