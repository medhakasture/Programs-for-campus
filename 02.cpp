#include<iostream>
using namespace std;
int main() {
    int n;
    string str,str1;
    cin>>str;
    str1=str;
    n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    if(str1==str)
    	cout<<"Palindrome";
    else
    	cout<<"Not a Palindrome";
    return 0;
}
