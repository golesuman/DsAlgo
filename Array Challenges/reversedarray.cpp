#include<iostream>
using namespace std;
void Reversed(int a[],int n)
{
    int s,e,temp;
    s=0;
    e=n-1;
   while(s<e)
   {
      temp=a[s];
      a[s]=a[e];
      a[e]=temp;
       s++;
       e--;
   }



}
int main()
{
    int a[]={10,20,30,50,60};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        
    }
    cout<<endl;

   
    cout<<"The reversed array is:"<<endl;
    Reversed(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        
    }
}