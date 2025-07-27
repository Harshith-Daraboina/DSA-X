#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for(int i=0 ; i<= n-2 ; i++){
        int min = i ;
        for(int j=i ; j<=n-1 ; j++){
            if(arr[j] < arr[min]){
                min = j ;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void insertionSort(vector<int> &arr, int n) {
    for(int i = 1 ; i<=n-1 ; i++){
        int j=i;

        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }

    }
}

void bubbleSort(vector<int>& arr, int n) {
    for(int i= 0 ; i<=n-2 ; i++){
        for(int j=0 ; j<=n-2-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void merge(vector<int>& arr, int l, int m, int r) {
    vector<int> temp(r-l+1);
    if (m>l) {
        for (int i = m; i <= r; i++) {
            temp[i-l] = arr[i];
        }
    }
    else {
        for (int i = l; i <= r; i++) {
            temp[i-l] = arr[i];
        }
    }
    
    int i = l;
    int j = l;
    for (int k = l; k <= r; k++) {
        if (i > m) {
            arr[k] = temp[j-l];
            j++;
        }
        else if (j > r) {
            arr[k] = temp[i-l];
            i++;
        }
        else if (temp[i-l] < temp[j-l]) {
            arr[k] = temp[i-l];
            i++;
        }
        else {
            arr[k] = temp[j-l];
            j++;
        }
    
    }
}
void mergeSort(vector<int>& arr, int l, int r) {
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i= low;
    int j= high;
    while(i<j){
        while (arr[i] <= pivot && i < high) {
            i++;
        }
        while (arr[j] > pivot && j > low) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int>& arr, int low, int high) {
    if(low < high){
        int partitionIndex = partition(arr , low , high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }
}



int main() {
    int n; 
    // cin>>n;
    n=7;
    vector<int> arr(n);
    // for(int i=0;i<n;i++) cin>>arr[i];

    arr= {5, 2, 9, 1,1,2, 5};
    // insertionSort(arr, n);
    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    // mergeSort(arr, 0, n-1);
    // quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}