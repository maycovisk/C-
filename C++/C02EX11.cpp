//C02EX11.CPP

#include <iostream> //i o stram
using namespace std;

int main(void)
{
  int X, Y;

  X = 10; Y = ++X;
  cout << "\nX = " << X << "| Y = " << Y << endl;

  X = 10; Y = X++;
  cout << "\nX =" << X << " | Y = " << Y << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
