/*In this problem we can buy and sell stock for multiple times but stock can not be sold or bought repeatedly
and we have to maximise the profit after buying and selling stocks for multiple times*/
#include<iostream>
using namespace std;
int MaximisedProfit(int arr[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit+=(arr[i]-arr[i-1]);
        }
    }
    return profit;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int profit=MaximisedProfit(arr,n);
    cout<<"The total maximised profit is "<<profit<<endl;
}