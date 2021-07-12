#include<iostream>
using namespace std;
int main() {
    int n,a=0,b=1,temp;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++) {
    	
    	temp=a;
    	a=b;
    	b=b+temp;
    	cout<<b<<" ";
	}
}
