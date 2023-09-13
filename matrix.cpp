#include<iostream>
/*
int diline (int arr [4][4]){
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 0; i <= 3; ++i){
		for(int j = 3; j >= 0; --j){
			if( j == 4 - i -1){
				sum2 += arr[i][j];
			}
			if( i == j ){
				sum1 += arr[i][j];		
			}
        	}
	}
	std::cout<<'\n'<< sum1 << '\n' << sum2 << std::endl; 
	return 0;
}


int gdilin(int arr[4][4]){
	int sum = 0;
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j){
			if( j >= 0 + i ){
				sum += arr[i][j];
			}
		}
	}
	return sum;
}
*/
int odilin(int arr[4][4]){
	int sum = 0;
	for(int i = 4; i > 0; --i){
		for(int j = 4; i > 0; --i){
		if(j >= 4 - i - 2 ){
			sum += arr[i][j];
		}
		}
	}
	std::cout<<sum;
	return sum;
}

void mwap(int arr[4][4]){
	int tmp = arr[0][0];
	int tmp1 = arr[0][3];
	for(int i = 0; i < 4; ++i){
		std::swap(arr[i][0+i], arr[i][3-i]);

		for(int j = 0; j < 4; ++j){
				
			std::cout<<arr[i][j]<< '\t';
		}
		std::cout<<std::endl;;
	}

}

void zero(int arr[6][6]){
	for(int i = 0; i < 6; ++i){
		
			for(int j = 0; j < 6; ++j){
				if(i % 2 == 0){
				arr[i][j] = 0;
				}
				std::cout<<arr[i][j]<<'\t';
			}
			std::cout<<std::endl;
	}

	}


int main(){	
	const int s = 6;
	int arr[s][s];
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			arr[i][j] = 1 + rand() % 10;
			std::cout<<arr[i][j]<<'\t';
		}
		std::cout<<'\n'<<std::endl;;
	}
	//diline(arr);
	zero(arr);
}
