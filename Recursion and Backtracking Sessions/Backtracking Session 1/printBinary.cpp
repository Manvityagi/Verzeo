/*

Write a recursive function printAllBinary that accepts an
integer number of digits and prints all binary numbers that have
exactly that many digits, in ascending order, one per line.

printAllBinary(2);     printAllBinary(3);
    00                          000
    01                          001
    10                          010
    11                          011
    100
    101
    110
    111

*/
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &curr){
    for(int i = 0; i < curr.size(); i++) cout << curr[i];
    cout << "\n";
}

void printAllBinary(int n, vector<int> &curr){
}

int main(){
    int n;
    cin >> n;
    vector<int> curr;
    printAllBinary(n,curr);
    return 0;
}