#include <iostream>
#include <string>

using namespace std;

int main(){
  string name;
  cin >> name;

  int len = name.length();
  int letters[26] = {0};
  int base = (int) 'a';

  for(int i = 0; i < len; i++){
    char c = name[i];
    int valueIntChar = (int) c;
    int index = valueIntChar - base;
    letters[index] = 1;
  }

  int sum = 0;
  for(int i = 0; i < 26; i++){
    sum += letters[i];
  }

  if (sum % 2 == 0){
    cout << "CHAT WITH HER!" << "\n";
  } else {
    cout << "IGNORE HIM!" << "\n";
  }

  return 0;
}