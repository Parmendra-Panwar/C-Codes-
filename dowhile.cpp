#include <iostream>
using namespace std;
int main()
{
  int i = 1;
  do
  {
    i++;
    cout << i;

  } while (i < 5);
  cout << endl;
  i = 1;
  do
  {
    cout << i;
    i++;

  } while (i < 5);
}