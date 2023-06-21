#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris, namafile;

	/*write*/

	cout << "masukan nama filennya:";
	cin >> namafile;

	ofstream outfile;
	//open file
	outfile.open(namafile+".txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q")break;

		outfile << baris << endl;
	}

	outfile.close();

	/*Read*/

	ifstream infile;
	infile.open(namafile + ".txt");

	cout << endl << ">= Membuka dan membaca file" << endl;

	if (infile.is_open()) {
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "unable to open file";
	return 0;
}