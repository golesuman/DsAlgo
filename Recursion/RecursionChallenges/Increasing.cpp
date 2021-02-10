#include<iostream>
using namespace std;
void inc(int n)
{
     if(n==0)
     {
          return;
     }
     cout<<n<<" ";
     inc(n-1);
}
int main()
{
     int n;
     cin>>n;
     inc(n);
}