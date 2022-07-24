#include <bits/stdc++.h>
using namespace std;



void printAllSubstrings(vector<string>&res) {
    for(string str: res) {
        cout<<str<<" ";
    }
}

void getAllSubStrings(string&input, int i, int n, string formedString, vector<string> &res) {
    if(i==n) {
        return;
    }
    formedString += input.at(i);
    string tmpString = formedString;
    res.push_back(tmpString);
    getAllSubStrings(input, i+1, n, formedString, res);
    formedString = "";
    getAllSubStrings(input, i+1, n, formedString, res);
}

int main() {
    string inputString = "abcdefg";
    int n = inputString.length();
    vector<string> res;
    string formedString = "";
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            formedString += inputString[j];
            res.push_back(formedString);
        }
        formedString = "";
    }
    printAllSubstrings(res);
    return 0;
}