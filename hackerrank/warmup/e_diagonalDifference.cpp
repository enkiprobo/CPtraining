/** 
 * Created by: Enki Probo S.
 * Description:
 * 	summing the 2 main diagonal element
 * 	of 2D array and then show the
 * 	difference
 **/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int rs=0;
    for(int i=0;i<n;i++){
        rs+=a[i][i]-a[i][n-i-1];
    }
    cout << abs(rs);
    
    
    return 0;
}

