#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main(){ 

int a, b, c, d; 
	cout << "Введите 2 числа" << endl; 
cin >> a;
cin >> b; 
	cout << "Введите их произведение" << endl; 
	cin >> c ;
	d = a*b ;
if (d == c)
	{ 
		cout << "Да вы умны" << endl; 
	} 
else 
	{ 
		cout << "Не верно. Реальный ответ " << d << endl; 
	} 
return 0; 
}