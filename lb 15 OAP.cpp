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
 cout << "������� �����:\n"; cin.getline(str, 200); 
 for (j = 0; j < strlen(str); j++) 
  {
   if (j<strlen(str)/2 &&str[j]=='�' ||str[j]=='�')kolJjOne++; 
   if (j>strlen(str)/2 &&str[j]=='�'||str[j]=='�')kolJjTwo++; 
  } 
 cout << "\n\n���������� ���� � � � � ������ �������� ������=" << kolJjOne; 
 cout << "\n\n���������� ���� � � � �� ������ �������� ������=" <<kolJjTwo;
 if (kolJjTwo > kolJjOne)cout << "\n\n���� � � � ������ �� ������ ����� ������\n"; 
if (kolJjTwo < kolJjOne)cout << "\n\n���� � � � ������ � ������ ����� ������\n"; 
if (kolJjOne=kolJjTwo) cout<<"\n\n������ ���������� ����";
}
