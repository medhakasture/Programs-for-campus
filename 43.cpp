#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,N,flag=0;
    cin>>N;
    int A[N][N],B[N][N];
    for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
    		cin>>A[i][j];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        	if(A[i][j]!=B[i][j]) {
        		flag=1;
        		break;
        	}
    if(flag!=1)
    	cout<<"Symetric";
    else
    	cout<<"Not Symetric";
    return 0;
}
