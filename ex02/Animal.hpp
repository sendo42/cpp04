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

https://note.com/kazushinakamura/n/n114a5d4ceda8
子クラスのインスタンス変数を作った場合、子クラスには親クラスの情報が含まれているので、親クラスの変数のように振る舞うこともできます。
つまり子クラスの変数を親クラスに「型変換」することが出来るのです。このように子供から親への変換をアップキャストと呼びますが、
これは「安全」であるとされています。ここで安全という用語が出てくるのが不思議に思えるかもしれませんが、
何が安全で何が安全ではないのかが今回の話です。

子クラスには親クラスの情報を含んでいるので何も問題はありません。但しキャストした参照やポインタからは、もう子クラスのメソッドを使えません。親クラスのポインタへ子クラスのポインタを代入すれば、何も書かなくても暗黙の変換が行われます。
ちゃんと子クラスとして呼び出せば子クラス、親クラスにキャストすれば親クラスのメソッドが呼ばれていますね。何も問題はありません。


抽象クラスとは何か。
抽象クラスとは、具体的な実装を伴わないクラスの定義
特定のインターフェースや基本的な構造を提供する役割を果たす。

派生クラスで抽象メソッドをオーバーライドして多様な機能を設計できる。
派生クラスに一定の規則や構造を矯正できる。

抽象メソッドを含むクラス。
クラス内に少なくとも一つの純粋仮想関数（抽象メソッド）を含める必要
純粋仮想関数は、関数宣言の末尾に　= 0wo
加えることで定義される。

その関数は抽象メソッドとなり、派生クラスでの具体的な実装が求められるようになります。


*/