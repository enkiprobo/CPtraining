/**
 * Created by: Enki Probo S.
 * Description:
 * 	calculating the probability
 * 	of plus, minus, and zero 
 * 	number from the given input
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
    cin >> n;
    int a=0,b=0,c=0, temp;
    for(int i;i<n;i++){
        cin>>temp;
        a += temp>0;
        b += temp<0;
        c += temp==0;
    }
    cout.precision(5);
    cout << a*1.0/n << endl << b*1.0/n << endl << c*1.0/n;
    return 0;
}

