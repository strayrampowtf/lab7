#include <iostream>
#include <string>

// Точка входа в программу
int main(){
    std::string name;
   // Читаем имя пользователя со стандартного ввода
    std::cin >> name;
    // Выводим приветствие
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
