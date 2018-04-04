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
    virtual int setAge() = 0;
    virtual void GetAll() = 0;
    virtual int setSpeed() = 0;
    virtual int setAttack() = 0;
    virtual int setArmor() = 0;
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
    int setAge() override {
        return H_age;
    }
    void GetAll() override {
        std::cout << "Age: " << H_age << " Speed: " << H_speed << " Attack: "<< H_attack << " Armor: " << H_armor << std::endl;
    }
    int setSpeed() override {
        return H_speed;
    }
    int setAttack() override {
        return H_attack;
    }
    int setArmor() override {
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
    int setAge() override{
        return H_age;
    }
    void GetAll() override {
        std::cout << "Age: " << H_age << " Speed: " << H_speed << " Attack: "<< H_attack << " Armor: " << H_armor << std::endl;
    }
    int setSpeed() override {
        return H_speed;
    }
    int setAttack() override {
        return H_attack;
    }
    int setArmor() override {
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

    int setAge() override {
        return H_age;
    }
    void GetAll() override {
        std::cout << "Age: " << H_age << " Speed: " << H_speed << " Attack: "<< H_attack << " Armor: " << H_armor << std::endl;
    }
    int setSpeed() override {
        return H_speed;
    }
    int setAttack() override {
        return H_attack;
    }
    int setArmor() override {
        return H_armor;
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
    for (auto archer : Archervector) {
        archer->setAge();
        archer->setSpeed();
        archer->setAttack();
        archer->GetAll();
        int Amount = 0; Amount ++;
    }
    std::cout << "Enter amount of warriors: ";
    std::cin >> amount;
    for(int i = 0; i < amount; i++) {
        Warriorvector.push_back(new Archer(1 + rand() % 50, 1 + rand() % 100, 1 + rand() % 10, 1 + rand() % 30));
    }
    for (auto warrior : Warriorvector) {
        warrior->setAge();
        warrior->setSpeed();
        warrior->setAttack();
        warrior->GetAll();
        int Amount = 0; Amount ++;
    }
    std::cout << "Enter amount of peasants: ";
    std::cin >> amount;
    for(int i = 0; i < amount; i++) {
        Peasantvector.push_back(new Archer(1 + rand() % 50, 1 + rand() % 100, 1 + rand() % 10, 1 + rand() % 30 ));
    }
    for (auto peasant : Peasantvector) {
        peasant->setAge();
        peasant->setSpeed();
        peasant->setAttack();
        peasant->GetAll();
        int Amount = 0; Amount ++;
    }
    return 0;
}
