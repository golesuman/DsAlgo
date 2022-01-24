#include<bits/stdc++.h>
using namespace std;
void firstRepeatingElement(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"The first repeating element is "<<a[i]<<endl;
                return;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    firstRepeatingElement(a,n);

}
