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

	printf("%d�̃R�}�ŃQ�[�����J�n���܂��B\n\nPress Any Key...", koma);
	Reset();

	while (1){

		//�v���C���[�̃^�[��

		int count;

		printf("���Ȃ��̔Ԃł��B\n");
		printf("�������܂����H(1�`�R��)\n");
		scanf("%d", &count);

		if (CheckError(count))continue;

		koma -= count;

		List(koma);

		if (Judge(koma)){
			printf("���Ȃ��̕����ł��B\n");
			break;
		}

		Reset();

		//�G�̏���

		printf("����̃^�[���ł��B\n");
		count = Select(koma);
		printf("%d���܂����B\n", count);
		koma -= count;

		List(koma);

		if (Judge(koma)){
			printf("���Ȃ��̏����ł��B\n");
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
		printf("���͉\�͈͂͂P�`�R�܂łł��B\n");
		return 1;
	}
	return 0;
}

List(int koma){
	printf("�c���%d�ł��B\n", koma);
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