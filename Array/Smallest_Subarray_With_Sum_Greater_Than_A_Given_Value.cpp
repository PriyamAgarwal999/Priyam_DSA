#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n,m,arr[20],x;
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>arr[i];
    int mi=INT_MAX;
    int i=0,j=0;
    int s=0;
    while(i<=j and j<n){
        while(s<=x and j<n){
            s+=arr[j++];
        }
        while(s>x and i<j){
            mi=min(mi,j-i);
            s-=arr[i];
            i++;
        }
    }
    cout<<mi;
    return 0;
}