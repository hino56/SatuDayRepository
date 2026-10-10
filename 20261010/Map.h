#pragma once
#include<vector>
#include<string>
using namespace std;

class Map
{
private:
	vector<vector<int>>mapData;
	vector<vector<int>>hitData;

	//マップチップ画像
	int chipImage[64];

	//マップの縦横のマスの数
	int mapWidth;
	int mapHeight;

	//マップの大きさ
	static constexpr int CHIP_SIZE = 64;

	//csvファイルの読み込み
	bool LoadCSV(const char* fileName, std::vector<std::vector<int>>& data);

public:
	/// <summary>
	///　Mapコンストラクタ
	/// </summary>
	Map();

	/// <summary>
	/// 初期化
	/// </summary>
	/// <returns>読み込み不正</returns>
	bool Init();

	/// <summary>
	/// マップの描画
	/// </summary>
	/// <param name="cameraX">カメラ座標X</param>
	/// <param name="cameraY">カメラ座標Y</param>
	void Draw(float cameraX, float cameraY);

	/// <summary>
	/// 通行できるかどうか
	/// </summary>
	/// <param name="tileX">タイルX座標</param>
	/// <param name="tileY">タイルY座標</param>
	/// <returns></returns>
	bool IsSolid(int tileX, int tileY);

	/// <summary>
	/// ワールド座標から当たり判定を調べる
	/// </summary>
	/// <param name="worldX">ワールド座標X</param>
	/// <param name="worldY">ワールド座標Y</param>
	/// <returns></returns>
	bool isSolidAt(float worldX, float worldY);
};

