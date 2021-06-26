#include <iostream>
using namespace std;  
int swap (int &a, int &b) {  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    cout<<"After Function a = "<<a<<" b = "<<b<<endl;
	return a,b; 
}
int main() {  
	int a,b;
	cin>>a>>b;
	cout<<"Before a = "<<a<<" b = "<<b<<endl; 
    a,b=swap(a,b);  
    cout<<"After Main a = "<<a<<" b = "<<b<<endl;
}  
