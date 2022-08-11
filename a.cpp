#include<bits/stdc++.h>
using namespace std;
// in an array every interger is apperaing twice but one integer is apperaing once print that integer
int main(){
    int arr[ ] = {1,1,2,3,2,4,4,5,5};
    int xor = 0;
    for(int i=0;i<arr.size();i++)
    xor = xor^arr[i];
    cout<<xor;
}