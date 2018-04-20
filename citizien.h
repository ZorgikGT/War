#ifndef CITIZIEN
#define CITIZIEN

#endif // CITIZIEN

#include <iostream>

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

    int Health(int damage)
    {
        m_health -= damage;
        if(m_health > 0) {
        return m_health;
        } else return 0;
    }
};
