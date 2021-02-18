#include <iostream>

int main(){
	int M, N, K, x, y;
	std::cin >> N;
	std::cin >> M;
	std::cin >> K;
	int **p;
	p  = new int*[N];
	for (int i = 0; i < N; i++){
		p[i] = new int[M];
		for (int j = 0; j < M; j++){
			p[i][j] = 0;
		}
	}
	for (int i = 0; i < K; i++){			
		std::cin >> x;
		std::cin >> y;	
		p[x-1][y-1] = -1;
		for (int q =-1; q < 2; q++){
			for (int w =-1; w < 2; w++){
				if ((0 <= (x-1+q)) and ((x-1+q) < N) and (0 <= (y-1+w)) and ((y-1+w) < M)){
					if (p[x-1+q][y-1+w] != -1){
						p[x-1+q][y-1+w] += 1;
					}		
				}		
			}
		}
	}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			std::cout << p[i][j] << " ";
		}
		std::cout << "\n";
	}
	for (int j = 0; j < N; j++){
		delete[] p[j];
		}
	delete[] p;
	return 0;
}
