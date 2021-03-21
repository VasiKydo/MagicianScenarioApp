#include <iostream>
#include <cstring> 

using namespace std;

class magician {
    public:
        magician (int mAge, char *mBeard, int mMagicLevel);
        void FireBall();
        void LghtingSpell();
        void wait();
    private:
        int age;
        char beard[80];
        int magicLevel;
};

int main() {
    
    char str[80]="grey";
    magician Merlin (2021, str, 100);
    
    //A random scenario of a magician's actions follows bellow
    
    Merlin.FireBall();
    Merlin.wait();
    Merlin.LghtingSpell();
    Merlin.wait();
    Merlin.wait();
    Merlin.FireBall();
    
    return 0;
}

magician::magician (int mAge, char *mBeard, int mMagicLevel) {
    age = mAge;
    strcpy (beard, mBeard);
    magicLevel = mMagicLevel;
}

void magician::FireBall() {
    
    if (magicLevel >= 30) {
    magicLevel -=30;
    cout<<endl<<"Fireball! (magic Level:"<<magicLevel<<")";
    }
    else {
    
    cout<<endl<<"Fireball effort (not enough magic Level)";
    }    
}

void magician::LghtingSpell() {
    if (magicLevel >= 90) {
        magicLevel -= 90;
        cout<<endl<<"Lighting! (magic Level:"<<magicLevel<<")";
    }
    else
    cout<<endl<<"Lightning effort (not enough magic Level)";
}

void magician::wait(){
    if (magicLevel <= 90)
    magicLevel+=10;
    cout<<endl<<"wait... (magic Level:"<<magicLevel<<")";
}