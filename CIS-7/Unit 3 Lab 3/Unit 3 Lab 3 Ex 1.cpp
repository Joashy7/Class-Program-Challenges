#include <iostream>
#include <set>

int main ()
{
  std::set<int> myset;          //declare set myset
  std::set<int>::iterator it;   //declare iterator called it
  std::pair<std::set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=5; ++i) myset.insert(i*9);    // set: 10 20 30 40 50

  ret = myset.insert(18);               // no new element inserted

  if (ret.second==false) it=ret.first;  // "it" now points to element 20

  myset.insert (it,30);
  myset.insert (it,45);
  myset.insert (it,54);
  myset.insert (it,60);
  myset.insert (it,25);                 // max efficiency inserting
  myset.insert (it,24);                 // max efficiency inserting
  myset.insert (it,26);                 // no max efficiency inserting

  
  int myints[]= {5,10,15,2,13,3,17};              // 10 already in set, not inserted
  myset.insert (myints,myints+7);

  std::cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}