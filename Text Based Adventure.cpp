//Text-based Adventure Game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void menu();
void north();
void south();
void east();
void west();
char choice, goAgain;
string name;
int code;

int main()
{
system("COLOR 17");
system("pause");
system("cls");
cout<<"\nWhat's your name? ";
getline(cin,name);
cout<<"\nWelcome, "<<name<<"! Let's play a game!\n-------------------------------\n";
cout<<"\nYou were rafting in the waters until a thunderstorm suddenly came. The large, crashing waves violently slammed into your boat, causing you to flip over and fall into the waters."
	<<"\nYou hit your head onto a log and became unconscious..."
	<<"\n\nLater, you woke up in the middle of the woods in front of a campfire. You see a cottage to the west.";
do{
	menu();
	cin>>choice;
		if(choice=='n') north();
		if(choice=='s')	south();
		if(choice=='e')	east();
		if(choice=='w')	west();
}while(goAgain!='n');
	
cout<<"\n\n";
return 0;
}

void menu()
{cout<<"\n\n---------\nDIRECTIONS\n---------\n"
	 <<"<N>orth\n<S>outh\n<E>ast\n<W>est"
	 <<"\n\nWhere do you want to go? ";
}

void north()
{string ans;
	cout<<"\nAs you're walking you see nothing but trees until you find a note on a log."
		<<"\nIt's a riddle! The note says, 'What falls but never breaks?'"
		<<"\n\nEnter your answer: ";
	cin>>ans;
	if(ans=="dusk") cout<<"\nCorrect! Could this be a hint?";
	else cout<<"\nWrong! You left and went back to the campfire...";
}

void south() 
{
	cout<<"\nYou fell in a hole!\nGAME OVER!\n\nPlay again? (y/n) ";
	cin>>goAgain;
}

void east()
{char roll;
int r;
	cout<<"\n\nYou meet a talking white rabbit!"
		<<"\nWhite Rabbit: Hello, want to play a game of luck?"
		<<"\n\t\tHere's a dice. IF you roll an EVEN number, I will give some very helpful information."
		<<"\n\nWhat do you say? Want to play? (y/n) ";
	cin>>roll;
	{if(roll=='y') 
		{	cout<<"\nYou rolled the dice!";
			r=rand()%6+1;
			{
			if(r%2==0) cout<<"\nEVEN! You won the hint! (HINT: Your lucky number is 3875.)"
							<<"\nYou return back to the campfire!";
			else {cout<<"\nODD! The dice was a bomb and exploded! GAME OVER!\nPlay again? (y/n) ";
				cin>>goAgain;}
			}
		}
	else cout<<"\nYou decided not to play and went back to the campfire.";
	}
}

void west()
{
	cout<<"\n\nYou walked up to the cottage, but the door is locked by a pinpad..."
		<<"\nWhat is the 4-digit code? ";
	cin>>code;
	if(code==3875) {cout<<"\nThe code worked and the door opened up! It's a portal! You enter it and teleported back home! \nCongratulations "<<name<<"! You won!"
						<<"\nPlay again? (y/n) ";
					cin>>goAgain;}
	else cout<<"\nWrong code! You return back to the campfire!";
}
