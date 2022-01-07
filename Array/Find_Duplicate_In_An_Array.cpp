#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,int>m;
    for(int i=0;i<n;i++) m[arr[i]]++;
    for(int i=0;i<n;i++){
        if(m[arr[i]]>1){
            cout<<arr[i]<<endl;
            m[arr[i]]=1;
        }
    }
    return 0;
}