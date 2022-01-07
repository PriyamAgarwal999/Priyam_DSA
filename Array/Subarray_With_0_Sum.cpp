#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n,arr[20],s=0,f=0;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s==0 or m[s] or arr[i]==0){
            f=1; 
            break;
        }
        m[s]=1;
    }
    if(f==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}