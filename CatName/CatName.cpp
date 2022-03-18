#include "pch.h"
#include <iostream>
#include "cat.h"

int main()
{
    //std::cout << "Hello World!\n"; 
	Cat c("tama");
	c.SetName("みかん");
	Cat n;
	Cat b;

	Cat::StaticSetName(n, "staticSet");

	//⑤コピー代入演算子によるコピー
	b = n;

	//⑥publicによるアクセス
	n.name = "public";

	//⑦オペレーター = による代入
	c = "operator=";
	c = 6;

	//⑧猫の名前へのアドレスをもらう
	*n.GetNameAddr() = "getpointer";

	//⑨継承先で変更
	CatMonstor m;

	//⑩コピーコンストラクタによるコピー
	Cat f(c);

}

