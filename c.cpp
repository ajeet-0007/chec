#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
   /* int x = 0;
    for(int i=1;i<=a;i++)
    x=x^i;
    cout<<x;*/
    if(a%4==0)
    cout<<a;
    if(a%4==1)
    cout<<'1';
    if(a%4==2)
    cout<<a+1;
    if(a%4==3)
    cout<<'0';
    }