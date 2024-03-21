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

int main() {
	system("chcp 1251 > nul");

	int victory = 0, defeat = 0, draw = 0, round = 3;
	string reply;

	cout << "- - - - - - - - - -" << endl;
	cout << endl;
	cout << "Популярная игра камень, ножницы, бумага.";
	cout << "Сможешь ли ты выиграть компьютер в эту игру?" << endl;
	cout << "Если захочешь закончить игру, введи в консоль команду 'break'!" << endl;
	cout << "У тебя всего три раунда, готов?" << endl;
	cout << endl;
	cout << "- - - - - - - - - -" << endl;
	cout << endl;

	for (round == 0; round--;) {

		cout << "Камень, ножницы, бумага?" << endl;
		cin >> reply;

		if (reply == "камень") {
			
			if (random() == "камень") {
				cout << "Хмм, ничья! Ещё +1 раунд" << endl;
				round++;
			}
			else if (random() == "ножницы") {
				cout << "Ты выиграл раунд!" << endl;
				victory++;
			}
			else {
				cout << "Оуу . . . Ты проиграл раунд!" << endl;
				defeat++;
			}

		}

		else if (reply == "ножницы") {

			if (random() == "камень") {
				cout << "Оуу . . . Ты проиграл раунд!" << endl;
				defeat++;
			}
			else if (random() == "ножницы") {
				cout << "Хмм, пока что ничья! Ещё +1 раунд" << endl;
				round++;
			}
			else {
				cout << "Ты выиграл раунд!" << endl;
				victory++;
			}
		}

		else if (reply == "бумага") {

			if (random() == "камень") {
				cout << "Ты выиграл раунд!" << endl;
				victory++;
			}
			else if (random() == "ножницы") {
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
			break;
		}

		else {
			cout << "Эмм . . . Я тебя не совсем понял. Давай по новой!" << endl;
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

	else if (defeat >> victory) {
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
