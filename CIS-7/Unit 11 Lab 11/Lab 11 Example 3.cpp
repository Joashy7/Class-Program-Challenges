#include <iostream>
using namespace std;

int main(){
  char message[100], ch;
  int key;

  cout << "Enter a message to decrypt: ";
  cin.getline(message, 100);
  cout << "Enter shift value: ";
  cin >> key;

  for (int i = 0; message[i] != '\0'; ++i){
    ch = message[i];
    
    if(ch >= 'a' && ch <= 'z'){
      ch -= key;
      if(ch < 'a')
        ch = ch + 'z' - 'a' + 1;
      message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
      ch -= key;

      if(ch < 'A')
        ch = ch + 'Z' - 'A' + 1;
      message[i] = ch;
    }
  }
  cout << "Decrypted message: " << message;
  return 0;
}