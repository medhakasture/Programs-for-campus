#include<iostream>
using namespace std;
int main() {
    char strOrig[100], strCopy[100];
    char *origPtr, *copPtr;
    cout<<"Enter the string: ";
    cin>>strOrig;
    origPtr = &strOrig[0];
    copPtr = &strCopy[0];
    while(*origPtr) {
        *copPtr = *origPtr;
        origPtr++;
        copPtr++;
    }
    *copPtr = '\0';
    cout<<"\nEntered String: "<<strOrig;
    cout<<"\nCopied String: "<<strCopy;
    cout<<endl;
    return 0;
}

