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

void bubbleSort(double array[], int indices[], int n) {   //define the bubblesort function
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
    double *a= new double[n];                //create an dynamic memory because we don't know how many variable(memory) we need to use
    int *index= new int[n];
    for(int i=0;i<n;i++){
        a[i]= sqrt(coor[i][0]*coor[i][0]+coor[i][1]*coor[i][1]); 
        index[i] = i;     
    }
    bubbleSort(a, index, n); //recall bubbleSort to sort elements in array a and still hold their original position
    for (int i = 0; i < k; ++i) {
        int originalorder = index[i];
        std::cout<<"the answers are ";
        std::cout << coor[originalorder][0] << ' ' << coor[originalorder][1] << '\n';  //back the original order of elements
    }
    delete[] a;                //delete dynamic memory after using it to avoid issues
    delete[] index;
    for (int i = 0; i < n; ++i) {
        delete[] coor[i];
    }
    delete[] coor;
    return 0;
}