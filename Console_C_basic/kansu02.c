#include<stdio.h>

//�֐��v���g�^�C�v�錾
//�֐�(�����̌^,�����̌^...)
//�����2�̒l�������Ɏ����Ă��������̂�2��
kansu(int, int);

main()
{
	int x = 10;
	int y = 20;

	//�֐��Ăяo��
	//�֐��֎����Ă��������ϐ���ݒ�
	kansu(x, y);

	return 0;

}

kansu(int a, int b)	//�����̐ݒ�Bx��y�͂���a��b�ɑ�������
{

	int ans;

	ans = a + b;
	printf("%d\n", ans);

}