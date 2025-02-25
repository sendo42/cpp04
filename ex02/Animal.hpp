#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
    protected:
        std::string type_;
    
    public:
        Animal(Animal &animal);
        Animal& operator=(const Animal &animal);
        virtual void makeSound() const = 0;
        std::string getType() const;

        Animal(void);
        virtual ~Animal();
};

#endif


/*

やるべきことは。ポリモーフィズム
https://rinatz.github.io/cpp-book/ch07-04-polymorphism/
typeにはdogかcatで初期化する。
アニマルクラスは空白か任意のチョイスで

すべてのanimalはmakeSound関数を実装しないといけない。

onst Animal* j = new Dog();
const Animal* i = new Cat();
この書き方どうなっとんねんんんん

え？普通にcopy construvtorとかassignとかかな？
わからん！
https://rinatz.github.io/cpp-book/appendix-downcasts/
基底クラスから派生クラスへの参照や型変換をダウンキャストという。
https://rinatz.github.io/cpp-book/ch07-04-polymorphism/
派生クラスの参照やポインタから 基底クラスの参照やポインタへの型変換をアップキャストといいます。

なぜアップキャストは安全で、ダウンキャストは危険なのか
https://qiita.com/RYO-4947123/items/eaeb48b6fcf97c02710f


'this' argument to member function 'makeSound' has type 'const Animal', but function is not marked const
こういうエラーは、

*/