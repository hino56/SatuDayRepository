#include<iostream>
#include<vector>

int main(void)
{
	//Enemy enemy;

	//ベクター宣言
	std::vector<int>number;
	std::vector<float>number2;
	//std::vector<Enemy>enemies;

	//追加
	number.push_back(10);
	number.push_back(20);
	number.push_buck(30);

	//要素確認
	std::cout << number.size() << std::endl;

	//
	int num = number[0];
	std::cout << num;

	//削除
	number.clear();
	return 0;
}