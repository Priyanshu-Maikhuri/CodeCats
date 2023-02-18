/*
1 1 1 1
1 2 2 1
1 2 2 1
1 1 1 1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, s = 1;
    cin>>n;
    int i=0, k=n-1, a[n][n];
    while(i<=k){
        for(int j=i;j<=k;j++)
            a[i][j]=a[j][i]=a[k][j]=a[j][k]=s;
        s++;
        i++;
        k--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
