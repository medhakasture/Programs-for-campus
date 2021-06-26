#include <iostream>
using namespace std;
int main() {
    int rows,z=1;
    cin >> rows;
    for(int i = 0; i < rows; i++) {
        for(int space = 1; space <= rows-i; space++)
            cout <<"   ";
        for(int j = 0; j <= i; j++)
            cout << z++ << "     ";
        cout << endl;
    }
    return 0;
}
