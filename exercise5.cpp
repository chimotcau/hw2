#include<iostream>
void swap(int& a, int& b) {
    double c = a;
    a = b;
    b = c;
}
void bubbleSort(int** array, int n) {   //define the bubblesort function
    for (int i = 0; i < n -1 ; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j][0] > array[j + 1][0]) {
                    for (int k = 0; k < 2; k++){
                        swap(array[j][k], array[j + 1][k]);
                
                    }   
            }
        }
    }
}
int envelope(int** wh, int n){
    if (n == 0){
        return 0;
    }

    bubbleSort(wh,n);

    int res = 1;
    int maxHeight = wh[0][1];    

    for (int i = 0; i < n; i++){
        if (wh[i][1] > maxHeight){
            res++;
            maxHeight = wh[i][1];
        }
    }

    return res;
}
int main(){
    int n;
    int a=0;
    std::cout<<"enter number of envelopes ";
    std::cin>>n;
    int** wh = new int*[n];
    for (int i = 0; i < n; ++i) {
        wh[i] = new int[2];
    }

    
    std::cout << "Enter width and heigh:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> wh[i][0] >> wh[i][1];
    }

    int answer = envelope(wh,n);
    std::cout<<"The maximum number of envelopes "<<answer;

    for (int i = 0; i < n; ++i) {
        delete[] wh[i];
    }
    return 0;
}