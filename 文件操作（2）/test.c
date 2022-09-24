#include <stdio.h>

////文件的打开和关闭
//// 打开：FILE=fopen(const char* filename,const char mode)
//// 关闭：int fclose(FILE * stream)
//
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	// .表示当前路径
//	// ..表示上一级路径
//	// fopen("test.txt","r");  相当于 fopen("./test.txt","r")
//	// fopen("../../test.txt","r")  表示在此C源文件的上一级文件  
//	//绝对路径
//	//fopen("E:\C语言练习\文件操作（2）\文件操作（2）\\test.txt","r")
//	FILE* pf = fopen("test.txt", "w");
//	//这里pf指向的是存放文件相关信息的地址
//	//w写模式，会销毁文件里原有的内容
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////写文件
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
//	//写文件
//	fputc('h', pwrite);
//	fputc('e', pwrite);
//	fputc('l', pwrite);
//	fputc('l', pwrite);
//	fputc('o', pwrite);
//	//关闭文件
//	fclose(pwrite);
//	pwrite = NULL;
//	return 0;
//}

////读文件
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
//	//读取文件
//	printf("%c ", fgetc(pfread));
//	printf("%c ", fgetc(pfread));
//	printf("%c ", fgetc(pfread));
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}

//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘 - 标准输入设备  - stdin
//屏幕 -标准输出设备   - stdout
//是一个程序默认打开的两个设备
//默认打开的3个数据流
//
// stdin FILE*
// stdout FILE*
// stderr FILE*
//
//例子
int main()
{
	char ch = fgetc(stdin);   //从键盘写入
	fputc(ch,stdout);         //从屏幕输出
	return 0;
}
