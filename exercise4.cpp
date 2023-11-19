#include <iostream>
void spiralmatrix(int n);
int main(){
    int n;
    std::cout << "enter number n: ";
    std::cin >> n;
    std::cout << "The spiral matrix: \n";
    spiralmatrix(n);
    return 0;
}
void spiralmatrix(int n){
    int matrix[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;
    int v = 1;
    while ((left <= right) && (top <=bottom)){

        for (int c = left; c <= right ; c++){
            matrix[top][c] = v;
            v += 1;
        }
        top += 1;

        for (int r = top; r <= bottom; r++){
            matrix[r][right] = v;
            v += 1;
        }
        right -= 1;

        for (int c = right; c >= left; c--){
            matrix[bottom][c] = v;
            v += 1;
        }
        bottom -= 1;

        for (int r = bottom; r >= top; r--){
            matrix[r][left] = v;
            v += 1;
        }
        left += 1;
    }
    
     for (int i = 0; i < n; i++){
 
        for (int j = 0; j < n; j++){
            std::cout <<  matrix[i][j] <<" "<<"| ";
        }
        std::cout<<'\n';

    }
}

    

    
