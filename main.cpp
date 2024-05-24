#include <iostream>
#include <vector> // Data 저장, Container라고 한다, 자료를 저장하는것, 동적배열, 접근하기 편해서
//그냥 배열쓰면 다적어야하잖아; // STL
using namespace std;

////int main()
////{
////	int A[10] = { 0. }; // 오토변수라고, 스코프가 끝나면 사라진다 얘를가지고 동적으로 로딩하거나 할땐 사용 할 수 없음
////						// 왜냐 제어 할 수 없으니까
////	int* PA = new int[10]; // 얘는 제어가 가능하다, int형 위치값을 저장한다 // new 동적으로 만든다, 힙영역에 생성, 지우고싶을때 지울 수 있다.
////
////	for (int i = 0; i < 10; ++i)
////	{
////		PA[i] = i + 1; // 0부터 10까지 들어갈거고 - 1, 2, 3,4,5,6,7,8,9
////	}
////
////	srand(time(nullptr)); // 랜덤한 값을 넣겠다
////
////	int NewPosition = rand() % 10; // 10번재 안에 놓겠다, 새로 선언하면 편하겠지?
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
////	//PA[0] = 1; // PA 위치의 0번째 값에다가 1을 넣어라
////
////	delete[] PA; // 지울때 해당 문자 사용 / 단일이면 단일, 배열이면 배열로 세트 맞춰줘라
////	delete[] NewPA;
////
////	return 0;
////}
//
////class Vector2D  // 자료형인데 함수도 가지고있는 class, 짬통마냥 다 넣음
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
//class Apple // 자료로 색깔을 정해볼거야
//{
//public:
//
//	int BodyColor;// 0:Red 1:Yellow
//	int Taste = 0;
//	int InnerColor = 1;
//
//	void ByAte() // 먹힌다 - 구현해보자
//	{
//
//	}
//	void Fall() // 떨어진다
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
//	//Vector2D PlayerPosition; // 벡터로 뭘 할 수 있냐, 출력도되고 초기화도되고,더하기도된다
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
//	//멤버 변수, C++
//
//	int X;
//	int Y;
//};
//
//class Wall
//{
//	
//	int Shpae;
//	// 멤버함수, C++
//	// Method
//	void Block();
//};
//
//class Player : AActor// 2 위치값 필요
//{
//	
//	int Shpae;
//	void Move();
//	void Arrive(); // 1 주체로가자
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
//class Engine 	//운영체제보다 상위개념 - World의 상위개념
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
//// fuction overloading 같은이름으로 여러 함수를 만드는 것
//// name mangling 기존 방식마냥 add1 add2로 만드는것
//
//template<typename T> // 자동으로 함수를 만든다
//// 메타프로그래밍
//// 언제사용? Compile 시 생성 형태에 맞게
//
//int Add(int A, int B)
//{
//	return A + B;
//}
////
////cout << Add<int>( 1, 2 ) << endl; 이런식으로 T 사용한다.
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
//	// 그런데
//	cout << Add(1.2f, 2, 2f) << endl;
//	// 이거하려면? 위에 선언 하나 더 해줘야 한다.
//
//}

//int main()
//{
//	//vector<float> A;// 동적배열로 한다, 형태를 정해줘야해
//
//	//지금 하려는건 STL에 벡터 해보려고한다
//	vector<int> IntArray; // 배열인데, 크기가 바뀌는 배열이다.
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
//class Player // 얘는 실행되는애가 아니야, 설계도야
//{
//public: // 멤버 변수
//
//	int X;
//	int Y;
//
//	char Shape;
//	
//	void Move(); // 멤버 함수
//
//};

//void Player::Move() // class Player void Move 안에 포함되어있다.
//{
//
//}
//
//class Monster
//{
//public:
//
//};

//#include "Player.h" // 주제를 정하고 주제에 포함된 요소들을 정한다.
//					// 자료형 뭔지모르면  인티져 때려박고
//					// 함수도 반환형 뭐시기 필요없어 
//					// 변수 선언하듯이 사용하면 됩니다 밑에 358 라인 확인
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
//	// 몬스터 여러마리
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