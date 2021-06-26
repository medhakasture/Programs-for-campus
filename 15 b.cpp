#include <iostream>
#include <string>
using namespace std;
void era(string str, int pos, int num) {
    str.erase(str.begin() + pos, str.begin() + pos + num);
    cout << str;
}
int main(){
    string str;
    int pos,num;
	cin>>str;
	cin>>pos>>num;
    era(str,pos,num);
    return 0;
}
