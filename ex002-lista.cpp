#include <iostream>
#include <locale>

using namespace std;

int main() 
{
	int i = 0, altura, peso;
	setlocale(LC_ALL,"Portuguese");
	{
	 while (i != 5)
	 i = i + 1;	
	 cout << "informe sua altura em cm: ";
	 cin >> altura;
	 cout << "informe seu peso: ";
	 cin >> peso;
		 if (altura < 120)
		 {
			if(peso < 60)
			{
			 	cout << "sua classifica��o � A";
			}
			if(60 <= peso <=90)
			{
			 	cout << "sua classifica��o � D";
			}
			if(peso > 90)
			{
			 	cout << "sua classifica��o � G";
			}
		 }	
	 
		 if (120 <= altura <= 170)
		 {
			if(peso < 60)
			{
			 	cout << "sua classifica��o � B";
			}
			if(60 <= peso <=90)
			{
			 	cout << "sua classifica��o � E";
			}
			if(peso > 90)
			{
			 	cout << "sua classifica��o � H";
			}
		 }	
	   
		 if (altura > 170)
		 {
			if(peso < 60)
			{
			 	cout << "sua classifica��o � C";
			}
			if(60 <= peso <=90)
			{
			 	cout << "sua classifica��o � F";
			}
			if(peso > 90)
			{
			 	cout << "sua classifica��o � I";
			}
		 }
	 	    
	}
}