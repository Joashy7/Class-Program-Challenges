#include <iostream>
#include <string>
using namespace std;

string Encrypt(string Source, int Key){
  string Crypted = Source;

  for(int Current = 0; Current < Source.length(); Current++)
    Crypted[Current] += Key;

  return Crypted;
}

int main() {
  string Source;
  int Key;

  cout << "Input Message: ";
  getline(cin, Source);

  cout << "Input Shift Key: ";
  cin >> Key;

  cout << "Encrypted: " << Encrypt(Source, Key) << endl;
  return 0;
}