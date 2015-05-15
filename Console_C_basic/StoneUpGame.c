#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

Reset();
CheckError(int);
List(int);
Select(int);
Judge(int);

main(){

	int koma = 15;

	printf("%d個のコマでゲームを開始します。\n\nPress Any Key...", koma);
	Reset();

	while (1){

		//プレイヤーのターン

		int count;

		printf("あなたの番です。\n");
		printf("いくつ取りますか？(1～３個)\n");
		scanf("%d", &count);

		if (CheckError(count))continue;

		koma -= count;

		List(koma);

		if (Judge(koma)){
			printf("あなたの負けです。\n");
			break;
		}

		Reset();

		//敵の処理

		printf("相手のターンです。\n");
		count = Select(koma);
		printf("%d個取りました。\n", count);
		koma -= count;

		List(koma);

		if (Judge(koma)){
			printf("あなたの勝ちです。\n");
			break;
		}

		Reset();
	}

	return 0;

}

Reset(){
	getch();
	system("cls");
}

CheckError(int count){

	if (count<1 || count>3){
		printf("入力可能範囲は１～３までです。\n");
		return 1;
	}
	return 0;
}

List(int koma){
	printf("残りは%d個です。\n", koma);
}

Judge(int koma){
	return (koma <= 0) ? 1 : 0;
}

Select(int koma){

	if (koma == 3)return 2;
	if (koma == 2)return 1;
	if (koma == 1)return 1;

	switch (koma % 4){
	case 0:
		return 3;
	case 1:
		return 1;
	case 2:
		return 1;
	case 3:
		return 2;
	}

	return 1;
}