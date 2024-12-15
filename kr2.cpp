#include <iostream>
#include <vector>

void printMatrix(const std::vector<std::vector<int>>& matrix){
	for(const auto& row: matrix){
		for(int el :row){ 
			std::cout<<el<<" ";
		}
		std::cout<<'\n';
	}
}

std::vector<std::vector<int>> transMatrix(const std::vector<std::vector<int>>& matrix){
int rows=matrix.size();
int cols=matrix[0].size();

std::vector<std::vector<int>> transpose(cols,std::vector<int>(rows));
for(int i=0;i<rows;++i){
	for(int j=0; j<cols;++j){
		transpose[j][i]=matrix[i][j];
	}
}
return transpose;
}


int main()
{
	std::vector<std::vector<int>> matrix={ 
		 {3,4,5} ,
		 {5,6,7} , 
		 {2,3,6} };
	
	std::cout<<"isxodnaya\n";
	printMatrix(matrix);
	
	std::vector<std::vector<int>> transpose=transMatrix(matrix);
	
	std::cout<<"transponirovannaya\n";
	printMatrix(transpose);
	
	return 0;
}
	
     
