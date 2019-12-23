#include <iostream>
using namespace std;

template <class T>
class mypair {
    T a, b;
  public:
    mypair (T first, T second)
      {a=first; b=second;}
    T getmax ();
};

template <class T>
T mypair<T>::getmax ()
{
  T retval;
  retval = a>b ? a : b;
  return retval;
}

int main () {
  mypair <int> myobject1 (13, 7);
  cout << myobject1.getmax()<<endl;;
  mypair <double> myobject2 (97.4, 33.8);
  cout << myobject2.getmax()<<endl;
  mypair <char> myobject3 ('A', 'E');
  cout << myobject3.getmax()<<endl;
  return 0;
}