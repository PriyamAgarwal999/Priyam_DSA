#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,arr[20],counter_of_zero=0,counter_of_one=0,counter_of_two=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==0) counter_of_zero++;
        else if(arr[i]==1) counter_of_one++;
        else counter_of_two++;
    }
    int k=0;
    for(int i=0;i<counter_of_zero;i++) arr[k++]=0;
    for(int i=0;i<counter_of_one;i++) arr[k++]=1;
    for(int i=0;i<counter_of_two;i++) arr[k++]=2;
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}