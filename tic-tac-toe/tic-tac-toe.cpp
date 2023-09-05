#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isEnd = false;
const int SIZE = 9;


bool isGameEnd(char arr[SIZE])
{
	if (arr[0] == arr[1] && arr[1] == arr[2])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[3] == arr[4] && arr[4] == arr[5])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[6] == arr[7] && arr[7] == arr[8])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[0] == arr[3] && arr[3] == arr[6])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[1] == arr[4] && arr[4] == arr[7])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[2] == arr[5] && arr[5] == arr[8])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[0] == arr[4] && arr[4] == arr[8])
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[2] == arr[4] && arr[4] == arr[6])
	{
		isEnd = true;
		return isEnd;
	}
}

void isTrue(vector<int> &res, int &Move)
{
	if (Move > 9 || Move < 1)
	{
		cout << "Incorrect cell!" << endl;
		while (Move > 9 || Move < 1)
		{
			cout << "Enter another number: "; cin >> Move;
		}
	}
	else if (find(res.begin(), res.end(), Move) != res.end())
	{
		cout << "This cell is already in use by you or another player.\n" << "Select another cell: ";
		cin >> Move;
		while (true)
		{
			cout << "Select another cell: "; cin >> Move;
			if (find(res.begin(), res.end(), Move) == res.end() && Move < 10 && Move > 0)
			{
				break;
			}
		}
	}
}

void PrintArea(char arr[SIZE])
{
	cout << "\n\n\t_____________________________________\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|     " << arr[0] << "     |     " << arr[1] << "     |     " << arr[2] << "     |\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|___________|___________|___________|\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|     " << arr[3] << "     |     " << arr[4] << "     |     " << arr[5] << "     |\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|___________|___________|___________|\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|     " << arr[6] << "     |     " << arr[7] << "     |     " << arr[8] << "     |\n";
	cout << "\t|           |           |           |\n";
	cout << "\t|___________|___________|___________|\n\n\n";
}



int main()
{
	isEnd = false;
	
	vector<int> usedNumbers;

	system("color A");

	char arr[SIZE]{ '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	char symbol_X = 'X';
	char symbol_O = 'O';

	cout << "ALERT:\nAll characters are presented in the English Lang in Uppercase" << endl;
	
	string firstName;
	string secondName;

	cout << "Enter first player name: "; cin >> firstName;
	cout << "Enter second player name: "; cin >> secondName;
	
	int firstMove;
	int secondMove;

	PrintArea(arr);
	int gameDuration = 0;
	while (gameDuration < 9)
	{
		
		cout << firstName << " makes a move: " << endl;
		cin >> firstMove;

		isTrue(usedNumbers, firstMove);
		
		usedNumbers.push_back(firstMove);
		
		gameDuration++;

		if (firstMove == 1)
		{
			system("CLS");
			arr[0] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 2)
		{
			system("CLS");
			arr[1] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 3)
		{
			system("CLS");
			arr[2] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 4)
		{
			system("CLS");
			arr[3] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 5)
		{
			system("CLS");
			arr[4] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 6)
		{
			system("CLS");
			arr[5] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 7)
		{
			system("CLS");
			arr[6] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 8)
		{
			system("CLS");
			arr[7] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (firstMove == 9)
		{
			system("CLS");
			arr[8] = 'X';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << firstName << " is Winner!" << endl;
				return 0;
			}
		}
		if (usedNumbers.size() == 9)
		{
			cout << "Tie" << endl;
			return 0;
		}

		//////////////////////////////////////////////////////////////////

		cout << secondName << " makes a move: " << endl;
		cin >> secondMove;

		isTrue(usedNumbers, secondMove);

		usedNumbers.push_back(secondMove);
		gameDuration++;
		
		if (secondMove == 1)
		{
			system("CLS");
			arr[0] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 2)
		{
			system("CLS");
			arr[1] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 3)
		{
			system("CLS");
			arr[2] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 4)
		{
			system("CLS");
			arr[3] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 5)
		{
			system("CLS");
			arr[4] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 6)
		{
			system("CLS");
			arr[5] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 7)
		{
			system("CLS");
			arr[6] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 8)
		{
			system("CLS");
			arr[7] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
		}
		else if (secondMove == 9)
		{
			system("CLS");
			arr[8] = 'O';
			PrintArea(arr);
			isGameEnd(arr);
			if (isEnd)
			{
				cout << "Game Over\n" << endl;
				cout << secondName << " is Winner!" << endl;
				return 0;
			}
			}
		
	}




	return 0;
}