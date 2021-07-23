#include <iostream>
#include <locale>

using namespace std;

int main() 
{
	int  cargo, i = 0;
	float salario;
    setlocale(LC_ALL,"Portuguese");
  {
	  cout << "alteração teste\n"
	  while (i < 3)
	  {
	  	i = i + 1;
	  	cout << "\n================================================";
	  	cout << "\ninforme o código do seu cargo:\n";
	  	cout << "1- escrituário;\n2- secretário;\n3- caixa;\n4- gerente;\n5- diretor;\n";
	  	cin >> cargo;
	  	cout << "informe seu salário: ";
	  	cin >> salario;
	  	if (cargo == 1)
		  {
		  	salario = salario * 1.5;
		  	cout << "\nseu novo salário como escrituário é de: "<<salario;
		  }
	  	if (cargo == 2)
		  {
		  	salario = salario * 1.35;
		  	cout << "\nseu novo salário como secretário é de: "<<salario;
		  } 
		if (cargo == 3)
		  {
			salario = salario * 1.2;
			cout << "\nseu novo salário como caixa é de: "<<salario;
		  }	
		if (cargo == 4)
		  {
		  	salario = salario * 1.1;
			cout << "\nseu novo salário como gerente é de: "<<salario;	
		  }	
		if (cargo == 5)
		  {
			cout << "\nseu salário como diretor continua o mesmo";
		  }	    		  
	  }
  }
}