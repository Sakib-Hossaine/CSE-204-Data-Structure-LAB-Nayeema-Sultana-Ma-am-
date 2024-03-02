#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
int num2,num3;
cin>>n;

    int num[n];
    for(int i =0; i<n;i++)
    cin>>num[i];
    cin>>num2>>num3;
    for(int i=n-1;i>=num3;i--){
        num[i]=num[i-1];
    }
  num[num3]=num2;
    for(int i=0;i<n;i++)
    cout<<" "<<num[i];
    return 0;
}

