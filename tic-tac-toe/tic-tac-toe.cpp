#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isEnd = false;

const int HEIGHT = 3;
const int LENGHT = 3;

bool isGameEnd_X(char arr[HEIGHT][LENGHT])
{
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if(arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[2][0] == 'X' && arr[1][1] == 'X' && arr[0][2] == 'X')
	{
		isEnd = true;
		return isEnd;
	}
}

bool isGameEnd_O(char arr[HEIGHT][LENGHT])
{
	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
	else if (arr[2][0] == 'O' && arr[1][1] == 'O' && arr[0][2] == 'O')
	{
		isEnd = true;
		return isEnd;
	}
}

void PrintArea(char arr[HEIGHT][LENGHT])
{
	cout << "      _______________________________________\n";
	for (int i = 0; i < HEIGHT; i++)
	{
		cout << "\n\n\n|";

		for (int j = 0; j < LENGHT; j++)
		{
			cout << "\t" << arr[i][j] << "\t";
		}
		cout << "|\n\n\n";
	}
	cout << "      _______________________________________\n\n";
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

int main()
{

	vector<int> usedNumbers;

	system("color A");
	char arr[LENGHT][LENGHT]{ {'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

	

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

		/*if (firstMove > 9 || firstMove < 1)
		{
			cout << "Incorrect cell!" << endl;
			while (firstMove > 9 || firstMove < 1)
			{
				cout << "Enter another number: "; cin >> firstMove;
			}
		}
		else if (find(usedNumbers.begin(), usedNumbers.end(), firstMove) != usedNumbers.end())
		{
			cout << "This cell is already in use by you or another player.\n" << "Select another cell: ";
			cin >> firstMove;
			while (true)
			{
				cout << "Select another cell: "; cin >> firstMove;
				if (find(usedNumbers.begin(), usedNumbers.end(), firstMove) == usedNumbers.end() && firstMove < 10 && firstMove > 0)
				{
					break;
				}
			}
		}*/
		
		usedNumbers.push_back(firstMove);
		
		gameDuration++;

		if (firstMove == 1)
		{
			system("CLS");
			arr[0][0] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[0][1] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[0][2] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[1][0] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[1][1] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[1][2] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[2][0] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[2][1] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			arr[2][2] = 'X';
			PrintArea(arr);
			isGameEnd_X(arr);
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
			cout << "Do you want to play again? (YES, NO)";
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
			arr[0][0] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[0][1] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[0][2] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[1][0] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[1][1] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[1][2] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[2][0] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[2][1] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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
			arr[2][2] = 'O';
			PrintArea(arr);
			isGameEnd_O(arr);
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