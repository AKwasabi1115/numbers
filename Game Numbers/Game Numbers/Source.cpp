#include <string>
#include <iostream>
using namespace std;

int main() 
{
	int life = 3;
	if (life > 0)
	{
		life -= 1;
	}
	if (life > 0)
	{
		life -= 1;
	}
	if (life > 0)
	{
		life -= 1;
	}
	if (life > 0)
	{
		life -= 1;
	}
	else if (life = 0) 
	{
		cout << "Has zero lives" << endl;
	}
	else {
		cout << "Ran out of life!" << endl;
	}
	cout << life << endl;
 

}