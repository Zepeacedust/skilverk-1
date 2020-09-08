#include <iostream>
using namespace std;
//2
int squareSum(int n)
{
	if (n == 1) return 1;
	return squareSum(n - 1) + n * n;
}
//3
int upSum(int n)
{
	if (n == 1) return 1;
	return n + upSum(n - 1);
}

void runa(int n)
{
	if (n > 1) runa(n - 1);
	std::cout << upSum(n) << " ";
}
//4


int şverSumma(int current)
{
	if (current < 10)
	{
		return current;
	}
	return current % 10 + şverSumma(current / 10);
}
//5
int samnefnari(int n, int m)
{
	if (n % m == 0) return m;
	return samnefnari(m, n % m);
}


int main() 
{
	cout << "Daemi 2" << endl;
	cout << squareSum(5) << endl;
	cout << "Daemi 3" << endl;
	runa(5);
	cout << endl;
	cout << "Daemi 4" << endl;
	cout << şverSumma(1206) << endl;
	cout << "Daemi " << endl;
	cout << samnefnari(12, 60) << endl;
}