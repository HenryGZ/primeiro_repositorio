#include <iostream>
#include <locale>

using namespace std;

int main() 
{
	int  cargo, i = 0;
	float salario;
    setlocale(LC_ALL,"Portuguese");
  {
	  cout << "altera��o teste\n"
	  while (i < 3)
	  {
	  	i = i + 1;
	  	cout << "\n================================================";
	  	cout << "\ninforme o c�digo do seu cargo:\n";
	  	cout << "1- escritu�rio;\n2- secret�rio;\n3- caixa;\n4- gerente;\n5- diretor;\n";
	  	cin >> cargo;
	  	cout << "informe seu sal�rio: ";
	  	cin >> salario;
	  	if (cargo == 1)
		  {
		  	salario = salario * 1.5;
		  	cout << "\nseu novo sal�rio como escritu�rio � de: "<<salario;
		  }
	  	if (cargo == 2)
		  {
		  	salario = salario * 1.35;
		  	cout << "\nseu novo sal�rio como secret�rio � de: "<<salario;
		  } 
		if (cargo == 3)
		  {
			salario = salario * 1.2;
			cout << "\nseu novo sal�rio como caixa � de: "<<salario;
		  }	
		if (cargo == 4)
		  {
		  	salario = salario * 1.1;
			cout << "\nseu novo sal�rio como gerente � de: "<<salario;	
		  }	
		if (cargo == 5)
		  {
			cout << "\nseu sal�rio como diretor continua o mesmo";
		  }	    		  
	  }
  }
}