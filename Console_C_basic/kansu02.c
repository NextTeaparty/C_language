#include<stdio.h>

//関数プロトタイプ宣言
//関数(引数の型,引数の型...)
//今回は2つの値を引数に持っていきたいので2つ
kansu(int, int);

main()
{
	int x = 10;
	int y = 20;

	//関数呼び出し
	//関数へ持っていきたい変数を設定
	kansu(x, y);

	return 0;

}

kansu(int a, int b)	//引数の設定。xとyはこのaとbに代入される
{

	int ans;

	ans = a + b;
	printf("%d\n", ans);

}