#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <vector>
#include <algorithm>
// A recursive binary search function. It returns location of x in
// given array arr[l..r] is present, otherwise -1

int binarySearch(std::vector<int>& arr, int l, int r, int x)
{
if (r >= l)
{
		int mid = l + (r - l)/2;

		// If the element is present at the middle itself
		if (arr.at(mid) == x) return mid;

		// If element is smaller than mid, then it can only be present
		// in left subarray
		if (arr.at(mid) > x) return binarySearch(arr, l, mid-1, x);

		// Else the element can only be present in right subarray
		return binarySearch(arr, mid+1, r, x);
}

// We reach here when element is not present in array
return -1;
}

int main(void)
{
int n;
scanf("%d", &n);
std::vector<int> V(n+1);
for(int i = 1; i <= n; i++)
{
    scanf("%d", &V[i]);

}
std::sort(V.begin(), V.end());

int x;
scanf("%d", &x);
int store[x];
int k = 0;
for(int i = 0; i < x; i++){
    int val;
    scanf("%d", &val);
    int result = binarySearch(V, 0, n, val);
    if(result != -1){
        store[k] = result;

        k++;
    }
   // (result == -1)? printf("Element is not present in array")
				//:store[k] = result; k++;

}

for(int i = 0; i < x; i++){
    printf("%d\n", store[i]);
}

return 0;
}
