#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
int num2;
cin>>n;

    int num[n];
    for(int i =0; i<n;i++)
    {cin>>num[i];}
    cin>>num2;
    for( int i = num2-1;i<num2;i++)
   cin>>num[i];
    for(int i=0;i<n;i++)
    cout<<" "<<num[i];
    return 0;
}

