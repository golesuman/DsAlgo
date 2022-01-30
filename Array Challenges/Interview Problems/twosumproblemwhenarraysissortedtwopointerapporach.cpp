#include<bits/stdc++.h>
using namespace std;
void TwoSumOptimal(vector<int>&arr,int key)
{
    int n=arr.size();
    int first=0;
    int second=n-1;
    int sum=0;
    while(first<n)
    {
        sum=arr[first]+arr[second];
        if(sum==key)
        {
            cout<<first+1<<" "<<second+1<<endl;
            break;
        }
        else if(sum>key)
        {
            second--;
        }
        else {
            first++;
        }
    }
    
}
int main()
{
    int n,key;
    cin>>n>>key;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    TwoSumOptimal(arr,key);
}
