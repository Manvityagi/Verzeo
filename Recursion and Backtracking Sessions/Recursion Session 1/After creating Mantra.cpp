
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
int main() {
    cout << "countOfDigits: " << countOfDigits(54162);
    cout << "\n\nsumOfDigits: " << sumOfDigits(54162);

  return 0;
}