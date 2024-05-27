#include <iostream>
#include <string>

int main() {
  int animalCount = 100; // примерное количество животных в зоопарке
  std::string zooSystem = "Информационная система для посетителей зоопарка";
  int price = 9; // Цена товара - животного

  std::cout << " Название системы:\n " << zooSystem << std::endl;
  std::cout << " Колличество животных в зоопарке - " << animalCount
            << " особей " << std::endl;
  std::cout << " Цена товара составляет: $ " << price << std::endl;

  return 0;
}
