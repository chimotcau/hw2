#include<iostream>
#include<cmath>
void swap(double& a, double& b) {
    double c = a;
    a = b;
    b = c;
}
void swapindex(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void bubbleSort(double array[], int indices[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapindex(indices[j], indices[j + 1]);
            }
        }
    }
}

int main(){
    int n;
    int k;

    std::cout<<"enter number of lines ";
    std::cin>>n;
    std::cout<<"enter k ";
    std::cin>>k;
    int** coor = new int*[n];
    for (int i = 0; i < n; ++i) {
        coor[i] = new int[2];
    }
    std::cout << "Enter x and y:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> coor[i][0] >> coor[i][1];
    }
    double *a= new double[n];
    int *index= new int[n];
    for(int i=0;i<n;i++){
        a[i]= sqrt(coor[i][0]*coor[i][0]+coor[i][1]*coor[i][1]); 
        index[i] = i;     
    }
    bubbleSort(a, index, n);
    for (int i = 0; i < k; ++i) {
        int originaloder = index[i];
        std::cout << coor[originaloder][0] << ' ' << coor[originaloder][1] << '\n';
    }
    delete[] a;
    delete[] index;
    for (int i = 0; i < n; ++i) {
        delete[] coor[i];
    }
    delete[] coor;
    return 0;
}