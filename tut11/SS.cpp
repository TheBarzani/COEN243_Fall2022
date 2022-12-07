#include <iostream>
using namespace std;

int main(){
	int arr[10] = {4,5,3,9,8,2,6,7,3,0};

	int inpt;
	bool check = 0;

	for (int i =0; i <10; i++){
		cout << arr[i] << " ";
	}

	// Sorting: Bubble Sort
	for (int i = 0; i <10; i++){
		for (int j = 0; j < 9; j++){
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout << endl;

	for (int i =0; i <10; i++){
		cout << arr[i] << " ";
	}

	// Searching linearly

	cout << "Do you have this number? ";
	cin >> inpt; 
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(int); i++){
		if (arr[i] == inpt) {
			check = 1;
			break;
		}
	}

	if(check) cout << "Yes we do! @" << i << endl;
	else cout << "No we don't" << endl;cout << "Do you have this number? ";
	cin >> inpt; 
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(int); i++){
		if (arr[i] == inpt) {
			check = 1;
			break;
		}
	}

	if(check) cout << "Yes we do! @" << i << endl;
	else cout << "No we don't" << endl;
	

}