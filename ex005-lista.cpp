#include <iostream>
#include <locale>

using namespace std;

int main() 
{
	int n1, primo = 0, i = 0 ;
	setlocale(LC_ALL,"Portuguese");
	{
		cout << "informe um n�mero inteiro maior que 1: ";
		cin >> n1;
		while (i < 11)
		{
			i = i + 1;
			if(n1 % i == 0)
			{
				primo = primo + 1;
			}
		}
		if (primo > 2)
		{
			cout << "n�mero n�o primo";
		}
		else
		{
			cout << "n�mero primo";
		}
	}
}