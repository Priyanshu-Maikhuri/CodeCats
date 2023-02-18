/*boundary traversal on the matrix in a clockwise manner. 
4
4
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

Sample Output:  1 2 3 4 8 12 16 15 14 13 9 5
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m, n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    if(m==1 ||n==1){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
    }
    }
    else{
        for(int i=0;i<n;i++)
            cout<<a[0][i]<<" ";
        for(int i=1;i<m;i++)
            cout<<a[i][n-1]<<" ";
        for(int i=n-2;i>=0;i--)
            cout<<a[m-1][i]<<" ";
        for(int i=m-2;i>0;i--)
            cout<<a[i][0]<<" ";
    }
    return 0;
}
