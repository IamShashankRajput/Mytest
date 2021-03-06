#include <iostream>
#include <iomanip>

using namespace std;

	ostream & currency(ostream & output)
	{
		output << "Rs";
		return output;
	}
	
	ostream & form(ostream & output)
	{
		output.setf(ios::showpoint);
		output.setf(ios::showpos);
		output.fill('*');
		output.precision(2);
		output << setiosflags(ios::fixed)
			   << setw(10);
		return output;
	}

int main()
{
	cout << currency << form << 7686.45 << "\n";
	return 0;
}
