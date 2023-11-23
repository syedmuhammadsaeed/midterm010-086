#include<iostream>
using namespace std;
int main() 
{
	const int conversionRate = 5;
	const int redemptionRate = 5;
	int loyaltyPoint = 0;
	double totalPurchase, discount;
	while (true)
	{
		cout<< "enter the total amount of purchase(enter a negative value to exist):";
		cin >> totalPurchase;
		if (totalPurchase < 0) 
		{
			cout << "existing the loyalty program\n";
			break;
		}
		loyaltyPoint += int(totalPurchase / conversionRate);
		cout << "loyaltyPoint earned" << loyaltyPoint << endl;
		cout << "enter a  number of points to redeem(0 for no redemption7)";
		int pointToredeem;
		cin >> pointToredeem;
		if (pointToredeem > 0)\
		{
		static_cast	<double>(pointToredeem / redemptionRate);
			cout << "discount applied:$" << "discount" << endl;
			loyaltyPoint -= pointToredeem;
			cout << "remaining loyaltypoint" << loyaltyPoint << endl;
			cout << "total loyaltypoint" << loyaltyPoint << endl;
			return 0;
		}


	}
}