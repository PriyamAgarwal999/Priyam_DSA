#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n,arr[20],ma,mi,ans;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    ma=arr[0];
    mi=arr[0];
    ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0) swap(ma,mi);
        ma=max(arr[i],ma*arr[i]);
        mi=min(arr[i],mi*arr[i]);
        ans=max(ans,ma);
    }
    cout<<ans<<endl;
    return 0;
}