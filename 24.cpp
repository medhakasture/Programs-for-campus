#include<iostream>
using namespace std;
void insertion_sort(int a[],int n) {
	int i,j,x;  
    for (i = 1; i < n; i++) {
        x=a[i];  
        j=i-1;  
        while (j >= 0 && a[j]>x) { 
            a[j+1]=a[j];  
            j=j-1;  
        }  
        a[j+1]=x;  
    } 
}
int main() {
	int n, a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	insertion_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
