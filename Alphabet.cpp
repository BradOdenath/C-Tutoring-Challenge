#include <iostream>
using namespace std;

const int LETTERS_IN_ALPHABET = 26;
const int LETTER_HEIGHT = 7;
const string SPACE = "  ";

void letter(char c);
void read_statement();
void load_alphabet();
void load_letter(int l);

string alphabet[LETTERS_IN_ALPHABET][LETTER_HEIGHT];

string statement[LETTER_HEIGHT] = {"","","","","",""};

int main()
{
	load_alphabet();
	
	letter('B');
	letter('O');
	
	read_statement();
	system("PAUSE");
	return 0;
}

void read_statement()
{
	for (int i = 0; i < LETTER_HEIGHT; i++)
	{
		cout << endl << statement[i].c_str();
	}
	cout << endl;
}

void letter(char c)
{
	switch(c)
	{
		case 'B': load_letter(1); break;
		case 'O': load_letter(14); break;
		
	}
}

void load_letter(int l)
{
	for (int i = 0; i < LETTER_HEIGHT; i++)
	{
		statement[i] += alphabet[l][i];
		statement[i] += SPACE;
	}
}

void load_alphabet()
{
	//Letter #2: B
	alphabet[1][0] = "******* ";
	alphabet[1][1] = "*          *";
	alphabet[1][2] = "*          *";
	alphabet[1][3] = "******* ";
	alphabet[1][4] = "*          *";
	alphabet[1][5] = "*          *";
	alphabet[1][6] = "******* ";
	
	//Letter #15: O
	alphabet[14][0] = " ****** ";
	alphabet[14][1] = "*         *";
	alphabet[14][2] = "*         *";
	alphabet[14][3] = "*         *";
	alphabet[14][4] = "*         *";
	alphabet[14][5] = "*         *";
	alphabet[14][6] = " ****** ";
}