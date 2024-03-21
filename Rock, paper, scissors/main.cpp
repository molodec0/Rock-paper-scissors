#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

string random() {
	vector <string> random = { "������", "�������", "������" };

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

	cout << "� ���� ����� ��� ������, �����?" << endl;

	for (round == 0; round--;) {

		cout << "������, �������, ������?" << endl;
		cin >> reply;

		if (reply == "������") {
			
			if (random() == "������") {
				cout << "���, �����! ��� +1 �����" << endl;
				round++;
			}
			else if (random() == "�������") {
				cout << "�� ������� �����!" << endl;
				victory++;
			}
			else {
				cout << "��� . . . �� �������� �����!" << endl;
				defeat++;
			}

		}

		else if (reply == "�������") {

			if (random() == "������") {
				cout << "��� . . . �� �������� �����!" << endl;
				defeat++;
			}
			else if (random() == "�������") {
				cout << "���, ���� ��� �����! ��� +1 �����" << endl;
				round++;
			}
			else {
				cout << "�� ������� �����!" << endl;
				victory++;
			}
		}

		else if (reply == "������") {

			if (random() == "������") {
				cout << "�� ������� �����!" << endl;
				victory++;
			}
			else if (random() == "�������") {
				cout << "�� . . . �� �������� �����!" << endl;
				defeat++;
			}
			else {
				cout << "���, ���� ��� �����! ��� +1 �����" << endl;
				round++;
			}
		}

		else {
			cout << "��� . . . � ���� �� ������ �����. ����� �� �����!" << endl;
			round++;
		}

	}

	if (victory > defeat) {
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
		cout << endl;
		cout << "����������! �� �������! =)" << endl;
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
	}

	else if (defeat >> victory) {
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
		cout << endl;
		cout << "� ��������� �� ��������! =(" << endl;
		cout << endl;
		cout << "- - - - - - - - - -" << endl;
	}

	system("pause > nul");

	return 0;
}