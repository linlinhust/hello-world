// prints the numbers from ten down to zero.(use while)

#include <iostream>	// input and output funcs
using namespace std;	// load the pool of functions in iostream (standard functions)

int main()
{
	int val = 10;
	while (val >= 0)
	{
		cout << val << endl;
		--val;			// this is same as val = val - 1;
	}
	
	return 0;
}
