#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n,m,arr[20];
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=INT_MAX;
    sort(arr,arr+n);
    int i=0,j=m-1;
    while(j<n){
        ans=min(ans,arr[j]-arr[i]);
        i++;
        j++;
    }
    cout<<ans;
    return 0;
}