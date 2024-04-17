#include <iostream>

void transposeMatrix(int* ptr,const int& n){
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = i; j < n ; ++j)
        {
            std::swap(ptr[i * n + j],ptr[j * n + i]);

        }
        
    }
    
}

void print1dMatrix(const int* const ptr,const int& n){
    for (size_t i = 0; i < n * n; i+=n)
    {
        for (size_t j = 0; j < n; ++j)
        {
            std::cout<<ptr[i + j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

int main(){
    int n = 0;
    
    std::cin>>n;

    int* matrix = new int[n * n];
    for (size_t i = 0; i < n * n; i+=n)
    {
        for (size_t j = 0; j < n; ++j)
        {
            matrix[i + j] = rand() % 10;
        }
        
    }

    print1dMatrix(matrix,n);
    transposeMatrix(matrix,n);
    print1dMatrix(matrix,n);


    free(matrix);
    matrix = nullptr;

    return 0;
}
