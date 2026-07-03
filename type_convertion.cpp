#include <iostream>

//type convertion convierte un valor de un tipo de dato en otro (double to int, int to char, etc..)
//Existen dos maneras de hacer la conversion: Implicita y Explicita
//Implicita: es automatico
//Explicita: Debe preceder el tipo de dato al que convertiremos encerrado en parentesis

int main(){
//implicito
    //int pi = 3.14;
    //std::cout<<pi;//la salida es 3, el valor era un double y sale un int

    char nota = 100;
    //std::cout<<nota;//la salida es d (d es el valor de 100 en ASCII)

//Explicito
    double pi = 3.14;
    //std::cout<<(int)pi;//la salida es 3 ya que decimos explicitamente que se convierta a entero int 

    int respuestas_correctas = 6;
    int preguntas = 10;
    //double score = respuestas_correctas / preguntas;//6 entre 10 es 0.6, pero fueron declarados como int
    //std::cout<<score;//por lo que la salida sera el primer numero de 0.6, es decir 0
    
    //la solucion es convertir el int en double para que el score no sea 0 sino 0.6
    double score = (double)respuestas_correctas / (double)preguntas;
    std::cout<<score;
    return 0;
}