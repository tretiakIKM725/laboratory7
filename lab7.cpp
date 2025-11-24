#include <iostream>
using namespace std;

int sumDiv(int n)
{
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
      sum += i;
  }
  return sum;
}

int main()
{
  cout << "Всі дружні числа в інтервалі 1–350 :\n ";
  for (int k = 1; k <= 350; k++)
  {
    int b = sumDiv(k);
    if (b > k && b <= 350)
    {
      if (sumDiv(b) == k)
      {
        cout << k << " та " << b << endl;
      }
    }
  }

  return 0;
}