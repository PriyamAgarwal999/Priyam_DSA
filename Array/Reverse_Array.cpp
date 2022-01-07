#include<iostream>
using namespace std;
int main(){
    int n,arr[20],start=0,end;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    end=n-1;
    while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
    return 0;
}