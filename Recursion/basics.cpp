#include<bits/stdc++.h>
using namespace std;

void Print(int n)
{
    if(n!=0){
    cout<<n<<endl;
    Print(n-1);
    }

}
int main()
{
    int x;
    x=3;
    Print(x);

}