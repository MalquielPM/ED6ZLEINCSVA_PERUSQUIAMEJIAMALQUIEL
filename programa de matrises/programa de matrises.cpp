#include <iostream>
using namespace std;

void calcularEdad( int anioenencurso , int mesencurso, int diaencurso, int aniodenacimiento, int mesdenacimiento, int diadenacimiento);
 
int main ()
{
    int anioenencurso
    int mesencurso
    int diaencurso
 
    int aniodenacimiento
    int mesdenacimiento
    int diadenacimiento
 
    cout << "\n\edad mes y dia\n";
    cout << "introdusca Anio en curso: ";   cin >>anioenencurso;
    cout << "introdusca Mes en curso: ";   cin >> mesencurso;
    cout << "introdusca dia en curso: ";  cin >> diaencurso
 ;
 
    cout << "introdusca Anio de nacimiento: ";  cin >> aniodenacimiento;
    cout << "introdusca Mes de nacimiento: ";  cin >> mesdenacimiento;
    cout << "introdusca dia de Nacimiento: ";  cin >> diadenacimiento;
 
    calcularEdad(anioenencurso , mesencurso, diaencurso, aniodenacimiento, mesdenacimiento, diadenacimiento);
 
    return 0;
}
 
void calcularEdad( int anioenencurso ,int mesencurso, int diaencurso, int aniodenacimiento, int mesdenacimiento, int diadenacimiento)
{
    int respdia , respmes;
 
    if (diaencurso < diadenacimiento)
    {   
       diaencurso =  diadenacimiento + 30; 
         mesencurso = mesencurso - 1;
        respdia =  diaencurso - diadenacimiento; 
    }
    else 
       respdia =  diaencurso - diadenacimiento;  
 
    if(mesencurso < mesdenacimiento)
    {   
        mesencurso = mesencurso + 12; 
        anioenencurso = anioenencurso - 1 ; 
        respmes = mesencurso  -  mesdenacimiento; 
    }
    else 
        respMes = mesAct - mesencurso; 
 
    cout << "\n su edad es:\n";
    cout << "anio: " <<anioenencurso - niodenacimiento << endl;
    cout << " mes: " << mesencurso - aniodenacimiento << endl; 
    cout << " dia: " << respdia - diadenacimiento << endl; 
    
	}
