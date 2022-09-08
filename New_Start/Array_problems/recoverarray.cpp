#include<bits/stdc++.h>
using namespace std;
void restore(int a[], int b[], int n)
{
    int left, mid, right;
    mid = n/2;
    int i = 0;
    if(n%2 != 0)
    {
        a[mid] = b[i];
        left = mid - 1;
        right = mid + 1;
        i++;
    }
    else
    {
        left = mid - 1;
        right = mid;
    }
        
    while (i<n)
    {
        a[left] = b[i];
        left --;
        i++;
        a[right] = b[i];
        right ++;
        i++;
    }
        
}
   
int main()
{
    
  
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    int a[n];
    int b[n];
    cout<<"Enter the array elements of b:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    cout<<"The output array is "<<endl;
    restore(a, b, n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // cout<<restore(a,b, n)<<endl;


}