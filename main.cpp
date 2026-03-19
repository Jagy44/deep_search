#include <iostream>
#include <vector>
using namespace std;

// V main se presteje countr in izpise.
int main(){
	int counter;
	vector<int> Array = [1, 2, 3, 4, 5];
	for(int i = 0; i < Array.size(); i++){
		cout << "Counter = " << counter << endl;
		counter++;
	}

	return 0;
}
