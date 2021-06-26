#include<iostream>
using namespace std;
int main() {
	int a[100],n,max,min,i;
	cout<<"Enter no. of elements of Array - ";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++) {
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	cout<<"Max is - "<<max<<endl;
	cout<<"Min is - "<<min<<endl;
	return 0;
}
