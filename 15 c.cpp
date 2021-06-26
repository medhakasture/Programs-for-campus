#include <iostream>
#include <string>
using namespace std;
void replace(string str, string str2, int pos) {
	str.erase(str.begin() + pos);
    str.insert(pos, str2);
    cout << str;
}
int main() {
    string str,str2;
    int pos;
    cin>>str>>str2>>pos;
    replace(str,str2,pos-1);
    return 0;
}
