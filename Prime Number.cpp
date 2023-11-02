#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	char choice;
	int	number, f = 0, i;
	long int Start, End;
	cout << "\nDo you want to find Prime Numbers in a given range(R) OR Check if a specific Number Is a Prime Number(C)? ";
	cin >> choice;

	if (choice == 'r' || choice == 'R')
	{
		cout << "\n\nInput the Range for the Prime Numbers: " << endl;
		cout << "\nSTART POINT: ";
		cin >> Start;
		cout << "\nEnd Point: ";
		cin >> End;
		cout << "\nPrime Numbers from " << Start << " to " << End << ": ";
		while (Start <= End)
		{
			f = 0;
			for (i = 2; i <= Start / 2; i++)
			{
				if (Start % i == 0)
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
				cout << "\t" << Start;
			Start = Start + 1;
		}

	}
	else if (choice == 'C' || choice == 'c')
	{
		cout << "\nEnter the Number: ";
		cin >> number;

		for (int n = 1; n <= number; n++)

		{
			if (number % n != 0)
			{
				cout << "\n\nPRIME NUMBER";
				break;
			}
			else
			{
				cout << "\n\nNOT A PRIME NUMBER";
				break;
			}
		}

	}
	else
	{
		cout << "\nINVALID OPTION";
		return 0;
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
