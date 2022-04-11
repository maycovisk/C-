//C03EX4D - LOPA
#include <iostream>
#include <cmath>
using namespace std;

const int L = 12;

int main(void)
{
  float T, V, D,LU;

  cout << "Digite o tempo de viagem...: "; //como é calculado o tempo? minutos, horas?
  cin >> T;
  cin.ignore(80,'\n');

  cout << "Digite a velocidade media..: ";
  cin >> V;
  cin.ignore(80,'\n');

  D = T * V;
  LU = D / L;

  cout << "A quantidade de litro usado nesta viagem foi de...: " << LU << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
