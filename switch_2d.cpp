// ifelse_2d.cpp
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
		int r,c;//row and column
		char ac = '$';
		char bc = '#';
		char cc = ' ';
		char thechar = ' ';
		char lst= '*';'<','>';
		int val = 1;
		int m[8][8] = {
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
				thechar = cc;
			  val = m[r][c];
				if (val == 1) thechar = ac;
				cout<<thechar;

			}
			cout<<endl;
		}
	return 0;
}

compile         g++ ifelse.2do.cpp -o ifelse.2d.
how to execute  ./ifelse.2d.o
