#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout.setf(ios::showpoint);
	cout << setw(5) << "n"
		 << setw(15) << "Inverse_of_n"
		 << setw(15) << "Sum\n\n";
	double term, sum = 0;
	for(int n=1; n<=10; n++)
	{
		term = 1.0/float(n);
		sum = sum + term;
		cout << setw(5) << n
			 << setw(14) << setprecision(4) << setiosflags(ios::scientific) << term
			 << setw(14) << resetiosflags(ios::scientific) << sum << "\n";
	}
		return 0;
}
