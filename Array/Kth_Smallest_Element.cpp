#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,arr[20],k;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cin>>k;
    cout<<arr[k-1];
    return 0;
}