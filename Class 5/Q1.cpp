/*
Problem
You are given an array A of length N. There are two empty arrays, B and C. You have to put every element of A into either B or C.
The score of an array is defined as the square of the sum of all of its elements. Find the minimum possible absolute difference between the score of B and C.

Input Format:
The first line of input contains a single integer T, denoting the number of test cases.
The first line of each test case contains a single integer N, denoting the length of the array A.
The second line of each test case contains N integers, denoting the elements of array A.

Output Format:
For each test case, print the minimum possible absolute difference between the score of and the score of C.
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
int f(int index, int sum_b, int arr[], int n, int tot_sum) {
	if (index == n) {
        int sum_c = tot_sum - sum_b;
        return abs(sum_b * sum_b - sum_c * sum_c); 
    }
 
    int res1 = f(index+1, sum_b + arr[index], arr, n, tot_sum);
    int res2 = f(index+1, sum_b, arr, n, tot_sum);
 
    return min(res1, res2);
}
 
 
signed main() {
 
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
		int tot_sum = accumulate(arr, arr+n, 0);
		cout<<f(0, 0, arr, n, tot_sum)<<"\n";
	}
 
	return 0;
}