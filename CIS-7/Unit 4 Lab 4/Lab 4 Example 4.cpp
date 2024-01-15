#include <iostream>
#include <algorithm>
using namespace std;

void permute(string str, string out){
  // When size of str becomes 0, out has no permutations
  if (str.size() == 0){
    cout << out << endl;
    return;
  }
  for (int i = 0; i < str.size(); i++){
    // Remove first character of string and add to out
    permute(str.substr(1), out + str[0]);
    // Rotate string so 2nd character can move to start
    rotate(str.begin(), str.begin() + 1, str.end());
  }
}
int main() {
  string str = "EFABCD";
  permute(str, "");
  return 0;
}