#include <string>
#include <iostream>
class Mascota
{
private:
    int vida;
    std::string nombre;

public:
    Mascota()
    {
        this->vida = 100;
    }
    void establcerenombre(std::string nombre)
    {
        this->nombre = nombre;
    }
    ~Mascota() {}
    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;
    }
};