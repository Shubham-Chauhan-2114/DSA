#include<iostream>
#include<algorithm>

//Linear Search
int LinearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

//Binary Search
int BinSearch(int arr[],int k,int h,int l){
    if(l<=h){
        int mid = l + (h-l)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            return BinSearch(arr,k,mid-1,0);
        }
        if(arr[mid]<k){
            return BinSearch(arr,k,h,mid+1);
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i =0; i<n ;i++){
        cin>>arr[i];
    }

    int indx = BinSearch(arr,n,k);
    cout<<indx<<endl;

    return 0;
}