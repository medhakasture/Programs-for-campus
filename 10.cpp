#include <iostream>
using namespace std;  
void swap (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    cout<<"After Function a = "<<a<<" b = "<<b<<endl;  
}
int main() {  
	int a,b;
	cin>>a>>b;
	cout<<"Before a = "<<a<<" b = "<<b<<endl; 
    swap(a,b);  
    cout<<"After Main a = "<<a<<" b = "<<b<<endl;
}  
