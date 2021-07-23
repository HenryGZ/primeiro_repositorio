#include <iostream>
#include <locale>

using namespace std;

int main() 
{
  int n1, n2;
  setlocale(LC_ALL,"Portuguese");
  {
  	  cout << "olá, me informe dois números e vou verificar se são multiplos ou não.";
	  cout << "\nescreva o primeiro valor: ";
	  cin >> n1;
	  cout << "escreva o segundo valor: ";
	  cin >> n2;
	  cout << "=====================================================================\n";
	  if (n1 % n2 == 0  || n2 % n1 == 0)
	  {
	  	cout << "os números são múltiplos";
	  }
	  else
	  {
	  	cout << "os números não são múltiplos";
	  }
  }
}