#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int l[20],r[20];
    ma=l[0]=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>ma) ma=arr[i];
        li[i]=ma;
    }
    mi=r[0]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>mi) mi=arr[i];
        r[i]=mi;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(l[i],r[i])-arr[i];
    }
    cout<<sum;
    return 0;
}


//mi is the max value from left side
//ma is the max value from right side