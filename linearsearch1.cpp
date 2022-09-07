#include<iostream>
using namespace std;
int fun(int *arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        int index=fun(arr,n,k);
        if(index==-1){
            cout<<k<< " is not found"<<endl;
        }
        else {
            cout<<k<<" is found at index "<<index<<endl;
        }
        delete [] arr;
    }
    return 0;
}