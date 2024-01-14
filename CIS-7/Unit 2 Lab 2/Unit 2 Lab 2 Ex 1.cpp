#include <iostream>
using namespace std;

int main(){
  unsigned int P = 40;
  unsigned int Q = 17;
  int result;

  result = P & Q;
  cout << "Result of P & Q is: " << result << endl;

  result = P | Q;
  cout << "Result of P | Q is: " << result << endl;
  
  result = P ^ Q;
  cout << "Result of P ^ Q is: " << result << endl;
  
  result = ~P;
  cout << "Result of ~P is: " << result << endl;  
  
  result = ~(P & Q);
  cout << "Result of ~(P & Q) is: " << result << endl;  
  
  result = ~(P | Q);
  cout << "Result of ~(P | Q) is: " << result << endl; 
  
  result = P << 3;
  cout << "Result of P << 3 is: " << result << endl;  
  
  result = P >> 3;
  cout << "Result of P >> 3 is: " << result << endl;  
}