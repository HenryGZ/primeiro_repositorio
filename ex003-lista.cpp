#include <iostream>
#include <locale>

using namespace std;

int main() 
{
  int n1, n2;
  setlocale(LC_ALL,"Portuguese");
  {
  	  cout << "ol�, me informe dois n�meros e vou verificar se s�o multiplos ou n�o.";
	  cout << "\nescreva o primeiro valor: ";
	  cin >> n1;
	  cout << "escreva o segundo valor: ";
	  cin >> n2;
	  cout << "=====================================================================\n";
	  if (n1 % n2 == 0  || n2 % n1 == 0)
	  {
	  	cout << "os n�meros s�o m�ltiplos";
	  }
	  else
	  {
	  	cout << "os n�meros n�o s�o m�ltiplos";
	  }
  }
}