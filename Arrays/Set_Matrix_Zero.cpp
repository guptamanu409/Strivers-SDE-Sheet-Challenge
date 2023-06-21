#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	//Using first column matrix[...][0] = To mark rows
	//Using first row matrix[0][...] = To mark cols

	int col0 = 1;

	int row = matrix.size();
	int col = matrix[0].size();

	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){

			if(matrix[i][j]==0){
				
				//Marking the columns
				if(j==0) col0 = 0;
				else matrix[0][j] = 0;
				
				//Mark the rows
				matrix[i][0] = 0;

				
			}
		}
	}

	for(int i = 1; i<row; i++){
		for(int j = 1; j<col; j++){
			if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
		}
	}

	if(matrix[0][0]==0){
		for(int i = 0; i<col; i++){
			matrix[0][i] = 0;
		}
	}

	if(col0==0){
		for(int i = 0; i<row; i++){
			matrix[i][0] = 0;
		}
	}
}