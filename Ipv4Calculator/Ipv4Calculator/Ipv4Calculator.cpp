#include <iostream>
#include <bitset>

using namespace std;

int main()
{


	cout << "Wpisz adres IP (Po spacji!): "										<< endl;
	int decIP[4];

	cin >> decIP[0] >> decIP[1] >> decIP[2] >> decIP[3];

	system("cls");

	cout << decIP[0] << "." << decIP[1] << "." << decIP[2] << "." << decIP[3]	<< endl;

	cout << "======================="											<< endl;

	bitset<8> bin_ip(decIP[0]);
	cout << bin_ip << ".";

	bitset<8> bin_ip1(decIP[1]);
	cout << bin_ip1 << ".";

	bitset<8> bin_ip2(decIP[2]);
	cout << bin_ip2 << ".";

	bitset<8> bin_ip3(decIP[3]);
	cout << bin_ip3																<< endl;


	if (decIP[0] <= 126)
	{
		cout << "Ip nalezy do klasy A"											<< endl;
		cout << "Maska to: 255.0.0.0"											<< endl;									
	}
	else if (decIP[0] > 127, decIP[0] <= 191)
	{
		cout << "Ip nalezy do klasy B"											<< endl;
		cout << "Maska to: 255.255.0.0" << endl;
	}
	else if (decIP[0] > 191, decIP[0] <= 223)
	{
		cout << "Ip nalezy do klasy C"											<< endl;
		cout << "Maska to: 255.255.255.0"										<< endl;
	}
	else if (decIP[0] > 223, decIP[0] <= 239)
	{
		cout << "Ip nalezy do klasy D"											<< endl;
		cout << "Maska to: BRAK"												<< endl;
	}
	else if (decIP[0] > 240, decIP[0] <= 247)
	{
		cout << "Ip nalezy do klasy E"											<< endl;
		cout << "Maska to: BRAK"												<< endl;
	}


	return 0;
}