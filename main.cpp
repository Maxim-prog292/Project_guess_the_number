#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int startGame(int &score);
int endOrRepeat(int& score);


int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	cout << "\t\t\t\t\t\tÏÐÎÃÐÀÌÌÀ 'ÓÃÀÄÀÉ ×ÈÑËÎ'." << endl;
	cout << "\t\t\t\t\t\tÏÐÎÃÐÀÌÌÀ ÇÀÃÀÄÀÅÒ ×ÈÑËÎ ÎÒ 1 ÄÎ 10." << endl;
	cout << "\t\t\t\t\t\tÂÛ ÄÎËÆÍÛ ÓÃÀÄÀÒÜ ÝÒÎ ×ÈÑËÎ." << endl << endl;

	int gameMode;
	int score = 0;
	
	cout << "1.Íà÷àòü." << endl
		 << "2.Âûõîä." << endl << endl;
	cin >> gameMode;

	if (gameMode == 1) {
		startGame(score);
	}
	else if (gameMode == 2) {
		return 0;
	}
}

int startGame(int &score) {
	
	while (true) {
		int result = 0, randomNum;

		randomNum = rand() % 10;
		while (result != randomNum)
		{
			cout << "Âàñ ñ÷åò " << score << endl;
			cout << "Ââåäèòå ÷èñëî: ";
			cin >> result;
			cout << "Âàøå ÷èñëî " << result << endl;

			if (result == randomNum) {
				score += 10;
				cout << "Âû âûèãðàëè!" << endl;
				cout << "Çàãàäàííîå ÷èñëî - " << randomNum << endl << endl;
				endOrRepeat(score);
			}
			else {
				cout << "Ïîïðîáóé åùå ðàç!" << endl << endl;
			}
		}
		if (result == randomNum) {
			break;
		}
	}
	return 0;
}

int endOrRepeat(int &score) {
	int result = 0;

	cout << "1.Çàêîí÷èòü." << endl
		<< "2.Çàíîâî." << endl;
	cin >> result;

	if (result == 1) {
		return 0;
	}
	if (result == 2) {
		startGame(score);
	}
}