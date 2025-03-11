#include <iostream>

//nombro la variable y pido el numero al usuario
int main(){
    double z;
    std::cout << "ingrese el numero de Quintaesencia descubierto: ";
    std::cin >> z;
//creo una condicion para que conforme al valor imprima en pantalla tal cosa
    if(z <= 2) {
        std::cout << "Gas noble" << std::endl;
    }

        else if(3 <= z && z <= 10) {
            std::cout << "No metal" << std::endl;
        }

            else if(11 <= z && z <= 18) {
                std::cout << "Metal alcalino o alcalinoterreo" << std::endl;
            }

                else if(19 <= z && z <= 36) {
                std::cout << "Metaloide o no metal" << std::endl;
                }

                    else if(z > 36) {
                        std::cout << "Elemento pesado" << std::endl;
                    }
                        else{
                            std::cout << "no entra en la categoria mistica" << std::endl;
                        }

return 0;
}