#include<iostream>
using namespace std;
int main(){
    int n,arr[20],min,max;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n==1){
        min=arr[0];
        max=arr[0];
    }
    if(arr[0]>arr[1]){
        max=arr[0];
        min=arr[1];
    }
    else{
        max=arr[1];
        min=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    cout<<"min element is "<<min<<endl;
    cout<<"max element is "<<max<<endl;
    return 0;
}