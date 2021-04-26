// tarea_1_progra3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{   //Se declaran variables de tipo float debido a que necesitamos puntos decimales 
    float bmi = 0, peso_kg = 0, altura_metros = 0;
    //Menu que despliega informacion al usuario sobre Indice de masa corporal
    cout << "*******Bienvenido este programa calcula su BMI********" << endl
        << "Estos son los valores de BMI" << endl
        << "Bajo peso: menos de 18.5" << endl
        << "Normal entre: 18.5 y 24.9" << endl
        << "Sobrepeso entre: 25 y 29.9" << endl
        << "Obeso: 30 o mas" << endl;
    
    //Variables de salid a entrada, se solicita ingrese su peso y altura, luego esos datos son leidos y asignados a la variables.
    cout << endl << endl;
    cout << "Por favor ingrese su Peso en Kilogramos"<<endl;
    cin >> peso_kg;
    cout << "Por favor ingrese su altura en metros"<<endl;
    cin >> altura_metros;

    //Calculo del Indice de masa corporal
    bmi = peso_kg / (altura_metros * altura_metros);

    //Esta seccion de codigo se le hace saber al usuario su estado en relacion al Indice de masa corporal.
    cout << "El peso que ingreso es: " << peso_kg << "kg, la altura que ingreso es: " << altura_metros << "m" << endl;
    cout << "Su Indice de masa corporal es: " << bmi << endl;
   
    //Condiciones if anidados para determinar el estado del usuario
    if (bmi <= 18.5) {
        cout << "Usted se encuentra con bajo peso" << endl;
    }
    if (bmi > 18.5 && bmi <= 24.9) {
        cout << "Usted se encuentra con un peso normal" << endl;
    }
    if (bmi >= 25 && bmi <= 29.9) {
        cout << "Usted se encuentra con sobre peso" << endl;
    }
    if(bmi>=30){
        cout << "usted se encuentra obeso" << endl;
    }
    system ("pause");
    return 0;
}


