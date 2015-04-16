// El programa pide un nombre y g�nero de la persona (valida el mismo). Luego pide
// un operador, lo valida, y si pasa la validaci�n pide dos n�meros para operar.
// Realiza adem�s una validaci�n sobre la divisi�n.
//
// Autor: Cynthia Roz�n
// �ltima modificaci�n: 15/04/2015

#include <iostream>
using namespace std;

int main(){
    char nom[20];
    char apel[20];
    double x;
    double y;
    char operador;
    double resultado;
    bool sexo;
    char genero;

    cout << "Escriba su nombre y apellido: " << endl;
    cin >> nom >> apel;
    cout << "Es usted hombre o mujer? Responda H/M " << endl;
    cin >> genero;

    while (genero != 'H' && genero != 'h' && genero != 'M' && genero != 'm'){
        cout << "No ha escrito una respuesta valida. Responda nuevamente: " << endl;
        cin >> genero;
    }

    if (genero == 'H' || genero == 'h'){
        sexo = true;
    } else {
        sexo = false;
    }

// La utilizaci�n de una variable de tipo bool en este caso es redundante, la coloqu� para trabajar con
// dicho tipo de dato, para observar m�s o menos c�mo funciona.

    if (sexo == true){
        cout << "Bienvenido " << nom << " " << apel << endl;
    } else {
        cout << "Bienvenida " << nom << " " << apel << endl;
    }

    cout << "La estructura de la operacion sera la siguiente: x operador y" << endl;
    cout << "Escriba un valor para x: " << endl;
    cin >> x;
    cout << "Escriba un valor para y: " << endl;
    cin >> y;
    cout << "Escriba un operador (+,-,/,*): " << endl;
    cin >> operador;

    while (operador != '+' && operador != '-' && operador != '/' && operador != '*'){
        cout << "No ha escrito un operador valido. Escriba un operador: " << endl;
        cin >> operador;
    }

//Aclaraci�n: no se c�mo validar si lo que se ingresa a la variable es num�rico o alfanum�rico,
// por lo que no har� dicha validaci�n.

    if (operador == '+' ){
        resultado = x + y;
    }
    if (operador == '-'){
        resultado = x - y;
    }
    if (operador == '*'){
        resultado = x*y;
    }
    if (operador == '/'){
        while (y == 0){
            cout << "No se puede dividir por 0. Escriba un nuevo valor para y: " << endl;
            cin >> y;}
        resultado = x/y;
    }

    cout << "El resultado de su operacion es: " << x << operador << y << " = " << resultado << endl;
    cout << "Gracias " << nom << " por utilizar este programa. Hasta luego!";

    return(0);
}
