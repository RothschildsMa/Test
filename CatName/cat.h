#pragma once
#ifndef _CAT_H_
#define _CAT_H_


#include <string>


class Cat
{
private:
public://�Epublic�ɂ��A�N�Z�X
//protected://�H�p����ŕύX
	//�B�f�t�H���g�������l�ɂ��ݒ�
	std::string name = "cat";
	int age;

public:
	//�B�f�t�H���g�������l�ɂ��ݒ�
	Cat() : name("cat") {}

	//�@�����t���R���X�g���N�^�ɂ��ݒ�...���܂ꂽ���ɖ��O��t���Ă�����
	Cat(const std::string& rName) : name(rName) {}

	//�A�Z�b�^�[�ɂ��ݒ�...���łɐ��܂ꂽ�L�̖��O��ς���
	void SetName(const std::string& rName)
	{
		name = rName;
	}

	//�C�N���X���X�^�e�B�b�N�֐��ɂ��ݒ�
	static void StaticSetName(Cat& cat, const std::string rName)
	{
		cat.name = rName;
	}

	//�F�I�y���[�^�[ = �ɂ����
	void operator=(const std::string& rName)
	{
		name = rName;
	}

	void operator=(int age)
	{
		Cat::age = age;
		//this->age=age;
	}

	//�G�L�̖��O�ւ̃A�h���X�����炤
	std::string* GetNameAddr(void)
	{
		return &name;
	}


};

//�H�p����ŕύX
class CatMonstor : public Cat
{

public:
	CatMonstor()
	{
		name = "�p��";
	}
};

#endif // !_CAT_H_
