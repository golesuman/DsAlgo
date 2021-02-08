#include<iostream>
using namespace std;
int main()
{
     int i,n;
     cin>>n;
     int a[n];
     cout<<"Enter the elements of array:"<<endl;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(i=0;i<n;i++)
     {
          for(int j=0;j<n-1;j++)
          {
               int temp=a[j];
               if(a[j]>a[j+1])
               {
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
          }
     }
     cout<<"The sorted array is:"<<endl;
     for(int j=0;j<n;j++)
     {
          cout<<a[j]<<endl;
     }

}