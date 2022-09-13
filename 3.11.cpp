#include <iostream>
using namespace std;
 
class MotorVehible
{
    // atributos
    string marca, fuelType,color;
    int año;
 
public:
    // métodos
    int getAño();
    string getMarca(); 
    string getFuelType();
    string getColor(); 
    void   setAño(int n);
    void   setMarca(string n);
    void   setFuelType(string n);
   void   setColor(string n); 
};
 
// implementación de los métodos de la clase MotorVehible
string MotorVehible::getMarca() { return marca; }
string MotorVehible::getFuelType() { return fuelType; }
string MotorVehible::getColor() { return color; }
int MotorVehible::getAño() { return año; }
void MotorVehible::setMarca(string n) { marca = n; }
void MotorVehible::setFuelType(string n) { fuelType = n; }
void MotorVehible::setColor(string n) { color = n; }
void MotorVehible::setAño(int n) { año = n; }
class DisplayCarDetails
{
    // atributo privado
    int resultado;
 
public:
    // método público
 string DisplayCarDetail();
    // atributo público
    MotorVehible p;
};
// implementación del método calcular de la clase DisplayCarDetails .
string MotorVehible::DisplayCarDetail() { return p.getMarca() + p.getAño(); }
 
int main()
{
    DisplayCarDetails s;
    s.p.setMarca("toyota");
    s.p.setAño(2015);
    cout << s.p.getMarca() << " + " << s.p.getAño() << " DATOS " << s.DisplayCarDetails() << endl;
    cin.get();
    return 0;
}