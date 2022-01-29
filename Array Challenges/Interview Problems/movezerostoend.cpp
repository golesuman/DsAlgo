#include<iostream>
using namespace std;
void MoveZeros(int arr[],int n)
{
    int first=0;
    int second=1;
    while(second<n)
    {
        if(arr[first]==0 && arr[second]!=0)
        {
            swap(arr[first],arr[second]);
            first++;
            second++;
        }
        else if(arr[first]==0 && arr[second]==0)
        {
            second++;
        }
        else{
            first ++;
            second++;
        }
    }
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
    MoveZeros(arr,n);
    cout<<"Array after moving the zeros to the end"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}