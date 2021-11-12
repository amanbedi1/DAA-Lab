// author : Amanpreet Singh Bedi 

// Problem : Implement Binary Search to find given element 

#include<bits/stdc++.h>

using namespace std;

void binarySearch(int arr[], int element, int n) {

  int l = 0, r = n - 1;

  int comparison = 0;

  while (l <= r) {

    ++comparison;

    int mid = (l + r) / 2;

    if (arr[mid] == element) {

      cout << "Present " << comparison << '\n';
      return;
    } else if (arr[mid] > element) {

      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }

  cout << "Not Found\n";
}

void solve() {

  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int element;

  cin >> element;

  binarySearch(arr, element, n);
}

int main() {

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int test_cases;

  cin >> test_cases;

  while (test_cases--) {

    solve();
  }
}