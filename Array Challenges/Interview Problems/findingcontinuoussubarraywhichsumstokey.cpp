
#include <bits/stdc++.h>
using namespace std;
int subArraySum(int arr[], int n, int sum)
{
	int curr_sum, i, j;

	for (i = 0; i < n; i++) {
		curr_sum = 0;
		for (j = i ; j < n; j++) {
		curr_sum = curr_sum + arr[j];
		
			if (curr_sum == sum) {
				cout << "Sum found between indexes "
					<< i << " and " << j ;
				return 1;
			}
			
			
		}
	}

	cout << "No subarray found";
	return 0;
}

int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}
