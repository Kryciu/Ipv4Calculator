#include <iostream>
#include <bitset>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	cout << "Type IP Address: \n";
	
	string IPString;
	getline(cin, IPString);

	stringstream ExtractedIPAdress(IPString);
	int decIP[4] = {0};
	char delimiter;

	system("cls");

	cout << "Entered IP Address: \n";
	ExtractedIPAdress >> decIP[0] >> delimiter >> decIP[1] >> delimiter >> decIP[2] >> delimiter >> decIP[3];
	cout << decIP[0] << "." << decIP[1] << "." << decIP[2] << "." << decIP[3] << "\n";

	for (int i = 0; i < 4; ++i) {
		bitset<8> ConvertedToDecimal(decIP[i]);
		cout << ConvertedToDecimal;
		if (i < 3) {
			cout << ".";
		}
	}

	if (decIP[0] <= 126)
	{
		cout << "\nAddress belongs to the class A \n";
		cout << "Subnet mask: 255.0.0.0 \n";									
	}
	else if (decIP[0] > 127 && decIP[0] <= 191)
	{
		cout << "\nAddress belongs to the class B \n";
		cout << "Subnet mask: 255.255.0.0 \n";
	}
	else if (decIP[0] > 191 && decIP[0] <= 223)
	{
		cout << "\nAddress belongs to the class C \n";
		cout << "Subnet mask: 255.255.255.0 \n";
	}
	else if (decIP[0] > 223 && decIP[0] <= 239)
	{
		cout << "\nAddress belongs to the class D \n";
		cout << "Subnet mask: None \n";
	}
	else if (decIP[0] > 240 && decIP[0] <= 247)
	{
		cout << "\nAddress belongs to the class E \n";
		cout << "Subnet mask: None \n";
	}
	
	return 0;
}