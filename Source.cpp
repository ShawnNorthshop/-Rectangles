#include <iostream>
using namespace std;

void print_rectangle(int w, int h);
void print_stars(int n);

int main()
{
	print_rectangle(6,3);
	return 0; 
}

void print_stars(int n)
{
	int i = 0; 
	while (i < n)
	{
		cout << "*";

		i++;
	
	}
}

void print_rectangle(int w, int h)
{
	int i = 0; 
	do
	{
		print_stars(w);
		i++;

		cout << endl; 


	} while (i < h);
}