#include <iostream>
using namespace std;
int prime(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return 0;
                break;
            }
        }
    }
    return 1;
}
int main() {
	int n;
	cin>>n;
	if(prime(n))
		cout<<"Prime";
	else
		cout<<"Not Prime";
	return 0;
}
