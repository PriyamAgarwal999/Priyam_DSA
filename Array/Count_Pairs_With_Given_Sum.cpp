#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    int n,arr[20],k,ans=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int>m;
    cin>>k;
    for(int i=0;i<n;i++){
        if(m[k-arr[i]]){
            ans+=m[k-arr[i]];
        }
        m[arr[i]]++;
    }
    cout<<ans;
    return 0;
}