#include<iostream>
using namespace std;
int main() {
	int a[100],n,max,i;
	cout<<"Enter no. of elements of Array - ";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	max=a[0];
	for(i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	cout<<"Max is - "<<max<<endl;
	return 0;
}
