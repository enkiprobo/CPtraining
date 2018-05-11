/**
 * Created by: Enki Probo S.
 * Description:
 * 	Just summing a big number
 * 	of value in array
 **/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    short int n;
    cin >> n;
    long long int sum=0,temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        sum+=temp;
    }
        
    cout << sum;
    
    return 0;
}
