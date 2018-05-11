/**
 * Created By: Enki Probo S.
 * Description:
 * 	Converting time format 
 * 	from 12-hour AM/PM format
 * 	to military(24-hour) format
 **/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  if ( s[8] == 'P') {
    if ( s.substr(0,2) == "12"){
      cout << s.substr(0,8);
    } else {
      int temp = stoi(s.substr(0,2));
      temp = temp + 12;
      cout << temp << s.substr(2,6);
    }
  }else {
    if ( s.substr(0,2) == "12"){
      cout << "00" << s.substr(2,6);
    }else {
      cout << s.substr(0,8);
    }
  }
}
