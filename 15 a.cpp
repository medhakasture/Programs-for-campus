#include <iostream>
#include <string>
using namespace std;
void ins(string str1, string str2, int pos) {
    str1.insert(pos, str2);
    cout << str1;
}
int main() {
    string str1,str2;
    int pos;
    cin>>str1>>str2;
    cin>>pos;
    ins(str1, str2, pos);
    return 0;
}
