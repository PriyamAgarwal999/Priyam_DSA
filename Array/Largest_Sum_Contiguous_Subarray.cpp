#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,arr[20],max=INT_MIN,max_till_here=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        max_till_here+=arr[i];
        if(max_till_here<arr[i]) max_till_here=arr[i];
        if(max<max_till_here) max=max_till_here;
    }
    cout<<max;
    return 0;
}