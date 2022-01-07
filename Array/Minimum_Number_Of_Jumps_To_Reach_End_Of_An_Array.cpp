#include<iostream>
#include<climits>
using namespace std;
int min_jumps(int arr[],int n){
    int maxR=arr[0],steps=arr[0],jumps=1;
    if(n==1) return 0;
    if(arr[0]==0) return -1;
    else{
        for(int i=1;i<n;i++){
            if(i==n-1) return jumps;
            maxR=max(maxR,i+arr[i]);
            steps--;
            if(steps==0){
                jumps++;
                if(i>=maxR) return -1;
                steps=maxR-i;
            }
        }
    }
}
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=min_jumps(arr,n);
    cout<<ans;
    return 0;
}