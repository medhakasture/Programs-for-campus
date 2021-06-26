#include <bits/stdc++.h>
using namespace std;
int main() {
	int i, j,N;
    cin>>N;
    int A[N][N],B[N][N];
    for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
    		cin>>A[i][j];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
    cout <<"Result matrix is \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           cout <<" "<< B[i][j];
        cout <<"\n";
    }
    return 0;
}
