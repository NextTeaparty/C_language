#include<stdio.h>

//関数プロトタイプ宣言
//関数(引数の型,引数の型...)
//今回は2つの値を引数に持っていきたいので2つ
kansu(int, int);

main()
{
	int x = 10;
	int y = 20;
	int ans;

	//関数呼び出し
	//変数 = 関数名(引数)という書式

	ans = kansu(x, y);

	printf("%d\n", ans);

	return 0;

}

kansu(int a, int b)	//引数の設定。xとyはこのaとbに代入される
{

	int z;

	z = a + b;

	//値を返却。これが戻り値。今回は計算結果zをメインループのansに返したいのでzを指定
	return z;



}