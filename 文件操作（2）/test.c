#include <stdio.h>

////�ļ��Ĵ򿪺͹ر�
//// �򿪣�FILE=fopen(const char* filename,const char mode)
//// �رգ�int fclose(FILE * stream)
//
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	// .��ʾ��ǰ·��
//	// ..��ʾ��һ��·��
//	// fopen("test.txt","r");  �൱�� fopen("./test.txt","r")
//	// fopen("../../test.txt","r")  ��ʾ�ڴ�CԴ�ļ�����һ���ļ�  
//	//����·��
//	//fopen("E:\C������ϰ\�ļ�������2��\�ļ�������2��\\test.txt","r")
//	FILE* pf = fopen("test.txt", "w");
//	//����pfָ����Ǵ���ļ������Ϣ�ĵ�ַ
//	//wдģʽ���������ļ���ԭ�е�����
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////д�ļ�
//// int fputc(int c,FILE* stream)
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pwrite = fopen("test.txt", "w");
//	if (pwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('h', pwrite);
//	fputc('e', pwrite);
//	fputc('l', pwrite);
//	fputc('l', pwrite);
//	fputc('o', pwrite);
//	//�ر��ļ�
//	fclose(pwrite);
//	pwrite = NULL;
//	return 0;
//}

////���ļ�
//// int fgetc(FILE*stream)
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//��ȡ�ļ�
//	printf("%c ", fgetc(pfread));
//	printf("%c ", fgetc(pfread));
//	printf("%c ", fgetc(pfread));
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}

//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//���� - ��׼�����豸  - stdin
//��Ļ -��׼����豸   - stdout
//��һ������Ĭ�ϴ򿪵������豸
//Ĭ�ϴ򿪵�3��������
//
// stdin FILE*
// stdout FILE*
// stderr FILE*
//
//����
int main()
{
	char ch = fgetc(stdin);   //�Ӽ���д��
	fputc(ch,stdout);         //����Ļ���
	return 0;
}
