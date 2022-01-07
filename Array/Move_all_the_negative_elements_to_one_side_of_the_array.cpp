#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,arr[20],pivot=0,i=-1,j=0;
    cin>>n;
    for(j=0;j<n;j++) cin>>arr[j];
    for(j=0;j<n;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}