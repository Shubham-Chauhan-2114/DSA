#include<iostream>
#include<algorithm>

// 1) Selection Sort
void SelectionSort(int arr[], int n){
    int i,j,min_indx;
    for(i=0;i<n-1;i++){
        min_indx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_indx]){
                min_indx=j;
            }
            if(min_indx!=i){
                swap(&arr[min_indx],&arr[i]);
            }
        }
    }
}


//print sorted array
void print(int arr[],int n){
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
// swapping 2 numbers
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i =0; i<n ;i++){
        cin>>arr[i];
    
    Sort_func(arr,n);

    print(arr,n);

    return 0;
}