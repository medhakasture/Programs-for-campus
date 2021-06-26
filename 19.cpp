#include<iostream>
using namespace std;
int main() {
	int arr[100],n,key,i,flag=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cin>>key;
	for(i=0;i<n;i++) {
		if(key==arr[i])
			cout<<key<<" found at position "<<i+1;
			flag=1;
	}
	if(flag=0)
		cout<<"Element not found.";
	return 0;
}
