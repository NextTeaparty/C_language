#include<stdio.h>

//�֐��v���g�^�C�v�錾
//�֐�(�����̌^,�����̌^...)
//�����2�̒l�������Ɏ����Ă��������̂�2��
kansu(int, int);

main()
{
	int x = 10;
	int y = 20;
	int ans;

	//�֐��Ăяo��
	//�ϐ� = �֐���(����)�Ƃ�������

	ans = kansu(x, y);

	printf("%d\n", ans);

	return 0;

}

kansu(int a, int b)	//�����̐ݒ�Bx��y�͂���a��b�ɑ�������
{

	int z;

	z = a + b;

	//�l��ԋp�B���ꂪ�߂�l�B����͌v�Z����z�����C�����[�v��ans�ɕԂ������̂�z���w��
	return z;



}