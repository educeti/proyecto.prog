#include <iostream>
#include <string>
#include <Mascota.hpp>
int main()
{
   std::cout << "Juego de Mascotas" << std::endl;

   Mascota m1, m2, m3;
   m1.establcerenombre("Edmundo");
   m2.establcerenombre("Correa");
   m3.establcerenombre("Nico");

   m1.DecirNombre();
   m2.DecirNombre();
   m3.DecirNombre();

   return 0;
}