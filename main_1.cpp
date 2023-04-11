#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int grado;
    double coeficientes[6];

    cout << "Ingrese el grado del polinomio (máximo 5): ";
    cin >> grado;

    cout << "Ingrese los coeficientes del polinomio, comenzando por el término de grado " << grado << " y terminando por el término independiente:\n";

    for (int i = grado; i >= 0; i--) {                                          //Loop finito para ingresar los coeficietes
        cout << "Coeficiente de x^" << i << ": ";
        cin >> coeficientes[i];
    }

    double discriminante = pow(coeficientes[grado - 1], 2) - 4 * coeficientes[grado] * coeficientes[grado - 2];             //Calculo general del discriminante

    if (discriminante > 0) {                                                                                //Calculo de la solución cuando el discriminante es mayor a 0
        double raiz1 = (-coeficientes[grado - 1] + sqrt(discriminante)) / (2 * coeficientes[grado]);
        double raiz2 = (-coeficientes[grado - 1] - sqrt(discriminante)) / (2 * coeficientes[grado]);
        cout <<"\n--Integrantes--";
        cout <<"\nJavier Uribe Valenzuela";
        cout <<"\nMartín Hurtado";
        cout << "Las raíces son: " << raiz1 << " y " << raiz2 << endl;
    } else if (discriminante == 0) {                                                                        //Calculo de las soluciones cuando el discriminante es igual a 0
        double raiz = -coeficientes[grado - 1] / (2 * coeficientes[grado]);
        cout <<"\n--Integrantes--";
        cout <<"\nJavier Uribe Valenzuela";
        cout <<"\nMartín Hurtado";
        cout << "\nLa única raíz es: " << raiz << endl;
    } else {                                                                                                //Calculo de las soluciones cuando el discriminante es menor a 0
        double parteReal = -coeficientes[grado - 1] / (2 * coeficientes[grado]);
        double parteImaginaria = sqrt(-discriminante) / (2 * coeficientes[grado]);
        cout << "\nLas raíces son complejas: " << parteReal << " + " << parteImaginaria << "i y " << parteReal << " - " << parteImaginaria << "i" << endl;
        cout <<"\n--Integrantes--";
        cout <<"\nJavier Uribe Valenzuela";
        cout <<"\nMartín Hurtado";
    }

    return 0;
}