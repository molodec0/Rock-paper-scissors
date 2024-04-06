#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

string random() {
	vector <string> random = { "камень", "ножницы", "бумага" };

	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution<> dist(0, random.size() - 1);

	int random_index = dist(gen);

	return random[random_index];
}

//Код главной функции.
int main() {

	system("chcp 1251 > nul");

	int answer = 0, victory = 0, defeat = 0, draw = 0, round = 3;
	string reply, choice;

	cout << "- - - - - - - - - -" << endl;
	cout << endl;
	cout << "Популярная игра камень, ножницы, бумага.";
	cout << "Сможешь ли ты выиграть компьютер в эту игру?" << endl;
	cout << "Если захочешь закончить игру, введи в консоль команду 'break'!" << endl;
	cout << "У тебя всего три раунда, готов?" << endl;
	cout << endl;
	cout << "- - - - - - - - - -" << endl;
	cout << endl;

	cout << "Выбери уровень сложности: " << endl;
	cout << "1, 2, 3?" << endl;
	cin >> answer;

	if (answer == 1) {
		cout << "Лёгкий уровень сложности, у тебя есть три раунда!" << endl;
		round = 3;
	}
	else if (answer == 2) {
		cout << "Средний уровень сложности, у тебя есть шесть раундов!" << endl;
		round = 6;
	}
	else if (answer == 3) {
		cout << "Сложный уровень сложности, у тебя есть девять раундов!" << endl;
		round = 9;
	}
	else {
		cout << "Ошибка! Некорректный ввод в консоль!" << endl;
		return 1; 
	}

	for (; round > 0; round--) {
		choice = random();

		cout << "Камень, ножницы, бумага?" << endl;
		cin >> reply;

		if (reply == "камень") {
			
			if (choice == "камень") {
				cout << "Хмм, ничья! Ещё +1 раунд" << endl;
				round++;
			}
			else if (choice == "ножницы") {
				cout << "Ты выиграл раунд!" << endl;
				victory++;
			}
			else {
				cout << "Оуу . . . Ты проиграл раунд!" << endl;
				defeat++;
			}

		}

		else if (reply == "ножницы") {

			if (choice == "камень") {
				cout << "Оуу . . . Ты проиграл раунд!" << endl;
				defeat++;
			}
			else if (choice == "ножницы") {
				cout << "Хмм, пока что ничья! Ещё +1 раунд" << endl;
				round++;
			}
			else {
				cout << "Ты выиграл раунд!" << endl;
				victory++;
			}
		}

		else if (reply == "бумага") {

			if (choice == "камень") {
				cout << "Ты выиграл раунд!" << endl;
				victory++;
			}
			else if (choice == "ножницы") {
				cout << "Оу . . . Ты проиграл раунд!" << endl;
				defeat++;
			}
			else {
				cout << "Хмм, пока что ничья! Ещё +1 раунд" << endl;
				round++;
			}
		}

		else if (reply == "break") {
			cout << endl;
			cout << "- - - - - - - - - -" << endl;
			cout << endl;
			cout << "Жалко что ты уходишь! =(" << endl;
			cout << "Приходи в следующий раз поиграть!" << endl;
			cout << endl;
			cout << "- - - - - - - - - -" << endl;
			return 1;
		}

		else {
			cout << "Ошибка! Некорректный ввод в консоль! Давай попробуем ещё раз!" << endl;
			round++;
		}

	}

	if (victory > defeat) {
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
		cout << endl;
		cout << "Поздравляю! Ты победил! =)" << endl;
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
	}

	else if (defeat > victory) {
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
		cout << endl;
		cout << "К сожалению ты проиграл! =(" << endl;
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
	}

	cout << endl;
	cout << "Для выхода из программы нажмите на клавишу . . .";

	system("pause > nul");

	return 0;
}
