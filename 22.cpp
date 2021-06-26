#include<iostream>
using namespace std;
void bubble_sort(int a[],int n) {
	int x;
	for(int i=0;i<n-1;i++) 
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1]) {
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
}
int main() {
	int n, a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
