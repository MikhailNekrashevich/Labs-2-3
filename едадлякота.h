#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main(){ 

int a; 
	cout << "выберете котика" << endl; 
cin >> a;
switch (a)
	{
		case 1:
		{
			cout << "Корм с кроликом ваш выбор для диеты" << endl; 
			break ;
		}
		case 2:
		{
			cout << "Корм с курицей ваш выбор для диеты" << endl; 
			break ;
		}
		case 3:
		{
			cout << "Корм с овощами ваш выбор для диеты" << endl; 
			break ;
		}
		case 4:
		{
			cout << "Паштет ваш выбор для диеты" << endl; 
			break ;
		}
		case 5:
		{
			cout << "Кравянка ваш выбор для диеты" << endl; 
			break ;
		}
		case 6:
		{
			cout << "Балык ваш выбор для диеты" << endl; 
			break ;
		}
		case 7:
		{
			cout << "Сосиски ваш выбор для диеты" << endl; 
			break ;
		}
		case 8:
		{
			cout << "Корм с рыбкой ваш выбор для диеты" << endl; 
			break ;
		}	
		case 9:
		{
			cout << "Крабовые палочки ваш выбор для диеты" << endl;
			break ;
		}
		case 10:
		{
			cout << "Мясо птицы ваш выбор для диеты" << endl; 
			break ;
		}
	}

return 0; 
}