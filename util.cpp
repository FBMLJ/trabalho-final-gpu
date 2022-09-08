
#include<stdlib.h>
class Matriz{
    public:
    int width;
    int length;
    int** matriz;
    Matriz(int width, int length, int **matriz){
        width = width;
        length = length;
        matriz = matriz;

    }
    void destroy(){
        free(matriz);
        delete this;
    }
}