#include <iostream>

using namespace std;

int main(void){
  int n;
  cin >> n;
  int count = 0;

  while(n--){
    int p, v, t;
    cin >> p >> v >> t;
    
    int sum = p + v + t;
    if (sum >= 2) count++;
  }

  cout << count << "\n";
  
  return 0;
}