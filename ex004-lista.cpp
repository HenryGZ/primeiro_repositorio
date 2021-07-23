#include <iostream>
#include <locale>

using namespace std;

int main() 
{
	int se, i = 0;
	float n1, n2, maior;
	setlocale(LC_ALL,"Portuguese");
	{
		while (i <= 1)
		{
			cout << "\n=====================================================\n";
			cout << "escolha um número conforme a legenda: ";
			cout << "\n1- média entre os números digitados;\n2- diferença do maior pelo menor;\n3- produto entre os números digitados;\n4- divisão do primeiro pelo segundo;\n";
			cout << "-> ";
			cin >> se;
			
			if (se == 1)
			{
				i = i + 1;
				cout << "digite um número: ";
			   	cin >> n1;
			   	cout << "digite o segundo número: ";
			   	cin >> n2;
				cout << "resultado = "<<(n1 + n2)/2;
			}
			
			if (se == 2)
			{
				i = i + 1;
				cout << "digite um número: ";
			   	cin >> n1;
			   	cout << "digite o segundo número: ";
			   	cin >> n2;
				maior = n1;
				if(maior > n2)
				{
					cout << "resultado = "<< n1-n2;
				}
				else
				{
					cout << "resultado = "<< n2-n1;
				}
			}
			
			if (se == 3)
			{
				i = i + 1;
				cout << "digite um número: ";
				cin >> n1;
				cout << "digite o segundo número: ";
			   	cin >> n2;
				cout << "resultado =  "<< n1 * n2;
			}
			
			if (se == 4)
			{
				i = i + 1;
				cout << "digite um número: ";
				cin >> n1;
				cout << "digite o segundo número: ";
				cin >> n2;
				cout << "resultado = "<< n1 / 2;
			}
			if (se > 4)
			{
				cout << "opção inválida!!, digite uma opção novamente.\n";
			}
		}
	}
}