#include <iostream>
using namespace std;

// This function receives text and shift 
// returns the encrypted text

string encrypt(string text, int s){
  string result = "";

  //transverse text
  for (int i = 0; i < text.length(); i++){
    //apply transformation to each character
    // Encrypt Uppercase letters
    if (isupper(text[i]))
      result += char(int(text[i]+s-65)%26 + 65);
    //Encrypt Lowercase Letters
    else
      result += char(int(text[i] + s - 97)%26 + 97);
  }
  //Return the resulting string
  return result;
}

int main(){
  string text = "ATTACKONTITAN";
  int s = 7;
  cout << "Text : " << text;
  cout << "\nShift: " << s;
  cout << "\nCipher: "<< encrypt(text, s);
  return 0;
}