#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;



int main()
{
	srand(time(NULL));
	int choice2;
	int choice3;
	int choice4;
	string name;
	cout << "Podaj swoje imie:";
	cin >> name;

	system("cls");
	goto road;
 road:
  { cout << "Stoisz na rozdrozu drog." << endl;
	cout << "W ktora strone pojdziesz?" << endl;

	cout << "1. W lewo" << endl;
	cout << "2. W prawo" << endl;
	cout << "3. Czekam az cos sie stanie" << endl;

	cin >> choice2;
	cin.ignore();
	system("cls");

	if (choice2 == 1) {
		int decision1;
		cout << "Idziesz droga i po chwili... " << endl;
		cout << "atakuje cie wielki Ork." << endl;
		cout << "Wyglada strasznie, wykrzykuje swoj okrzyk bojowy!" << endl;
		cout << "Co robisz?" << endl;
		cout << "1. Probuje zabic Orka" << endl;
		cout << "2. Probuje dogadac sie z Orkiem" << endl;
		cout << "3. UCIEKAM!" << endl;

		cin >> decision1;
		cin.ignore();
		system("cls");

		if (decision1 == 1) {
			cout << "Atakujesz Orka" << endl;
			cout << "Jednak jego umiejetnosci walki toporem okazuja sie bardzo wysokie." << endl;
			cout << "Nagle Ork zaczyna przywolywac swojego boga okrzykiem: HALO KARTHUS HALO!" << endl;
			cout << "Z nieba spada na ciebie gniew boga orkow." << endl;
			cout << "Zostales zabity" << endl;
			system("pause");
			goto gameover;
		}
		else if (decision1 == 2) {
			cout << "Udalo ci sie dogadac z orkiem!" << endl;
			cout << "Zostaliscie przyjaciolmi i razem zostajecie najwiekszymi wojownikami." << endl;
			cout << "Swiat zapamieta na wieki tego orka i ciebie " << name << endl;
			system("pause");
			goto ending;
		}
		else if (decision1 == 3) {
			system("cls");
			goto road;
		}



	}
	else if (choice2 == 2) {
		cout << "Po trzech kilometrach wedrowki wpadasz do jaskini. " << endl;
		cout << "Okazalo sie ze glebiej znajduja sie katakumby." << endl;
		cout << "Bardzo mozliwe, ze znajdziesz tam skarby i potezne artefakty." << endl;
		cout << "Co robisz?" << endl;
		cout << "1. Udaje sie na wyprawe po katakumbach" << endl;
		cout << "2. Probuje sie wydostac z jaskini" << endl;

		cin >> choice3;
		cin.ignore();
		system("cls");
		if (choice3 == 1) {
			cout << "Wyprawa przebiega swietnie!" << endl;
			cout << "Nagle zostajesz zaatakowany przez koboldy." << endl;
			cout << "Jest ich za duzo by z nimi walczyc." << endl;
			cout << "Probujesz uciekac, ale na prozno..." << endl;
			cout << "Zostajesz zlapany i zabity przez koboldy." << endl;
			system("pause");
			goto gameover;
		}
		else if (choice3 == 2) {
			system("cls");
			cout << "Po godzinach szukania" << endl;
			cout << "Udalo ci sie znalezc wyjscie z jaskini" << endl;
			cout << "Okazalo sie, ze jestes w miejscu w ktorym zaczynales swoja przygode" << endl;
			goto road;
		}

	}

	else if (choice2 == 3) {
		wait:
		int random1;
		cout << "Czekales 2 godziny" << endl;
		cout << "Nic sie nie stalo..." << endl;
		cout << "Co robisz?" << endl;
		cout << "1. Czekam dalej" << endl;
		cout << "2. Wybieram droge" << endl;
		cin >> choice4;
		cin.ignore();
		system("cls");


		if (choice4 == 1) {
			random1 = rand() % 2; // generator liczb pseudolosowych
			if (random1 == 0) {
				int choice4;
				cout << "Nagle zza krzakow wylonila sie horda orkow." << endl;
				cout << "Posiadaja znaczna przewage liczebna." << endl;
				cout << "Otaczaja cie, po czym zabijaja." << endl;
				system("pause");
				goto gameover;
			}
			else if (random1 == 1) {
				cout << "Nadal nic sie nie dzieje..." << endl;
				goto wait;
			}
		}
		else if (choice4 == 2) {
			system("cls");
			goto road;
		}

  }
	}
	system("cls");
	cout << "Wrong Option!" << endl;
	Sleep(1150);
	system("cls");
	goto road;
ending:
	{cout << "YOU WIN!" << endl;
	cin.ignore();
	system("cls");
	goto end;
    }
gameover:
	{cout << "GAME OVER" << endl;
	cin.ignore();
	system("cls");
    }
	end:{}
}
