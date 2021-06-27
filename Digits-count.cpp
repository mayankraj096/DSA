#include<iostream>
using namespace std;
int main()
{
    int N,r,count=0;
    cin>>N;
    while(N>0)
    {
        r=N%10;
        count++;
        N=N/10;
    }
    cout<<"\n"<<count;
}
