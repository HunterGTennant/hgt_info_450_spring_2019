#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	char sentence[30][20];

	for (int i = 0; i < 30; i++)
	{
		cout << "\Enter Name: ";
		cin.getline(sentence[i], 30); //this null-terminates the array of chars by placing a '\0' at the end of the stream
	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			//check to see if we hit the end of the string
			if (sentence[i][j] != '\0')
				cout << sentence[i][j];
			else
			{
				cout << "\n"; //formatting
				break; //stop printing past null terminator (garbage chars)
			}
		}
	}
}