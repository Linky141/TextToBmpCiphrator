#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <conio.h> //getch

#include "EncryptEngine.h"
#include "xyio.h"
#include "TextFileOI.h"


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESCAPE 27
#define KEY_F1 59
#define BG_COLOR "white"
#define BG_BUTTON_COLOR "yellow"
#define HEADER_BORDER_COLOR "dblue"
#define HEDER_TEXT_COLOR "dgreen"
#define BORDER_COLOR "dgray"
#define TEXT_COLOR "black"
#define EDIT_TEXT_COLOR "blue"
#define SELECTED_TEXT_COLOR "gray"
#define INFO_COLOR "dyellow"
#define PADDING_LEFT 10
#define PADDING_TOP 5


void MainMenu();
void MainMenuTemplate();
void Szyfruj();
void SzyfrujTemplate();
void Deszyfruj();
void DeszyfrujTemplate();
void Communicat(bool state);
void hidecursor();
void ShowInfo();
bool is_digits(const std::string& str);


int main(void)
{
	MainMenu();
	return 0;
}

void MainMenu() {
	SetConsoleTitle("Szyfrowanie Do BMP");
	hidecursor();
	MainMenuTemplate();

	char action = 's';
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, ">>");
	setcursor(0, 0);
	int actionTmp;
	do
	{
		actionTmp = _getch();
		if (actionTmp == KEY_F1)  ShowInfo();
		if (actionTmp == KEY_UP)
		{
			xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, ">>");
			xycprintf(PADDING_LEFT + 3, PADDING_TOP + 11, BG_COLOR, TEXT_COLOR, "  ");
			action = 's';
		}
		if (actionTmp == KEY_DOWN)
		{
			xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "  ");
			xycprintf(PADDING_LEFT + 3, PADDING_TOP + 11, BG_COLOR, SELECTED_TEXT_COLOR, ">>");
			action = 'd';
		}
		if (actionTmp == KEY_ENTER) 
		{
			if (action == 's') 
			{
				Szyfruj();
				MainMenuTemplate();
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, ">>");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 11, BG_COLOR, TEXT_COLOR, "  ");
			}
			else if (action == 'd')
			{
				Deszyfruj();
				MainMenuTemplate();
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "  ");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 11, BG_COLOR, SELECTED_TEXT_COLOR, ">>");
			}
		}
		setcursor(0, 0);
	} while (actionTmp != KEY_ESCAPE);
	setcursor(0, 0);
}

void MainMenuTemplate()
{
	
	fill(BG_COLOR);
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 1, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 2, BG_COLOR, HEDER_TEXT_COLOR, "SZYFROWANIE DO BMP");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 3, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");

	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 6, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "MENU");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 8, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 6, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFRUJ     ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 10, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 11, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 11, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 6, PADDING_TOP + 11, BG_COLOR, TEXT_COLOR, "DESZYFRUJ     ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 12, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 14, BG_COLOR, INFO_COLOR, "ENTER - wybierz, ESCAPE - wyjdz, UP/DOWN - poruszanie, F1 - Info");
}


void Szyfruj()
{
	SzyfrujTemplate();

	EncryptEngine encryptEngine;
	TextFileIO textFileIO;
	std::string name = "";
	std::string password = "";

	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, SELECTED_TEXT_COLOR, "NAZWA");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
	xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "SZYFRUJ");
	char action = 'n';
	setcursor(0, 0);
	int actionTmp;
	do
	{
		actionTmp = _getch();
		if (actionTmp == KEY_UP)
		{
			if (action == 's')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, SELECTED_TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "SZYFRUJ");
				action = 'n';
			}
			else if (action == 'z')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "SZYFRUJ");
				action = 's';
			}
		}
		if (actionTmp == KEY_DOWN)
		{
			if (action == 'n')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "SZYFRUJ");
				action = 's';
			}
			else if (action == 's')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, SELECTED_TEXT_COLOR, "SZYFRUJ");
				action = 'z';
			}
		}
		if (actionTmp == KEY_ENTER)
		{
			if (action == 'n')
			{
				name = "";
				char tmpCharArray[50];
				xycprintf(PADDING_LEFT + 12, PADDING_TOP + 7, BG_COLOR, EDIT_TEXT_COLOR, "                                      ");
				xycscanf(PADDING_LEFT + 12, PADDING_TOP + 7, BG_COLOR, EDIT_TEXT_COLOR, "%s", tmpCharArray);
				for (int i = 0; tmpCharArray[i] != '\0'; i++) name += tmpCharArray[i];
			}
			else if (action == 's')
			{
				password = "";
				char tmpCharArray[50];
				xycprintf(PADDING_LEFT + 12, PADDING_TOP + 9, BG_COLOR, EDIT_TEXT_COLOR, "                                      ");
				xycscanf(PADDING_LEFT + 12, PADDING_TOP + 9, BG_COLOR, EDIT_TEXT_COLOR, "%s", tmpCharArray);
				for (int i = 0; tmpCharArray[i] != '\0'; i++) password += tmpCharArray[i];
				if ((!is_digits(password)) || password.size() < 4) {
					xycprintf(PADDING_LEFT + 12, PADDING_TOP + 9, BG_COLOR, EDIT_TEXT_COLOR, "                                      ");
					password = "";
				}
			}
			else if (action == 'z' && name != "" && password != "")
			{
					int noise;
					std::string code;
					encryptEngine.SeparateCode(password, noise, code); //2-iloœc px, reszta-szum
					std::string text;
					textFileIO.ReadFile(text, name); //zawartosc, nazwa pliku
					encryptEngine.Encrypt(text, code);
					if (encryptEngine.Export(text, name, noise)) Communicat(true);
					else Communicat(false);
					SzyfrujTemplate();
					action = 'n';
					xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, SELECTED_TEXT_COLOR, "NAZWA");
					xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
					xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "SZYFRUJ");
					name = ""; password = "";
			}
			setcursor(0, 0);
		} 
		setcursor(0, 0);
	} while (actionTmp != KEY_ESCAPE);
}


void SzyfrujTemplate()
{
	fill(BG_COLOR);
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 1, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 2, BG_COLOR, HEDER_TEXT_COLOR, "SZYFROWANIE");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 3, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");

	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 6, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 10, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 8, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 10, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 10, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 11, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 11, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "SZYFRUJ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 12, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 14, BG_COLOR, INFO_COLOR, "ENTER - wybierz, ESCAPE - powrot, UP/DOWN - poruszanie");
	return;
}

void Deszyfruj()
{
	DeszyfrujTemplate();

	EncryptEngine encryptEngine;
	TextFileIO textFileIO;
	std::string name = "";
	std::string password = "";

	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, SELECTED_TEXT_COLOR, "NAZWA");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
	xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "DESZYFRUJ");
	char action = 'n';
	setcursor(0, 0);
	int actionTmp;
	do
	{
		actionTmp = _getch();
		if (actionTmp == KEY_UP)
		{
			if (action == 's')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, SELECTED_TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "DESZYFRUJ");
				action = 'n';
			}
			else if (action == 'z')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "DESZYFRUJ");
				action = 's';
			}
		}
		if (actionTmp == KEY_DOWN)
		{
			if (action == 'n')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, SELECTED_TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "DESZYFRUJ");
				action = 's';
			}
			else if (action == 's')
			{
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, SELECTED_TEXT_COLOR, "DESZYFRUJ");
				action = 'z';
			}
		}
		if (actionTmp == KEY_ENTER)
		{
			if (action == 'n')
			{
				name = "";
				char tmpCharArray[50];
				xycprintf(PADDING_LEFT + 12, PADDING_TOP + 7, BG_COLOR, EDIT_TEXT_COLOR, "                                      ");
				xycscanf(PADDING_LEFT + 12, PADDING_TOP + 7, BG_COLOR, EDIT_TEXT_COLOR, "%s", tmpCharArray);
				for (int i = 0; tmpCharArray[i] != '\0'; i++) name += tmpCharArray[i];
			}
			else if (action == 's')
			{
				password = "";
				char tmpCharArray[50];
				xycprintf(PADDING_LEFT + 12, PADDING_TOP + 9, BG_COLOR, EDIT_TEXT_COLOR, "                                      ");
				xycscanf(PADDING_LEFT + 12, PADDING_TOP + 9, BG_COLOR, EDIT_TEXT_COLOR, "%s", tmpCharArray);
				for (int i = 0; tmpCharArray[i] != '\0'; i++) password += tmpCharArray[i];
				if ((!is_digits(password)) || password.size() < 4) {
					xycprintf(PADDING_LEFT + 12, PADDING_TOP + 9, BG_COLOR, EDIT_TEXT_COLOR, "                                      ");
					password = "";
				}
			}
			else if (action == 'z' && name != "" && password != "")
			{
				int noise;
				std::string code;
				encryptEngine.SeparateCode(password, noise, code);
				std::string text;
				if (encryptEngine.Import(text, name, noise)) Communicat(true);
				else Communicat(false);
				encryptEngine.Decrypt(text, code);
				textFileIO.WriteFile(text, name);
				SzyfrujTemplate();
				action = 'n';
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, SELECTED_TEXT_COLOR, "NAZWA");
				xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
				xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "DESZYFRUJ");
				name = ""; password = "";
			}
			setcursor(0, 0);
		}
		setcursor(0, 0);
	} while (actionTmp != KEY_ESCAPE);
}


void DeszyfrujTemplate()
{
	fill(BG_COLOR);
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 1, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 2, BG_COLOR, HEDER_TEXT_COLOR, "DESZYFROWANIE");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 3, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");

	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 6, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 10, PADDING_TOP + 7, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 7, BG_COLOR, TEXT_COLOR, "NAZWA");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 8, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 10, PADDING_TOP + 9, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 3, PADDING_TOP + 9, BG_COLOR, TEXT_COLOR, "SZYFR");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 10, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 11, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 50, PADDING_TOP + 11, BG_COLOR, BORDER_COLOR, "#");
	xycprintf(PADDING_LEFT + 20, PADDING_TOP + 11, BG_BUTTON_COLOR, TEXT_COLOR, "DESZYFRUJ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 12, BG_COLOR, BORDER_COLOR, "##################################################");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 14, BG_COLOR, INFO_COLOR, "ENTER - wybierz, ESCAPE - powrot, UP/DOWN - poruszanie");
	return;
}

void Communicat(bool state)
{
	if (state) {
		fill(BG_COLOR);
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 1, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
		xycprintf(PADDING_LEFT + 50, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
		xycprintf(PADDING_LEFT + 3, PADDING_TOP + 2, BG_COLOR, "green", "OK");
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 3, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
	}
	else
	{
		fill(BG_COLOR);
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 1, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
		xycprintf(PADDING_LEFT + 50, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "#");
		xycprintf(PADDING_LEFT + 3, PADDING_TOP + 2, BG_COLOR, "red", "FAIL");
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 3, BG_COLOR, HEADER_BORDER_COLOR, "##################################################");
	}
	setcursor(0, 0);
	_getch();
	return;
}


void ShowInfo()
{
	fill(BG_COLOR);
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 1, BG_COLOR, HEADER_BORDER_COLOR, "Program sluzacy do szyfrowania oraz deszyfrowania plikow");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 2, BG_COLOR, HEADER_BORDER_COLOR, "tekstowych (tylko z rozszerzeniem *.txt) do mapy bitowej.");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 4, BG_COLOR, HEADER_BORDER_COLOR, "Program szyfruje tekst za pomoca rozszerzonego szyfru cezara");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 5, BG_COLOR, HEADER_BORDER_COLOR, "a nastepnie zapisuje go do mapy bitowej przechowujac znaki");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 6, BG_COLOR, HEADER_BORDER_COLOR, "jako pixele (kazdy pixel posiada 3 znaki) z zachowaniem ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 7, BG_COLOR, HEADER_BORDER_COLOR, "odpowiedniej ilosci pixeli szumu pomiedzy nimi.");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 9, BG_COLOR, HEADER_BORDER_COLOR, "Program zostal stworzony na projekt z zajec Programowanie Systemowe.");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 15, BG_COLOR, HEADER_BORDER_COLOR, "Opracowanie: ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 16, BG_COLOR, HEADER_BORDER_COLOR, "Tomasz Bielas");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 17, BG_COLOR, HEADER_BORDER_COLOR, "Karolina Christ");
	xycprintf(PADDING_LEFT + 1, PADDING_TOP + 19, BG_COLOR, HEADER_BORDER_COLOR, "Politechnika Slaska 2020");
	
	int tmp;
	tmp = _getch();
	if (tmp == KEY_ESCAPE) {
		xycprintf(PADDING_LEFT + 1, PADDING_TOP + 25, BG_COLOR, "gray", "https://www.youtube.com/watch?v=dQw4w9WgXcQ");
		tmp = _getch();
		if (tmp == KEY_ESCAPE) {}
		
	}

	MainMenuTemplate();
}

void hidecursor()
{
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

bool is_digits(const std::string& str)
{
	return std::all_of(str.begin(), str.end(), ::isdigit);
}