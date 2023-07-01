/*The puzzle involved two matrices, mat and target, both of size n x n. The wizard's goal 
was to make mat equal to target by rotating mat in 90-degree increments.
Will Algor be successful in making both matrices equal?
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count=3;
    cin>>n;
    int a[n][n], b[n][n], c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    bool flag =true;
    for(int i=0;i<n;i++){// compare if both are same initially
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j])
                flag=false;
        }
        if(flag == false)
            break;
    }
    if(flag)    cout<<"YES";
    else{
        while(count--){
            flag=true;
            int k = 0;
            for(int j=n-1;j>=n/2;j--){ //swap columns
                for(int i=0;i<n;i++)
                    c[i][k]=b[i][j];
                k++;
            }
            for(int j=n/2-1;j>=0;j--){
                for(int i=0;i<n;i++)
                    c[i][k]=b[i][j];
            }
            for(int i=0;i<n;i++){ //transpose matrix
                for(int j=0;j<n;j++)
                    b[j][i]  = c[i][j];
            }
            for(int i=0;i<n;i++){ // compare matrices
                for(int j=0;j<n;j++){
                    if(a[i][j]!=b[i][j]){
                        flag=false;
                        break;
                    }
                if(flag==false)
                    break;
                }
            }
            if(flag){
                cout<<"YES";
                break;
            }
        }
    }
    if(flag==false)    cout<<"NO";
    return 0;
}
