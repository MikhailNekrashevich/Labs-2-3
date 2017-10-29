#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main(){ 

int a; 
	cout << "Гусь доволен(0) или не доволен(1)?" << endl; 
cin >> a; 
if (a == 1)
	{ 
		cout << "Пшёл гулять" << endl; 
	} 
else if (a == 0)
	{ 
		cout << "Скоро кто-то будет в супе" << endl; 
	} 
else
	{ 
		cout << "WTF" << endl; 
	}
return 0; 
}