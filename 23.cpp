#include<iostream>
using namespace std;
void swap(int *a, int *b)  {
    int c = *a;  
    *a = *b;  
    *b = c;  
}
void Selection_Sort(int a[], int n) {
    int i, j, min;  
    for (i = 0; i < n-1; i++)  {  
        min = i;  
        for(j = i+1; j < n; j++)  {
        	if (a[j] < a[min])  
            min = j;  
        }
        swap(&a[min], &a[i]); 
    }  
}
int main() {
	int i,n,a[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	Selection_Sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
