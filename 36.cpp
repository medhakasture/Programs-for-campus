#include<iostream>
using namespace std;
int strlen(string str) {
	char *ptr;
    int count=0;
	ptr = &str[0];
    while(*ptr) {
        count++;
        ptr++;
    }
    return count;
}
int main() {
    char str[100];
    int res;
    cout<<"Enter the string: ";
    cin>>str;
    res=strlen(str);
    cout<<res;
    return 0;
}

