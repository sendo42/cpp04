#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        void print_ideas();
        void setBrain(const std::string &idea);

        Brain(void);
        Brain(Brain &Brain);
        Brain& operator=(const Brain &brain);
        virtual ~Brain();

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


https://qiita.com/ketaro-m/items/80ae54a8286c1bb610d7
virtualのメリットと、何で呼ばれているのか
インスタンスとポインタからの呼び方の挙動が違う。
->実行時に実体の型を調べて動的に関数を選択することを可能にするのが仮想関数なのです．


インスタンスなら
https://programming.pc-note.net/cpp/abstract.html
https://jp-seemore.com/iot/24284/

https://tyfkda.github.io/blog/2022/02/26/multiple-inheritance-vtable.html
https://sugawarayusuke.hatenablog.com/entry/2018/01/08/185229
仮想関数テーブル


*/