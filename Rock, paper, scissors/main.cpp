#include <iostream>
#include <vector>
#include <random>

using namespace std;

//Код функций рандома.
int random(int min, int max) {
	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution <int> distrib(min, max);

	return distrib(gen);
}

//Код главной функций.
int main() {
	system("chcp 1251 > nul");

	int round = 3, choice, reply, answer;
	string res;

	cout << "- - - - - - - - - -" << endl;
	cout << endl;
	cout << "Игра угадай число.";
	cout << "Сможешь ли ты отгадать число, которое загадал компьютер?" << endl;
	cout << "У тебя всего три раунда, готов?" << endl;
	cout << endl;
	cout << "- - - - - - - - - -" << endl;
	cout << endl;

	cout << "Выбери уровень сложности: " << endl;
	cout << "1, 2, 3?" << endl;
	cin >> answer;

	if (answer == 1) {
		cout << "Лёгкий уровень сложности, указан диапозон чисел от 1 до 10!" << endl;
		cout << "Твоё количество раундов равно 9" << endl;
		choice = random(1, 10);
		round = 9;
	}
	else if (answer == 2) {
		cout << "Средний уровень сложности, указан диапозон чисел от 1 до 50!" << endl;
		cout << "Твоё количество раундов равно 6" << endl;
		choice = random(1, 50);
		round = 6;
	}
	else if (answer == 3) {
		cout << "Сложный уровень сложности, указан диапозон чисел от 1 до 100!" << endl;
		cout << "Твоё количество раундов равно 3" << endl;
		cout << "Также подсказки отсутствуют!" << endl;
		choice = random(1, 100);
		round = 3;
	}
	else {
		cout << "Ошибка! Некорректный ввод в консоль!" << endl;
		return 1;
	}

	for (; round > 0; round--) {

		cout << "Какое число?" << endl;

		cin >> reply;

		if (answer == 1) {
			if (reply < choice) {
				cout << "Неверно! Но дам подсказку. Указанное число меньше загаданного!" << endl;
			}
			else if (reply > choice) {
				cout << "Неверно! Но дам подсказку. Указанное число больше загаданного!" << endl;
			}
			else if (reply == choice) {
				cout << "Ура, ты выиграл печеньку!" << endl;
				return 0;
			}
			else {
				cout << "Ошибка! Некорректный ввод в консоль! Давай попробуем ещё раз!" << endl;
				round++;
			}
		}
		else if (answer == 2) {
			if (reply < choice) {
				cout << "Неверно! Но дам подсказку. Указанное число меньше загаданного!" << endl;
			}
			else if (reply > choice) {
				cout << "Неверно! Но дам подсказку. Указанное число больше загаданного!" << endl;
			}
			else if (reply == choice) {
				cout << "Ура, ты выиграл печеньку!" << endl;
				return 0;
			}
			else {
				cout << "Ошибка! Некорректный ввод в консоль! Давай попробуем ещё раз!" << endl;
				round++;
			}
		}
		else if (answer == 3) {
			if (reply != choice) {
				cout << "Неверно!" << endl;
			}
			else if (reply == choice) {
				cout << "Ура, ты выиграл печеньку!" << endl;
				return 0;
			}
			else {
				cout << "Ошибка! Некорректный ввод в консоль! Давай попробуем ещё раз!" << endl;
				round++;
			}
		}
	}

	cout << "Загаданное число: " << choice << endl;

	system("pause > nul");

	return 0;
}
