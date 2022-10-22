// matrix.cpp

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int row, col;
	
	cout << "input size of row, col : ";
	cin >> row >> col;
	cout << "row = " << row << ", " << col << "\n";
	
	// Matirx 
	vector<vector<int>> matrix_1(row);
	vector<vector<int>> matrix_2(row);
	
	for(int i = 0 ; i < row ; i++){
		matrix_1[i] = vector<int>(col);
		matrix_2[i] = vector<int>(col);
	}
	
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			matrix_1[i][j] = i*10+j;	
			matrix_2[i][j] = j*10+i;	
		}
	}
	
	cout << "\nMatrix_1\n==========================\n";
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			cout << matrix_1[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\nMatrix_2\n==========================\n";
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			cout << matrix_2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nMatrix_1 + Matrix_2\n==========================\n";
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			cout << matrix_1[i][j] + matrix_2[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;	
}	
		
