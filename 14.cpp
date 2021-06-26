#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(a>=0) {
    	if (a == 0)  {
       		cout<<b;
       		break;
       	}
    	if (b == 0) {
       		cout<<a;
       		break;
       	}
    	if (a == b) {
        	cout<<a;
        	break;
        }
    	if (a > b)
        	a=a-b;
    	b=b-a;
	}
    return 0;
}
