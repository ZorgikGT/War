/* скорость возраст здоровье атака защита
* 3 типа юнитов: крестьянин, воин, лучник
* массив этих юнитов
* юниты могут объединяться в отряды
* отряды должны легко управляться: быстро получить состояние отрядов/юнитов
*
* вывод: кол-во отрядов и их хар-ки

* доп: вывести размеры для каждого типа классов
*/
# include <iostream>
# include <vector>
# include <cstdlib>
# include <ctime>

class Human {
protected:
    int health = 100;
public:
    virtual ~Human() = default;
    virtual int getAge() = 0;
    virtual void GetAll() = 0;
    virtual int getSpeed() = 0;
    virtual int getAttack() = 0;
    virtual int getArmor() = 0;
};

class Archer : public Human {
    int H_age = 0;
    int H_attack = 0;
    int H_speed = 0;
    int H_armor = 0;
public:
    Archer()
        :H_age()
        {}
    Archer(int age, int attack, int speed, int armor)
        :H_age(age), H_attack(attack), H_speed(speed), H_armor(armor)
        {}
    int getAge() override {
        return H_age;
    }
    void GetAll() override {
        std::cout << "Age: " << H_age << " Speed: " << H_speed << " Attack: "<< H_attack << " Armor: " << H_armor << std::endl;
    }
    int getSpeed() override {
        return H_speed;
    }
    int getAttack() override {
        return H_attack;
    }
    int getArmor() override {
        return H_armor;
    }

};

class Warrior : public Human {
    int H_age = 0;
    int H_attack = 0;
    int H_speed = 0;
    int H_armor = 0;
public:
    Warrior()
        :H_age()
        {}
    Warrior(int age, int attack, int speed, int armor)
        :H_age(age), H_attack(attack), H_speed(speed), H_armor(armor)
        {}
    int getAge() override{
        return H_age;
    }
    void GetAll() override {
        std::cout << "Age: " << H_age << " Speed: " << H_speed << " Attack: "<< H_attack << " Armor: " << H_armor << std::endl;
    }
    int getSpeed() override {
        return H_speed;
    }
    int getAttack() override {
        return H_attack;
    }
    int getArmor() override {
        return H_armor;
    }
};

class Peasant : public Human {
    int H_age = 0;
    int H_attack = 0;
    int H_speed = 0;
    int H_armor = 0;
public:
    Peasant()
        :H_age()
        {}
    Peasant(int age, int attack, int speed, int armor)
        :H_age(age), H_attack(attack), H_speed(speed), H_armor(armor)
        {}

    int getAge() override {
        return H_age;
    }
    void GetAll() override {
        std::cout << "Age: " << H_age << " Speed: " << H_speed << " Attack: "<< H_attack << " Armor: " << H_armor << std::endl;
    }
    int getSpeed() override {
        return H_speed;
    }
    int getAttack() override {
        return H_attack;
    }
    int getArmor() override {
        return H_armor;
    }

};

class Squad {
private:
    std::vector <Human *> Mysquad;

public:

    void setSquad(auto *number) {
       Mysquad = *number;
    }

    void getSquad() {
        for(int i = 0; i < Mysquad.size(); i++) {
            Mysquad[i]->getArmor();
            Mysquad[i]->getAttack();
            Mysquad[i]->getSpeed();
            Mysquad[i]->getAge();
            Mysquad[i]->GetAll();
        }
    }

    void getUnit(int i) {
        Mysquad[i]->getArmor();
        Mysquad[i]->getAttack();
        Mysquad[i]->getSpeed();
        Mysquad[i]->getAge();
        Mysquad[i]->GetAll();
    }
};

int main() {
    int amount = 0;


    std::vector <Human *> Warriorvector;
    std::vector <Human *> Peasantvector;
    std::vector <Human *> Archervector;

    std::cout << "Enter amount of Archers: ";
    std::cin >> amount;
    for(int i = 0; i < amount; i++) {
        Archervector.push_back(new Archer(1 + rand() % 50, 1 + rand() % 100, 1 + rand() % 10, 1 + rand() % 30));
    }

    Squad Archers;
    Archers.setSquad( &Archervector);
    Archers.getSquad();
    Archers.getUnit(2);

    std::cout << "Enter amount of warriors: ";
    std::cin >> amount;
    for(int i = 0; i < amount; i++) {
        Warriorvector.push_back(new Archer(1 + rand() % 50, 1 + rand() % 100, 1 + rand() % 10, 1 + rand() % 30));
    }
    for (auto warrior : Warriorvector) {
        warrior->getAge();
        warrior->getSpeed();
        warrior->getAttack();
        warrior->GetAll();
        int Amount = 0; Amount ++;
    }
    std::cout << "Enter amount of peasants: ";
    std::cin >> amount;
    for(int i = 0; i < amount; i++) {
        Peasantvector.push_back(new Archer(1 + rand() % 50, 1 + rand() % 100, 1 + rand() % 10, 1 + rand() % 30 ));
    }
    for (auto peasant : Peasantvector) {
        peasant->getAge();
        peasant->getSpeed();
        peasant->getAttack();
        peasant->GetAll();
        int Amount = 0; Amount ++;
    }
    return 0;
}
