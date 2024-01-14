#include <iostream>
using namespace std;

int main() {
  const int MIN_CRD= 60;
  const int MIN_SEM = 5;
  int a, b;

  cout << "How many credits have you taken?" << endl;
  cin >> a;

  cout << "How many semesters were you a full-time student?" << endl;
  cin >> b;

  if (!(a >= MIN_CRD || b >= MIN_SEM)){
    cout << "You must have at least " << MIN_CRD << " credits or have been a full time student for "
      << MIN_SEM << " semesters to earn an associates degree." << endl;
  }
  else 
    cout << "You have enough credits to apply for your associates degree!";
}