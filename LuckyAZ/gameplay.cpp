#include "globalvariable.h"

//redefine global variables so that they are usable between files
int rowbutton = 0, colbutton = 0;
bool endgame;
int shown_count = 1;

void win_god()
{
	System::Windows::Forms::MessageBox::Show("Wonderful!\n"
										"You have got God of Luck\n");
}

void winAZ()
{
	System::Windows::Forms::MessageBox::Show("Congratulations!\n"
									"You have solved the crazy AZ game\n");
}

void lose()
{
	System::Windows::Forms::MessageBox::Show("Oops, wrong box!\n" 
											"Better luck next time!");
	endgame = true;
}

