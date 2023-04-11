#include  <iostream> 
#include <string.h> 
#include <Windows.h> 
using namespace std; 
int main () 
{ 
 SetConsoleCP(1251); 
 SetConsoleOutputCP(1251); 
 setlocale(LC_ALL, "Rus"); 
 char str[200]; 
 int j,kolJjOne=0,kolJjTwo=0; 
 cout << "Введите текст:\n"; cin.getline(str, 200); 
 for (j = 0; j < strlen(str); j++) 
  {
   if (j<strlen(str)/2 &&str[j]=='ж' ||str[j]=='Ж')kolJjOne++; 
   if (j>strlen(str)/2 &&str[j]=='ж'||str[j]=='Ж')kolJjTwo++; 
  } 
 cout << "\n\nКоличество букв Ж и ж в первой половине текста=" << kolJjOne; 
 cout << "\n\nКоличество букв Ж и ж во второй половине текста=" <<kolJjTwo;
 if (kolJjTwo > kolJjOne)cout << "\n\nБукв Ж и ж больше во второй части текста\n"; 
if (kolJjTwo < kolJjOne)cout << "\n\nБукв Ж и ж больше в первой части текста\n"; 
if (kolJjOne=kolJjTwo) cout<<"\n\nРавное количество букв";
}
