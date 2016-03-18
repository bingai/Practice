# include <iostream>
using namespace std;

class Enemy {
public:
        void setAttackPower(int a){
            attackPower = a;
        };
        virtual void attack(){
            cout << "Virtual ATTACK" << endl;
        }

protected:
        int attackPower;

};

class Ninja: public Enemy {
    public:
        void attack(){
            cout << "I am Ninja! I will chop you! - " << attackPower << endl;
        }
};

class Monster: public Enemy {
public:
    void attack(){
        cout << "I am Monster! I will eat you! - " << attackPower << endl;
    }
};

int main () {
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(4);
    enemy2->setAttackPower(26);
    // n.attack();
    // m.attack();
    enemy1->attack();
    enemy2->attack();

}