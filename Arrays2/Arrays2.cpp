/*// VT 75. COD. 001
#include <iostream>
int main()
{

    int primo[5]; // Asigna cinco "ints", no inicializa.
    std::cout << primo[0] << '\n';
    std::cout << primo[1] << '\n';
    std::cout << primo[2] << '\n';
    std::cout << primo[3] << '\n';
    std::cout << primo[4] << '\n';
}*/
    


/*// VT 75. COD. 002
#include <iostream>
int main()
{

    int primo[5]; // contiene primeros cinco números primos 
    primo[0] = 2;
    primo[1] = 3;
    primo[2] = 5;
    primo[3] = 7;
    primo[4] = 11;
    std::cout << primo[0] << '\n';
    std::cout << primo[1] << '\n';
    std::cout << primo[2] << '\n';
    std::cout << primo[3] << '\n';
    std::cout << primo[4] << '\n';

}*/



/*// VT 75. COD. 003
#include <iostream>
int main()
{
int primo[5]{ 2, 3, 5, 7, 11 }; // uso lista inicializador

std::cout << primo[0] << '\n';
std::cout << primo[1] << '\n';
std::cout << primo[2] << '\n';
std::cout << primo[3] << '\n';
std::cout << primo[4] << '\n';
}*/


/*// VT 75. COD. 004
#include <iostream>

int main()
{
    int array[5]{ 7, 4, 5 }; // dos últimos elementos inicializa a 0

    std::cout << array[0] << '\n';
    std::cout << array[1] << '\n';
    std::cout << array[2] << '\n';
    std::cout << array[3] << '\n';
    std::cout << array[4] << '\n';

    return 0;
}*/

/*//VT 75. COD.005
#include <iostream>
#include <string>
int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Inicializa todos los elementos a 0
    int array_int[5]{ };

    // inicializa todos los elementos a 0.0
    double array_double[5]{ };

    // Inicializa todos los elementos a un string vacío
    std::string array_string[5]{ };

    std::cout << array_int[0] << '\n';
    std::cout << array_double[2] << '\n';
    std::cout << "valor vacío" <<array_string[3] << '\n';

}*/

/*//VT 75. COD.006
#include <iostream>
#include <string>
int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    // No inicializado(se le asigna espacio en memoria
    // pero sin inicializarlo con ningún valor
    int array_int[5];

    // No inicializado(se le asigna espacio en memoria
    // pero sin inicializarlo con ningún valor
    double array_double[5];

    // Inicializa todos los elementos a un string vacío
    std::string array_string[5];

    std::cout << array_int[0] << '\n';
    std::cout << array_double[2] << '\n';
    std::cout << "valor vacío" <<array_string[3] << '\n';

}*/


/*//VT 75  COD.007

int array[5]{ 0, 1, 2, 3, 4 }; // explícitamente definimos el tamaño del array
int array[]{ 0, 1, 2, 3, 4 }; // el compilar determina implícitamente el tamaño*/



/*//VT 75  COD.008
int main()
{
    constexpr int numeroEstudiantes{ 5 };
    int notasExamen[numeroEstudiantes]{};
    notasExamen[2] = 76;
}*/


/*//VT 75    COD.009

enum NombreEstudiantes
{
    juan, // 0
    pedro, // 1
    miguel, // 2
    alberto, // 3
    sergio, // 4
    max_estudiantes // 5
};

int main()
{
    int notasExamen[max_estudiantes]{}; // asigna número integers correcto
   notasExamen[alberto] = 81;

    return 0;
}*/


/*//VT 75    COD.010

enum NombreEstudiantes
{
    juan, // 0
    pedro, // 1
    miguel, // 2
    alberto, // 3
    sergio, // 4
    antoni, // 5
    max_estudiantes // 6
};

int main()
{
    int notasExamen[max_estudiantes]{}; // asigna número integers correcto
    notasExamen[alberto] = 81;

    return 0;
}*/

/*// VT 75   COD. 011
#include <iostream>
void pasarValor(int valor) // valor es una copia del argumento
{
    valor = 99; // de modo que cambiar el valor no cambiará el valor del argumento
}

void pasarArray(int primo[5]) // primo es el array real
{
    primo[0] = 11; // de modo que cambiarlo aquí cambiará el argumento original
    primo[1] = 7;
    primo[2] = 5;
    primo[3] = 3;
    primo[4] = 2;
}

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int valor{ 1 };
    std::cout << "antes de pasarValor: " << valor << '\n';
    pasarValor(valor);
    std::cout << "después de pasarValor: " << valor << '\n';

    int primo[5]{ 2, 3, 5, 7, 11 };
    std::cout << "antes de pasarArray: " << primo[0] << " " << primo[1] << " " 
        << primo[2] << " " << primo[3] << " " << primo[4] << '\n';
    pasarArray(primo);
    std::cout << "después de pasarArray: " << primo[0] << " " << primo[1] << " " 
        << primo[2] << " " << primo[3] << " " << primo[4] << '\n';

    return 0;
}*/



/// VT 75   COD. 012
// primo es el array real, pero dentra de esta función es constante y no puede cambiarse
void pasarArray(const int primo[5])
{
    // así que todas estas declaraciones darán error de compilación
    primo[0] = 11;
    primo[1] = 7;
    primo[2] = 5;
    primo[3] = 3;
    primo[4] = 2;
}




