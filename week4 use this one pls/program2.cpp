#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	char names[30][20];

	for (int i = 0; i < 30; i++)
	{
		cout << "\Enter Name: ";
		cin.getline(names[i], 30); //this null-terminates the array of chars by placing a '\0' at the end of the stream
	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			//check to see if we hit the end of the string
			if (names[i][j] != '\0')
				cout << names[i][j];
			else if (names[i][j] == ' ')
			{
				cout << "\n";
				break;
			}				
			else
			{
				cout << "\n"; //formatting
				break; //stop printing past null terminator (garbage chars)
			}
		}
	}
}