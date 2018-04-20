#ifndef ABSTRACT
#define ABSTRACT

#endif // ABSTRACT

class Unit {
    public:
        virtual ~Unit() = default;
        virtual int getSpeed() = 0;
        virtual int getHealth() = 0;
        virtual int getAge() = 0;
        virtual int getArmor() = 0;
        virtual int getAttack() = 0;
};
