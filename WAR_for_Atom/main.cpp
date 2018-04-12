#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Unit {
    public:
        virtual ~Unit() = default;
        virtual int getSpeed() = 0;
        virtual int getHealth() = 0;
        virtual int getAge() = 0;
        virtual int getArmor() = 0;
        virtual int getAttack() = 0;
};

class Archer : public Unit{
int m_age = 0, m_attack = 0, m_speed = 0, m_armor = 0, m_health = 0;
public:
    Archer(int age, int attack, int speed, int armor, int health)
        :m_age (age), m_attack(attack), m_speed(speed), m_armor(armor), m_health(health)
    {}

    int getAge() override
    {
        return m_age;
    }

    int getAttack() override
    {
        return m_attack;
    }

    int getArmor()
    {
        return m_armor;
    }

    int getSpeed()
    {
        return m_speed;
    }

    int getHealth()
    {
        return m_health;
    }
};

class Citizen : public Unit{
    int m_age = 0, m_attack = 0, m_speed = 0, m_armor = 0, m_health = 0;
public:
    Citizen(int age, int attack, int speed, int armor, int health)
        :m_age(age), m_attack(attack), m_speed(speed), m_armor(armor), m_health(health)
    {}

    int getAge() override
    {
        return m_age;
    }

    int getAttack() override
    {
        return m_attack;
    }

    int getArmor()
    {
        return m_armor;
    }

    int getSpeed()
    {
        return m_speed;
    }

    int getHealth()
    {
        return m_health;
    }
};

class Warrior : public Unit{
    int m_age = 0, m_attack = 0, m_speed = 0, m_armor = 0, m_health = 0;
public:
    Warrior(int age, int attack, int speed, int armor, int health)
        :m_age(age), m_attack(attack), m_speed(speed), m_armor(armor), m_health(health)
    {}

    int getAge() override
    {
        return m_age;
    }

    int getAttack() override
    {
        return m_attack;
    }

    int getArmor()
    {
        return m_armor;
    }

    int getSpeed()
    {
        return m_speed;
    }

    int getHealth()
    {
        return m_health;
    }

};

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
    int m_amount = 0;
public:
    void setSquad()
    {
        N.push_back(new Squad());
    }

    void getSquads(int Amount)
    {
        int size =  N.size();
        int number = 0;
        for (auto Archers : N) {
            if(number == size - 1) {
                for (int i = 0; i < Amount; i++) {
                    Archers->addUnit(new Archer(rand() % 50, rand() % 50, rand() % 50, 1, 100));
                }
                Archers->getSquad();
                }
                number++;
        }
        N[0]->getSquad();
        number ++;
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
int main()
{
    int number = 0;
    int amount = 0;
    srand(time(0));
    int command = 1;
    VectorOfSquads Army;
    for(;;) {
        std::cout << "Выберите команду:\n 1.Создать отряд\n 2.Посмотреть отряд\n 3.Посмотреть все отряды.\n 4.Удалить отряд\n";
        std::cin >> command;
        switch(command) {
            case 1: {
                std::cin >> amount;
                Army.setSquad();
                Army.getSquads(amount);
                break;
            }
            case 2: {
                std::cin >> number;
                Army.checkSquad(number);
                break;
            }
            case 3: {
                Army.checkAll();
                break;
            }
            case 4: {
                std::cin >> number;
                Army.deleteSquad(number);
                break;
            }
        }
        if (command == 5) break;
    }
return 0;
}
