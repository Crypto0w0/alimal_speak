#include <iostream>
using namespace std;

class Animal{
public:
    virtual void Speak() = 0;
};

class Frog : public Animal{
public:
    void Speak(){
        cout << "Kva-Kva\n";
    }
};

class Dog : public Animal{
public:
    void Speak(){
        cout << "Gaf-Gaf\n";
    }
};

class Cat : public Animal{
public:
    void Speak(){
        cout << "Meow-Meow\n";
    }
    void Scratch(bool hw){
        if (hw) cout << "Scratching...\n";
        else cout << "Not scratching...\n";
    }
    void Purr(){
        cout << "Purring...\n";
    }
};




int main() {
    Cat* c;
    Animal* a[3] = {new Cat, new Dog, new Frog};
    for (int i = 0; i < 3; i++){
        a[i]->Speak();
    }
    a[0] = dynamic_cast<Animal*>(c);
    bool hw = true;
    a[0]->Scratch(hw);
}
