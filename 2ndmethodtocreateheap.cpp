#include<iostream>
using namespace std;

void heapify(int arr[],int index,int n){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index+2;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
         largest = right;
    }
    if(largest!= index){
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}

void Buildmaxheap(int arr[],int n){
//step down
for(int i=n/2-1;i>=0;i--){
    heapify(arr,i,n);
}
}

void printheap(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){

//Building MaxHeap by step down approach

int arr[]={34,19,28,38,10,3,2,7,4,89};
Buildmaxheap(arr,10);
printheap(arr,10);


}