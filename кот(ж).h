#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main(){ 

int a, b; 
cout << "Введите вес первого кота" << endl; 
cin >> a; 
if (a > 5){ 
cout << "Кот жирный" << endl; 
} 
else 
{ 
cout << "Кот не жирный" << endl; 
} 
cout << "Введите вес второго кота" << endl; 
cin >> b; 
if (b > 5){ 
cout << "Кот жирный" << endl; 
} 
else 
{ 
cout << "Кот не жирный" << endl; 
} 
return 0; 
}