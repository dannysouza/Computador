#include <iostream>

using namespace std;

class Hangman
{
	private:
		int chances;
		int counter=0;
		
	public:
		Hangman();
		
		void animals();
		void fruits();
		void movies();
		void princess();
		void play(int N, char v[], char vet[]);
		void fillVector(char v[], int n);
};
