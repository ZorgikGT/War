#ifndef SQUAD
#define SQUAD

#endif // SQUAD

#include <iostream>

class Squad {
private:
    std::vector <Unit *> squadName;
public:
    auto getSquad()
    {
        for (unsigned int i = 0; i < squadName.size(); i++) {
            std::cout << squadName[i]->getSpeed() << " ";
            std::cout << squadName[i]->getAge() << " ";
            std::cout << squadName[i]->getAttack() << " ";
            std::cout << squadName[i]->getHealth() << " ";
            std::cout << squadName[i]->getArmor() << std::endl;
        }
        std::cout << "\n";
    }

    auto setSquad()
    {
        for (unsigned int i = 0; i < squadName.size(); i++) {
            squadName[i]->getSpeed();
            squadName[i]->getAge();
            squadName[i]->getAttack();
            squadName[i]->getHealth();
            squadName[i]->getArmor();
        }
        return squadName;
    }

    void getUnit(int i)
    {
        std::cout << squadName[i]->getSpeed() << " ";
        std::cout << squadName[i]->getAge() << " ";
        std::cout << squadName[i]->getAttack() << " ";
        std::cout << squadName[i]->getHealth() << " ";
        std::cout << squadName[i]->getArmor() << "\n\n";
    }

    void addUnit(auto *unit)
    {
        squadName.push_back(unit);
    }

    void deleteUnit(int pos)
    {
        squadName.erase(squadName.begin()+pos);
    }

    void getSize()
    {
        std::cout << squadName.size() << "\n";
    }

};

class VectorOfSquads {
private:
    std::vector<Squad *> N;
public:

    void setSquads(int Amount)
    {
        Squad *Unitsquad = new Squad();
        for (int i = 0; i < Amount; i++) {
                    Unitsquad->addUnit(new Archer(rand() % 50, rand() % 50, rand() % 50, 1, 100));
                }
        N.push_back(Unitsquad);
    }
    void checkSquad(int number)
    {
        N[number]->getSquad();
    }

    void checkAll()
    {
        for (auto Archers : N) {
            Archers->getSquad();
        }
    }

    void deleteSquad(int number)
    {
        N.erase(N.begin() + number);

    }
};
