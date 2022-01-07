#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int dp[n];
    memset(dp,0,sizeof(dp));
    int ma=arr[n-1];
    int mi=arr[0];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>ma) ma=arr[i];
        dp[i]=max(dp[i+1],ma-arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]<mi) mi=arr[i];
        dp[i]=max(dp[i-1],dp[i]+(arr[i]-mi));
    }
    cout<<dp[n-1];
    return 0;
}