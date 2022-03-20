
#include <bits/stdc++.h>
using namespace std;

int countOfDigits(int n) {
  // base case
  if(n==0) return 0;

  // recursion work
  int small_ans = countOfDigits(n/10);

  // my-work
  int ans = 1+small_ans;

  return ans;

}

int sumOfDigits(int n) {
  // base case
  if(n==0) return 0;

  // recursion work
  int small_ans = sumOfDigits(n/10);

  // my-work
  int ans = n%10 + small_ans;

  return ans;
}

// 0 1 1 2 3 5 8 13 21...
int nthFibonacci(int n) {
  //base cases
  if(n == 0) return 0;
  if(n == 1) return 1;

  //recursion work
  int prev_fib = nthFibonacci(n-1);
  int prev_prev_fib = nthFibonacci(n-2);

  //our work
  int final_ans = prev_fib + prev_prev_fib;
  return final_ans;
}

void reverseString(string &s, int lo, int hi){
    if(lo>=hi) return;
    reverseString(s, lo+1, hi-1);
    swap(s[lo], s[hi]);
}

void reverseString(string &s) {
  reverseString(s,0,s.size()-1);
}

//NITIN = NITIN
bool isPalindrome(string &s, int lo, int hi){
  return 0;
}

bool isPalindrome(string &s){
    return isPalindrome(s,0,s.size()-1);
}

//aabbdddef = abdef
// TC = n*n
string removeDuplicates(string s) {
  return "";
}

int nonConsecutiveOnes(int n){
  return 0;
}

int StairCase(int n){
  return 0;


}

double myPow(double x, int n) {
  return 0;

}

int main() {
    cout << "countOfDigits: " << countOfDigits(54162);
    cout << "\n\nsumOfDigits: " << sumOfDigits(54162);
    cout << "\n\nnth Fibonacci: " << nthFibonacci(6);
  
    string s = "DESIRE";
    cout << "\n\nOriginal String: " << s;
    reverseString(s);
    cout << "\n\nreversedString: " << s;
    string s2 = "NITIN";
    cout << "\n\nisPalindrome: " << s << " "  << isPalindrome(s);
    cout << "\n\nisPalindrome: " << s2 << " " << isPalindrome(s2);

    cout << "\n\nremoveDuplicates: " << removeDuplicates("abcddcba");
    cout << "\n\ncountNonConsecutiveOnes" << nonConsecutiveOnes(5);
    cout << "\n\nstairCase " << StairCase(5);

    cout << "\n\nmyPow " << myPow(5,2);

  return 0;
}