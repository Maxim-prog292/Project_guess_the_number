#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int startGame(int &score);
int endOrRepeat(int& score);


int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	cout << "\t\t\t\t\t\t��������� '������ �����'." << endl;
	cout << "\t\t\t\t\t\t��������� �������� ����� �� 1 �� 10." << endl;
	cout << "\t\t\t\t\t\t�� ������ ������� ��� �����." << endl << endl;

	int gameMode;
	int score = 0;
	
	cout << "1.������." << endl
		 << "2.�����." << endl << endl;
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
			cout << "��� ���� " << score << endl;
			cout << "������� �����: ";
			cin >> result;
			cout << "���� ����� " << result << endl;

			if (result == randomNum) {
				score += 10;
				cout << "�� ��������!" << endl;
				cout << "���������� ����� - " << randomNum << endl << endl;
				endOrRepeat(score);
			}
			else {
				cout << "�������� ��� ���!" << endl << endl;
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

	cout << "1.���������." << endl
		<< "2.������." << endl;
	cin >> result;

	if (result == 1) {
		return 0;
	}
	if (result == 2) {
		startGame(score);
	}
}