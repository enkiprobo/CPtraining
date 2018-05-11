/**
 * Created by: Enki Probo S.
 * Description:
 * 	Calculating the score of
 * 	Alice and Bob.
 **/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int AB[6];
    int i=0;
    while(i<6){
        cin>>AB[i];
        i++;
    }
    int a=0,b=0;
    i=0;
    while(i<3){
        a+= AB[i]>AB[i+3];
        b+= AB[i]<AB[i+3];
        i++;
    }
    cout << a << " " << b;
    
    return 0;
}
