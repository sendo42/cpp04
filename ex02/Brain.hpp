#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain
{
    public:
        Brain(void);
        virtual ~Brain();
        Brain(Brain &Brain);
        Brain& operator=(const Brain &brain);

        std::string ideas[100];
        void print_ideas();
        void setBrain(const std::string &idea);



};

#endif

/*

ideasと呼ばれる100の配列のあるBrainクラスを実装する。
DogとCatはprivateメンバでBrainをもち、

constructorでBrainをつくり、Destructorで消す。

main関数ではAnimalを武ジェクトの配列を作り、埋める。
半分は犬、もう半分は猫。
最後には全部消す。
AnimalとしてDogとCatを消そう！

適切なですとらくたが命令で呼ばれる。
    つまり、animalが消してるかってこと？

犬と猫のコピーは全部代入しないといけないので、
ディープコピーに！



ディープコピーとはなんぞや？
https://developer.mozilla.org/ja/docs/Glossary/Deep_copy
オブジェクトの ディープコピー とは、コピー先のオブジェクトのプロパティがコピー元のオブジェクトのプロパティと同一の参照（同じ値を指す）で共有しないコピー方法のことです。結果として、コピー元かコピー先のどちらかを変更しても、もう一方オブジェクトにも変更を及ぼしていないことを保証できます。すなわち、コピー元かコピー先に意図せずに予期しない変更が加えられるこはありません。

今回は特にコピーすることはないが、
おそらく同じポインタを指していないことを示ればいいのでは？


*/