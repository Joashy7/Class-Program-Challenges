#include <iostream>
#include <string>
using namespace std;

char ceasar(char c){
  if (isalpha(c)){
    c = toupper(c); //use upper to compare with only uppercase
    c = (((c - 65) + 13) % 26) + 65;
  }
  return c;
}

int main() {
  string input;
  do{
    cout << "Enter ciphertext and press enter to continue." << endl;
    cout << "Enter blank line to quit." << endl;
    getline(cin, input);
    string output = "";
    for(int x = 0; x < input.length(); x++)
      output += ceasar(input[x]);
    cout << output << endl;
  } while(input.length() == 0);
  return 0;
}