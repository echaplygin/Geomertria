#include<iostream>
using namespace std;

//#define PIFAGOR
#define HARDCHESS

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined PIFAGOR
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		
			cout << i * j << " ";
			cout << endl;
  
     }
	
#endif

#if defined HARDCHESS



#endif





}

