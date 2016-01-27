#include <iostream>
#include <stdlib.h>
#include "Hangman.h"
#include <ctime>
#include <cmath>

using namespace std;

Hangman::Hangman(){
	
}

void Hangman::animals()
{
	char x, vet1[6], vet2[6], vet3[3], v1[6], v2[6], v3[3];
	time_t t;
	
	vet1[0]='m'; vet1[1]='o'; vet1[2]='n'; vet1[3]='k'; vet1[4]='e'; vet1[5]='y';
	
	vet2[0]='t'; vet2[1]='u'; vet2[2]='r'; vet2[3]='t'; vet2[4]='l'; vet2[5]='e';
	
	vet3[0]='f'; vet3[1]='o'; vet3[2]='x';
	
	fillVector(v1, 6);
	fillVector(v2, 6);
	fillVector(v3, 3);
	
	srand(time(NULL));

	r=rand() % 3+1;
	
	switch(r){

	case 1:
		
	play(6, v1, vet1);
	
	case 2:
	
	play(6, v2, vet2);
		
	case 3:
	
	play(3, v3, vet3);
	}
}

void Hangman::fruits()
{
	char x, vet1[4], vet2[6], vet3[10], v1[4], v2[6], v3[10];
	time_t t;
	
	vet1[0]='p'; vet1[1]='e'; vet1[2]='a'; vet1[3]='r';
	
	vet2[0]='o'; vet2[1]='r'; vet2[2]='a'; vet2[3]='n'; vet2[4]='g'; vet2[5]='e';
	
	vet3[0]='s'; vet3[1]='t'; vet3[2]='r'; vet3[3]='a'; vet3[4]='w'; vet3[5]='b'; vet3[6]='e'; vet3[7]='r'; vet3[8]='r'; vet3[9]='y';
	
	fillVector(v1, 4);
	fillVector(v2, 6);
	fillVector(v3, 10);
	
	srand(time(NULL));

	r=rand() % 3+1;
	
	switch(r){

	case 1:
		
	play(4, v1, vet1);
	
	case 2:
	
	play(6, v2, vet2);
		
	case 3:
	
	play(10, v3, vet3);
	}
}

void Hangman::movies()
{
	char x, vet1[6], vet2[7], vet3[7], v1[6], v2[7], v3[7];
	time_t t;
	
	vet1[0]='f'; vet1[1]='r'; vet1[2]='o'; vet1[3]='z'; vet1[4]='e'; vet1[5]='n';
	
	vet2[0]='t'; vet2[1]='i'; vet2[2]='t'; vet2[3]='a'; vet2[4]='n'; vet2[5]='i'; vet2[6]='c';
	
	vet3[0]='m'; vet3[1]='i'; vet3[2]='n'; vet3[3]='i'; vet3[4]='o'; vet3[5]='n'; vet3[6]='s'; 
	
	fillVector(v1, 6);
	fillVector(v2, 7);
	fillVector(v3, 7);
	
	srand(time(NULL));

	r=rand() % 3+1;
	
	switch(r){

	case 1:
		
	play(6, v1, vet1);
	
	case 2:
	
	play(7, v2, vet2);
		
	case 3:
	
	play(7, v3, vet3);
	}
}

void Hangman::princess()
{
	char x, vet1[4], vet2[5], vet3[5], v1[4], v2[5], v3[5];
	time_t t;
	
	vet1[0]='e'; vet1[1]='l'; vet1[2]='s'; vet1[3]='a';
	
	vet2[0]='m'; vet2[1]='u'; vet2[2]='l'; vet2[3]='a'; vet2[4]='n';
	
	vet3[0]='b'; vet3[1]='e'; vet3[2]='l'; vet3[3]='l'; vet3[4]='e';
	
	fillVector(v1, 4);
	fillVector(v2, 5);
	fillVector(v3, 5);
	
	srand(time(NULL));

	r=rand() % 3+1;
	
	switch(r){

	case 1:
		
	play(4, v1, vet1);
	
	case 2:
	
	play(5, v2, vet2);
		
	case 3:
	
	play(5, v3, vet3);
	}
}


void Hangman::play(int N, char v[], char vet[])
{
	int i, num;
	char x;
	
	num = N;
	chances = 6;
	
	do{
		cout << "\n\n ";
		for (i=0; i<N; i++)
		cout << v[i];
		
		cout << "\n\n You still have " << chances; 
		cout << " chances";
		cout << "\n\n Enter a character: ";
		cin >> x;
		for (i=0; i<N; i++)
		{
			if (x==vet[i])
			{
				v[i] = x;
				counter += 1;
				num -= 1;
			}
		}
		
		if (counter==0)
		chances -= 1;
		counter = 0;
		
		if (num==0)
		{
			cout << "\n\n Congratulations, you won! \n\n";
			break;
		}
	}while(chances>0);
	
	if (chances==0)
		cout << "\n\n You lost. ";
}

void Hangman::fillVector(char v[], int n)
{
	int i;
	for (i=0; i<n; i++)
		v[i] = '_';
}
