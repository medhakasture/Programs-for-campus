#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main() {
    int arr[100],x,n,l,r,m,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cin>>x;
    l=0;r=n-1;
    while(r>=l) {
    	int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            cout << "Element is present at index " << mid;
            flag=1;
        if (arr[mid] > x)
            r=mid-1;
        l=mid+1;
	}
	if(flag!=1)
		cout << "Element is not present in array";
	return 0;
}
