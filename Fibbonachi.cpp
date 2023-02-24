#include <iostream>
using namespace std;
void main()
{
  unsigned int n, s = 1, ch1 = 0, ch2 = 1, v = 0;
  cout << "Vvvedite nomer chisla: ";
  cin >> n;
  while (s <= n)
  {
    v = ch1 + ch2;
    ch1 = ch2;
    ch2 = v;
  }
  cout << endl << n << " chislo = " << v;
  system("pause");
}
