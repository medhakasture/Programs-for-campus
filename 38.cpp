#include <iostream>
using namespace std; 
int fact(int n) {
    if(n==1)
    	return 1;
    else
		return n*fact(n-1);
}
int main() {
	int n,r,ncr;
	cin>>n;
	cin>>r;
  	ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<ncr;
    return 0;
}
