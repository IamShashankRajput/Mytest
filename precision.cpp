#include <iostream>
using namespace std;
int main()
{
	float PI = 22.0/7.0;
	int i;
	cout << "Value of PI:\n";
	for(i=1; i<10; i++)
	{
	   cout.width(i+1);
	   cout.precision(i+1);
	   cout << PI << "\n";
	}
return 0;
}
