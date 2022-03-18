#pragma once
#ifndef _CAT_H_
#define _CAT_H_


#include <string>


class Cat
{
private:
public://⑥publicによるアクセス
//protected://⑨継承先で変更
	//③デフォルト初期化値による設定
	std::string name = "cat";
	int age;

public:
	//③デフォルト初期化値による設定
	Cat() : name("cat") {}

	//①引数付きコンストラクタによる設定...生まれた時に名前を付けてあげる
	Cat(const std::string& rName) : name(rName) {}

	//②セッターによる設定...すでに生まれた猫の名前を変える
	void SetName(const std::string& rName)
	{
		name = rName;
	}

	//④クラス内スタティック関数による設定
	static void StaticSetName(Cat& cat, const std::string rName)
	{
		cat.name = rName;
	}

	//⑦オペレーター = による代入
	void operator=(const std::string& rName)
	{
		name = rName;
	}

	void operator=(int age)
	{
		Cat::age = age;
		//this->age=age;
	}

	//⑧猫の名前へのアドレスをもらう
	std::string* GetNameAddr(void)
	{
		return &name;
	}


};

//⑨継承先で変更
class CatMonstor : public Cat
{

public:
	CatMonstor()
	{
		name = "継承";
	}
};

#endif // !_CAT_H_
