/*In this problem we are going to do the problem related to stock where the prices of stocks are given and we have to find the maximum proftt that
can be made*/

#include<iostream>
using namespace std;
int MaxProfit(int arr[],int n)
{
    int maxprofit=0;
    int minprice=1e9;
    for (int i=0;i<n;i++)
    {
        minprice=min(minprice,arr[i]);
        maxprofit=max(maxprofit,arr[i]-minprice);
    }
    return maxprofit;
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
    int maxprofit=MaxProfit(arr,n);
    cout<<"The maximum profit is "<<maxprofit<<endl;
}