#include <iostream>
using namespace std;
int main() {
    int n = 5;
    double i, s = 0.0;
    for (i = 1; i <= n; i++)
    	s = s + 1/i;
    cout << "Sum is " << s;
    return 0;
}
