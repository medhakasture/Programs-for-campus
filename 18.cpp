#include<iostream>
using namespace std;
int linear(int arr[],int n,int key) {
	if(n<0)
		return -1;
	if(key==arr[n])
		return n+1;
	else
		return linear(arr,n-1,key);
}
int main() {
	int arr[100],n,key,i,flag=0,pos;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cin>>key;
	pos=linear(arr,n-1,key);
	if(pos==-1)
		cout<<"Element not found.";
	else
		cout<<key<<" found at position "<<pos;
	return 0;
}
