#include<bits/stdc++.h>
using namespace std;
void PrintAllPairs(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";

            

        }
    }
    
}
int main()
{
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(int);

    cout<<"The all pairs of the array are:"<<endl;
    PrintAllPairs(a,n);


}