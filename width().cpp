#include<iostream>
using namespace std;
int main()
{
	int items[4] = {10, 20, 3, 14};
	int cost[4] = {400, 35, 23, 54};
	cout.width(5);
	cout << "ITEMS";
	cout.width(10);
	cout << "COST";
	cout.width(15);
	cout << "TOTAL VALUE" << "\n";
	int sum = 0;
	for(int i=0; i<4; i++)
	{
		cout.width(5);
		cout << items[i];
		cout.width(10);		
		cout << cost[i];
		int value = items[i]*cost[i];
		cout.width(15);
		cout << value << "\n";
		sum = sum + value;
	}
	cout.width(2);	
	cout << "Grand Total : "<< sum << "\n";
	return 0;
}
