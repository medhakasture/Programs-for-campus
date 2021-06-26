#include <iostream>
using namespace std;
int main() {
    int grade;
    cin>>grade;
    if(grade>=60)
    	cout<<"FIRST";
    else if(grade>=50)
    	cout<<"SECOND";
    else if(grade>=40)
    	cout<<"THIRD";
    else
    	cout<<"FAILED";
    return 0;
}
