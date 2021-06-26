#include<iostream>
using namespace std;
void fib(int n) {
    static int n1=0, n2=1, n3;    
    if(n>0){
		cout<<n1<<" "; 
    	n3 = n1 + n2;    
    	n1 = n2;    
    	n2 = n3;        
    	fib(n-1);
	}
}
int main () {
    int n;
    cin>>n;
    fib(n);
    return 0;
}
