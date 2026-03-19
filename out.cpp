#include <iostream>

using namespace std;

void izpisBesedila(vector<string> text){
	//dodaj izpis array
	for(int i = 0; i < text.size(); i++){
		cout << "Beseda ki sledi je: " << text[i] << endl;
	}
}
