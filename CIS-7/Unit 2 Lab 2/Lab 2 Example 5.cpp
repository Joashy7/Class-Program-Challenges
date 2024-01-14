#include <iostream>
using namespace std;

int main() {
  char age, exp;

  cout << "Answer the following questions\nwith either Y for Yes or N for No." << endl;
  
  cout << "Are you 21 years old or older?" << endl;
  cin >> age;

  cout << "Do you have 5 or more years of driving experience?" << endl;
  cin >> exp;

  if ((age == 'Y' || age == 'y')&& (exp == 'Y' || exp == 'y'))
    cout << "You qualify for car insurance" << endl;
  else{
    cout << "You must be 21 years old or older and have more than 5 years" <<
      "of driving experience to qualify for car insurance." << endl;
  }
}