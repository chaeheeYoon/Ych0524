#include <iostream>
#include <vector> // Data ����, Container��� �Ѵ�, �ڷḦ �����ϴ°�, �����迭, �����ϱ� ���ؼ�
//�׳� �迭���� ����������ݾ�; // STL
using namespace std;

////int main()
////{
////	int A[10] = { 0. }; // ���亯�����, �������� ������ ������� �긦������ �������� �ε��ϰų� �Ҷ� ��� �� �� ����
////						// �ֳ� ���� �� �� �����ϱ�
////	int* PA = new int[10]; // ��� ��� �����ϴ�, int�� ��ġ���� �����Ѵ� // new �������� �����, �������� ����, ���������� ���� �� �ִ�.
////
////	for (int i = 0; i < 10; ++i)
////	{
////		PA[i] = i + 1; // 0���� 10���� ���Ű� - 1, 2, 3,4,5,6,7,8,9
////	}
////
////	srand(time(nullptr)); // ������ ���� �ְڴ�
////
////	int NewPosition = rand() % 10; // 10���� �ȿ� ���ڴ�, ���� �����ϸ� ���ϰ���?
////
////		int* NewPA = new int[11];
////		for (int i = 0; i < NewPosition; ++i)
////		{
////			NewPA[i] = PA[i];
////		}
////		for (int i = 0; i < NewPosition; ++i)
////		{
////			cout << NewPA[i] << " ,";
////		}
////
////		NewPA[NewPosition] = NewVal;
////
////		for (int i = NewPosition; i < 10; ++i)ss
////		{
////			NewPA[i] = PA[i - 1];
////		}
////
////		for (int i = 0; i < 10 + 1; ++i)
////		{
////			cout << PA
////		}
////	//PA[0] = 1; // PA ��ġ�� 0��° �����ٰ� 1�� �־��
////
////	delete[] PA; // ���ﶧ �ش� ���� ��� / �����̸� ����, �迭�̸� �迭�� ��Ʈ �������
////	delete[] NewPA;
////
////	return 0;
////}
//
////class Vector2D  // �ڷ����ε� �Լ��� �������ִ� class, «�븶�� �� ����
////{
////	int X;
////	int Y;
////
////	void Init();
////	{
////
////
////	}
////	void Print();
////	{
////
////
////	}
////	void Add();
////	{
////
////	}
////
////};
//class Color
//{
//public:
//	float R;
//	float G;
//	float B;
//	float A;
//};
//
//
//
//class Apple // �ڷ�� ������ ���غ��ž�
//{
//public:
//
//	int BodyColor;// 0:Red 1:Yellow
//	int Taste = 0;
//	int InnerColor = 1;
//
//	void ByAte() // ������ - �����غ���
//	{
//
//	}
//	void Fall() // ��������
//	{
//
//	}
//};
//
//int main()
//{
//
//	Apple* Mine = new Apple;
//
//	Mine->BodyColor.R = 0.0f;
//	Mine->ByAte(" ");
//
//	delete Mine;
//	//Vector2D PlayerPosition; // ���ͷ� �� �� �� �ֳ�, ��µ��ǰ� �ʱ�ȭ���ǰ�,���ϱ⵵�ȴ�
//
//	//PrintVector2D();
//	//InitVector2D();
//	//AddVector2D();
//}

//class Image
//{
//public:
//
//	int X;
//	int Y;
//	int R;
//	int G;
//	int B;
//
//
//};
//
//int main()
//{
//	Image* Images = new Image[100];
//	Images[0].X = 0;
//	Images[0].Y = 0;
//	Images[0].R = 100;
//	Images[0].G = 23;
//	Images[0].B = 144;
//
//
//
//	delete[] Images;
//
//}

//class World
//{
//	void Finish();
//	Floor Floors[100];
//	Wall Walls[100];
//	Player MyPlayer;
//	Monster Monsters[100];
//	Goal Goals[100];
//};
//
//class Floor
//{
//	int Shpae;
//	
//	void Block();
//};
//
//class AActor
//{
//public:
//	//��� ����, C++
//
//	int X;
//	int Y;
//};
//
//class Wall
//{
//	
//	int Shpae;
//	// ����Լ�, C++
//	// Method
//	void Block();
//};
//
//class Player : AActor// 2 ��ġ�� �ʿ�
//{
//	
//	int Shpae;
//	void Move();
//	void Arrive(); // 1 ��ü�ΰ���
//};
//
//class Monster : AActor
//{
//	
//	int Shpae;
//	void Move();
//};
//
//class Goal : AActor
//{
//	int Shpae;
//	
//};
//
//class Engine 	//�ü������ �������� - World�� ��������
//{
//public:
//
//	World MyWorld;
//
//	void Run()
//	{
//		while (true)
//		{
//			void Input();
//
//			void Tick();
//
//			void Render();
//
//		}
//	}
//
//	void Input();
//	void Tick();
//	void Render();
//	
//};

//void Move();
//void Arrive();
//void Finish();
//void Block();

//class Fruit
//{
//public:
//	int Shape;
//	int Color;
//
//};
//
//class Apple : Fruit
//{
//public:
//
//};
//
//class Orange : Fruit
//{
//public:
//
//
//};
//
//class Banana : public Fruit
//{
//public:
//
//
//};




//float Add(float A, float B)
//{
//	return A + B;
//}
//
//// fuction overloading �����̸����� ���� �Լ��� ����� ��
//// name mangling ���� ��ĸ��� add1 add2�� ����°�
//
//template<typename T> // �ڵ����� �Լ��� �����
//// ��Ÿ���α׷���
//// �������? Compile �� ���� ���¿� �°�
//
//int Add(int A, int B)
//{
//	return A + B;
//}
////
////cout << Add<int>( 1, 2 ) << endl; �̷������� T ����Ѵ�.
//
//
//int main()
//{
//	////has a
//	//// World has a Player
//
//	////Engine* MyEngine = new Engine();
//
//	////MyEngine->Run();
//	////
//	////delete MyEngine;
//
//	//Banana* MyBanana = new Banana();
//	//MyBanana->Shape = 1;
//	//MyBanana->Color = 0;
//
//	//delete MyBanana;
//
//	cout << Add(1, 2) << endl;
//	// �׷���
//	cout << Add(1.2f, 2, 2f) << endl;
//	// �̰��Ϸ���? ���� ���� �ϳ� �� ����� �Ѵ�.
//
//}

//int main()
//{
//	//vector<float> A;// �����迭�� �Ѵ�, ���¸� ���������
//
//	//���� �Ϸ��°� STL�� ���� �غ������Ѵ�
//	vector<int> IntArray; // �迭�ε�, ũ�Ⱑ �ٲ�� �迭�̴�.
//	for (int i = 0; i < 10; ++i)
//	{
//		IntArray.push_back(i + 1);
//	
//	}
//	IntArray.push_back(103);
//
//
//	
//	for (int i = 0; i < IntArray.size(); ++i)
//	{
//		cout << IntArray[i] << ", ";
//	}
//
//
//	return 0;
//}
//class Player // ��� ����Ǵ¾ְ� �ƴϾ�, ���赵��
//{
//public: // ��� ����
//
//	int X;
//	int Y;
//
//	char Shape;
//	
//	void Move(); // ��� �Լ�
//
//};

//void Player::Move() // class Player void Move �ȿ� ���ԵǾ��ִ�.
//{
//
//}
//
//class Monster
//{
//public:
//
//};

//#include "Player.h" // ������ ���ϰ� ������ ���Ե� ��ҵ��� ���Ѵ�.
//					// �ڷ��� �����𸣸�  ��Ƽ�� �����ڰ�
//					// �Լ��� ��ȯ�� ���ñ� �ʿ���� 
//					// ���� �����ϵ��� ����ϸ� �˴ϴ� �ؿ� 358 ���� Ȯ��
//int main()
//{
//	Player* MyPlayer = new Player();
//
//
//	MyPlayer->Move();
//
//	delete MyPlayer;
//
//	return 0;
//}

#include "Monster.h"
#include "Player.h"

//int main()
//{
//	Monster* MyMonster = new Monster();
//
//	MyMonster->Move();
//
//	delete MyMonster;
//
//	return 0;
//}



//int main()
//{
//	Player* MyPlayer = new Player();
//	//Monster* MyMonster = new Monster();
//	vector<Monster*> MyMonster;
//	// ���� ��������
//	MyMonster.push_back(new Monster());
//	MyMonster.push_back(new Monster());
//	MyMonster.push_back(new Monster());
//	MyMonster.push_back(new Monster());
//
//	MyPlayer->Move();
//
//	for (int i = 0; i < 5; ++i)
//	{
//		MyMonster[i]->Move();
//		MyMonster[i]->Attack();
//	}
//
//	delete MyPlayer;
//	
//	
//	return 0;
// 
//  
//}

int main()
{

	return 0;
}