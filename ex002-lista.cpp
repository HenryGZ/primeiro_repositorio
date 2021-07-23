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
			 	cout << "sua classificação é A";
			}
			if(60 <= peso <=90)
			{
			 	cout << "sua classificação é D";
			}
			if(peso > 90)
			{
			 	cout << "sua classificação é G";
			}
		 }	
	 
		 if (120 <= altura <= 170)
		 {
			if(peso < 60)
			{
			 	cout << "sua classificação é B";
			}
			if(60 <= peso <=90)
			{
			 	cout << "sua classificação é E";
			}
			if(peso > 90)
			{
			 	cout << "sua classificação é H";
			}
		 }	
	   
		 if (altura > 170)
		 {
			if(peso < 60)
			{
			 	cout << "sua classificação é C";
			}
			if(60 <= peso <=90)
			{
			 	cout << "sua classificação é F";
			}
			if(peso > 90)
			{
			 	cout << "sua classificação é I";
			}
		 }
	 	    
	}
}