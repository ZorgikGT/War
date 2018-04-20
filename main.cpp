#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "abstract.h"
#include "archer.h"
#include "citizien.h"
#include "warrior.h"
#include "squad.h"

int main()
{
    int number = 0, command = 0, amount = 0;
    srand(time(0));
    VectorOfSquads Archers;
    VectorOfSquads Citizien;
    VectorOfSquads Warriors;
    for(;;) {
        std::cout << "Выберите команду:\n 1.Создать отряд\n 2.Посмотреть отряд\n 3.Посмотреть все отряды.\n 4.Удалить отряд\n 5.Выйти\n";
        std::cin >> command;
        switch(command) {
            case 1: {
                std::cout << " 1.Лучник\n 2.Ополченец\n 3.Воин" << std::endl;
                std::cin >> command;
                switch (command) {
                    case 1: {
                        std::cin >> amount;
                        Archers.setSquads(amount);
                        break;
                    }
                    case 2: {
                        std::cin >> amount;
                        Citizien.setSquads(amount);
                        break;
                    }
                    case 3: {
                        std::cin >> amount;
                        Warriors.setSquads(amount);
                        break;
                    }
                }
                break;
            }
            case 2: {
            std::cout << " 1.Лучник\n 2.Ополченец\n 3.Воин" << std::endl;
            std::cin >> command;
            switch (command) {
                case 1: {
                    std::cin >> number;
                    Archers.checkSquad(--number);
                    break;
                }
                case 2: {
                    std::cin >> number;
                    Citizien.checkSquad(--number);
                    break;
                }
                case 3: {
                    std::cin >> number;
                    Warriors.checkSquad(--number);
                    break;
                }
            }
                break;
            }
            case 3: {
                Archers.checkAll();
                Citizien.checkAll();
                Warriors.checkAll();
                break;
            }
            case 4: {
            std::cout << " 1.Лучник\n 2.Ополченец\n 3.Воин" << std::endl;
            std::cin >> command;
                switch (command) {
                    case 1: {
                        std::cin >> number;
                        Archers.deleteSquad(number--);
                        break;
                    }
                    case 2: {
                        std::cin >> number;
                        Citizien.deleteSquad(number--);
                        break;
                    }
                    case 3: {
                        std::cin >> number;
                        Warriors.deleteSquad(number--);
                        break;
                    }
                }
                break;
            }
        }
        if (command == 5) break;
    }
return 0;
}
