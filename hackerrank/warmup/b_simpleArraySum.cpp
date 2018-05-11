/**
 * Edited by: Enki Probo S.
 * Description:
 * 	A program for summing 
 * 	the element in input array
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
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    cout<<sum;
    return 0;
}
