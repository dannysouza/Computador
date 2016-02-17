#include <iostream>

using namespace std;

class Date
{
	public:
		Date(int = 1, int = 1, int = 1990);
		~Date();
	
	private:
		int month;
		int day;
		int year;
		
		int checkDay( int ) const;
};
