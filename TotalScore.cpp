// Diagonal sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m, sum=0;
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(i==j)    sum+=a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(i != m-1-i)
            sum+=a[i][m-1-i];
    }
    cout<<sum;
    return 0;
}
