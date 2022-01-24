#include<iostream>
using namespace std;
int removeDuplicates(int a[],int n)
{
    int len=0;
    
    if(n==0)
            cout<<"Empty array"<<endl;
    else
     {      for(int i=0;i<n-1;i++){
        
            if(a[i]!=a[i+1])
            {
                a[len]=a[i];
                len++;

            }
           
        }
    a[len++]=a[n-1];
    return len;
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
    int len=removeDuplicates(arr,n);
    int i;
    cout<<"Array after removing duplicates:"<<endl;
    for(i=0;i<len;i++)
    {   
        cout<<arr[i]<<endl;

    }
}