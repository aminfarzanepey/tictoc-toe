#include <iostream>
#include <conio.h>
using namespace std;

char ch[10] = {'o','1','2','3','4','5','6','7','8','9'};

void draw();
int check();


int main()
{
	int player = 1; 
	int i , choice;
	char mark;
	

	
	do{
	
		draw();
		player = (player % 2) ? 1 : 2;
		
		mark = (player == 1) ? 'X' : 'O';
		
		cout << "\nPlayer" << player << ": ";
		cin >> choice;
		
		if(choice == 1 && ch[1] == '1')
			ch[1] = mark;
		else if(choice == 2 && ch[2] == '2')
			ch[2] = mark;
		else if(choice == 3 && ch[3] == '3')
			ch[3] = mark;
		else if(choice == 4 && ch[4] == '4')
			ch[4] = mark;
		else if(choice == 5 && ch[5] == '5')
			ch[5] = mark;
		else if(choice == 6 && ch[6] == '6')
			ch[6] = mark;
		else if(choice == 7 && ch[7] == '7')
			ch[7] = mark;
		else if(choice == 8 && ch[8] == '8')
			ch[8] = mark;
		else if(choice == 9 && ch[9] == '9')
			ch[9] = mark;
		else {cout << "invalid move! "; player--; getch();}
		
		system("cls");
		i = check();
		player++;
			
	}  while(i == -1);
	
	draw();
	
	if (i == 1)
		cout << "==>\a" << --player << " Win!";
	else
		cout << "==>\a Game Draw";
		
	getch();
	return 0;		

}

int check()
{
	if (ch[1] == ch [2] && ch[2] == ch[3])      return 1;
	else if (ch[4] == ch [5] && ch[5] == ch[6]) return 1;
	else if (ch[7] == ch [8] && ch[8] == ch[9]) return 1;
	else if (ch[1] == ch [4] && ch[4] == ch[7]) return 1;
	else if (ch[2] == ch [5] && ch[5] == ch[8]) return 1;
	else if (ch[3] == ch [6] && ch[6] == ch[9]) return 1;
	else if (ch[1] == ch [5] && ch[5] == ch[9]) return 1;
	else if (ch[3] == ch [5] && ch[5] == ch[7]) return 1;
	
	if(ch[1] != '1' && ch[2] != '2' && ch[3] != '3' && ch[4] != '4' &&
	ch[5] != '5' && ch[6] != '6' && ch[7] != '7' && ch[8] != '8' && ch[9] != '9')
    	return 0;
    else return -1;
}

void draw()
{
	cout << "\t\t\ttic toc toe\n\n";
	cout << "\t\t\tplayer1 (X)\n";
	cout << "\t\t\tplayer2 (O)\n";
		
		
	cout << "  " <<ch[1] << "  |  " << ch[2] << "  |  " << ch[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "  " <<ch[4] << "  |  " << ch[5] << "  |  " << ch[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "  " <<ch[7] << "  |  " << ch[8] << "  |  " << ch[9] << endl;
}