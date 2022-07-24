#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> superVector;
void addToSuperVector(vector<int>&res) {
    vector<int> tmpVec = res;
    superVector.push_back(tmpVec);
}

void printSuperVector() {
    for(vector<int>&tmp: superVector) {
        for(int mem: tmp) {
            cout<<mem<<" ";
        }
        cout<<"\n";
    }
}

void printAllSubSeq(int *arr, int i, int n, vector<int>&res) {
    if(i == n) {
        addToSuperVector(res);
        return;
    }
    printAllSubSeq(arr, i+1, n, res);
    res.push_back(arr[i]);
    printAllSubSeq(arr, i+1, n, res);
    res.pop_back();
}

int main() {
/**
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/
    int arr[] = {1,3,4,5,7};
    int n = sizeof(arr)/sizeof(int);
    vector<int>res;
    printAllSubSeq(arr, 0, n, res);
    printSuperVector();
    return 0;
}