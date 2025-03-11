#include <iostream>
using namespace std;

int arr[20];  
int n;        

void input() {   
	while (true) {
		cout << "input maximum length: "; 
		cin >> n;   
		if (n <= 20)  
			break;    
		else {        
			cout << "n is bigger than 20. \n";   
		}
	}
	cout << endl;                           
	cout << "===================" << endl;  
	cout << "enter elemen of array" << endl; 
	cout << "===================" << endl;  

	for (int i = 0; i < n; i++) {
		cout << "data -" << (i + 1) << "; ";
		cin >> arr[i];
        cout << endl;
	}
}

void BubbleSortArray() { 
	int pass = 1; // step 1

	do {
		//repeat step 3 varying j from 0 to n-1 pass
		for (int j = 0; j <= n - 1 - pass; j++) 
		{
			//if element at index j is great
			//j+1, swap the two element
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
		//increment pass by
		pass = pass + 1; //step 4

		cout << "\nPass " << pass - 1 << -1 << "; ";   //output ke layar
		for (int k = 0; k < n; k++) {             //looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";                //output ke layar

		}
		cout << endl;
	} while (pass <= n - 1);
}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Sorted Array" << endl;
	cout << "================================" << endl;
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data" << i+1 << ": " << arr[i] << endl;
		if (i < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

