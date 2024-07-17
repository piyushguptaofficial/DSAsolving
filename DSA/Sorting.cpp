#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    // selection sort
    for (int i =0; i < n-1; i++){
        int mini = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    
    cout<<arr[i]<<" ";
    }
}

void bubbleSort (int arr[], int n){
    for (int i = n-1; i>=0;i--){
        for (int j = 0; j<=i-1;j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for (int i = 0; i<n; i++) cin>> arr[i];
    bubbleSort(arr,n);
    cout<<'\n';
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}