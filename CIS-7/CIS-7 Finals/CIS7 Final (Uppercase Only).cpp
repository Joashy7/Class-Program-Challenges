#include <iostream>
using namespace std;

string encrypt (string text, const string key){
  string encText = "";
  char tmpText;
  for(int i = 0; i < text.length(); i++){
    tmpText  = toupper(text[i]);
    if (tmpText >= 'A' && tmpText <= 'Z'){
      tmpText = (tmpText  + ((toupper(key[i%key.length()])) - 'A'));
      if (tmpText > 'Z'){tmpText = tmpText - 'Z' + 'A';}
      encText += tmpText;
    }
    else
      encText += tmpText;
  }
  return encText;
}

string decrypt (const string text, const string key){
  string decText = "";
  char tmpText;;
  for(int i = 0; i < text.length(); i++){
    tmpText = toupper(text[i]);
    if (tmpText >= 'A' && tmpText <= 'Z'){
      tmpText = (tmpText  + ((toupper(key[i%key.length()])) - 'A'));
      if (tmpText > 'Z'){tmpText = tmpText - 'Z' + 'A';}
      decText += tmpText;
    }
    else
      decText += tmpText;
  }
  return decText;
}

void userInp(string &textInt, string &keyInt, bool conType){
  cout << "------------------------------------------------" << endl;
  cout << (conType ? "Enter the Plaintext to Encrypt: " : "Enter the Plaintext to Decrypt: ");
  cin >> textInt;
  
  cout << (conType ? "Enter the Key for Encryption: " : "Enter the Key for Decryption: ");
  cin >> keyInt;
  cout << "------------------------------------------------" << endl;
}

void menuCip(int &menuInt){
   //Menu and User Input 
    cout << "------------------------------------------------" << endl;
    cout << "Select an option for Vigenere Cipher." << endl
         << "1. Encrypt" << endl
         << "2. Decrypt" << endl
         << "3. Quit" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "User Input: ";
}
int main() {
  string plnText, textKey;
  int menuInt;
  bool conType;
  
  cout << "Welcome to a Vigenere Cipher Encryter & Decryter" << endl;

  do{
    menuCip(menuInt);
    cin >> menuInt;
    //User Input Validation
    while (menuInt < 1 || menuInt > 3){
      cout << "\nInvalid User Input. Outside of Menu Range, Retry. " << endl;
      menuCip(menuInt);
      cin >> menuInt;
    } 
    switch(menuInt){
      case 1:
        conType = true;
        userInp(plnText, textKey, conType);
        cout << "Original Plaintext: " << plnText << endl;
        cout << "Key for Vigenere Encryption: " << textKey << endl;
        cout << "Encrypted Text: " << encrypt(plnText, textKey) << endl;
        break;
      case 2:
        conType = false;
        userInp(plnText, textKey, conType);
        cout << "Original Plaintext: " << plnText << endl;
        cout << "Key for Vigenere Decryption: " << textKey << endl;
        cout << "Decrypted Text: " << decrypt(plnText, textKey) << endl;
        break;
    }
      cout << "------------------------------------------------" << endl;
      cout << "Thank you for using this Vigenere Cipher Program" << endl << endl << endl << endl << endl;
  } while (menuInt != 5);
}

