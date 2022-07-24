#include <bits/stdc++.h>
using namespace std;


void swap(int*arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reverseArray(int *arr, int i, int j) {
    if(i>=j) {
        return;
    }
    swap(arr, i, j);
    reverseArray(arr, i+1, j-1);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int arr[] = {4,5,1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, 0,n - 1);
    for(int i=0; i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}