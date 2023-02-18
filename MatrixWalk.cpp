/*
1  2  4  7  11 
3  5  8  12 16 
6  9  13 17 20
10 14 18 21 23
15 19 22 24 25
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, s=1;
    cin>>n;
    int A[n][n];
    for(int j=0;j<n;j++){
        int k=j, i=0;
        while(k>-1)
            A[i++][k--]=s++;
    }
    for(int i=1;i<n;i++){
        int k=n-1, r=i;
        while(r<n)
            A[r++][k--]=s++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
