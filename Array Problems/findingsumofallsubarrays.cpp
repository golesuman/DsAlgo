#include<iostream>
using namespace std;
void getSumofSubarray(int arr[],int n)
{
    int i,j,k,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            { 
                sum=sum+arr[i]+arr[j];
            }

        }
    }

}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    getSumofSubarray(arr,n);
}