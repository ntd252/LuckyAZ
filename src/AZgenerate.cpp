#include "globalvariable.h"

cell table[N][N];
int azcount = 0;


void azgenerate(void)
{
	using namespace std;
	azcount = 1;
	System::Char abc = 'A';
	int row = 0, col = 0, nextrow = 0, nextcol = 0, test = 0;
	/* row and col: current position; nextrow and nextcol: next position */

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			table[i][j].content = '.';
		}

	//srand((unsigned)time(NULL)); is included in MyForm.h
	table[0][0].content = 'A'; row = 0; col = 0;

	for (; abc < 'Z'; abc++) {

		while (1) {             /*create possible random moves */
			test = rand() % 4;  /*create random numbers between 0 and 3*/
			if ((table[row - 1][col].content != '.' || row == 0)
				&& (table[row + 1][col].content != '.' || row == 9)
				&& (table[row][col - 1].content != '.' || col == 0)
				&& (table[row][col + 1].content != '.' || col == 9)) break;

			switch (test) {      /*generate new position */
			case 0: nextrow = row - 1; break;
			case 1: nextcol = col + 1; break;
			case 2: nextrow = row + 1; break;
			case 3: nextcol = col - 1; break;
			default: break;
			} /* ending switch */

			if (table[nextrow][nextcol].content == '.') {
				if (nextrow >= 0 && nextrow < N &&  nextcol >= 0 && nextcol < N) {
					row = nextrow; col = nextcol;
					table[row][col].content = abc + 1;
					++azcount;
					break;  /*break and get out of while */
				}
				else {
					switch (test) {     /*undo generating new position */
					case 0: ++nextrow; break;
					case 1: --nextcol; break;
					case 2: --nextrow; break;
					case 3: ++nextcol; break;
					}  /* ending switch */
					continue; /*going to the end of while */
				}   /* ending else of small If*/

			}                     /*ending big if */
			else {    /*else for big if */
				switch (test) {     /*undo creating random numbers between 0 and 3*/
				case 0: ++nextrow; break;
				case 1: --nextcol; break;
				case 2: --nextrow; break;
				case 3: ++nextcol; break;
				}  /* ending switch */
				continue;
			}  /* ending else of big IF */


		}                      /* ending while */


	  /* terminate if around postition has been assigned*/
		if ((table[row - 1][col].content != '.' || row == 0)
		 && (table[row + 1][col].content != '.' || row == 9)
		 && (table[row][col - 1].content != '.' || col == 0)
		 && (table[row][col + 1].content != '.' || col == 9)) break;

	}/*ending for*/



	
}

void luckygenrate(void)
{
	using namespace std;

	System::Char abc = 'A';
	int row, col, ran_num;
	/* row and col: current position; nextrow and nextcol: next position */
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < N; j++) {
			table[i][j].luck = false;
			table[i][j].god = false;
		}
	//srand((unsigned)time(NULL));
	row = 0; col = 0;
	
	int luck_count = 0;
	while (1) {
		ran_num = rand() % 100; //generate random number from 0 - 99
		if (table[ran_num / 10][ran_num % 10].luck == false) {
			table[ran_num / 10][ran_num % 10].luck = true;
			++luck_count;
		}
			
		if (luck_count == 20) //generate 20 random numbers
			break;
	}

	luck_count = 0;
	while (1) {
		ran_num = rand() % 100; //generate random number from 0 - 99
		if (table[ran_num / 10][ran_num % 10].god == false && table[ran_num / 10][ran_num % 10].content != 'A') {
			table[ran_num / 10][ran_num % 10].god = true;
			++luck_count;
		}
		if (luck_count == 5) //generate 5 random numbers
			break;
	}

}

int randomnumber()
{
	//srand((unsigned)time(NULL));
	return rand() % 100; //generate random number from 0 - 99
}




// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
