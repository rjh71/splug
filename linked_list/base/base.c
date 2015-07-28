#include <stdio.h>
#include <stdlib.h>

void menu();

int main()
{
	menu();
return 0;
}

void menu()
{
	system("clear");
	puts("\t ------------------------------------------------------------");
	puts("\t |\t\t1. 모든 주소록 정보 출력\t\t    |");
	puts("\t |\t\t2. 회원 등록\t\t\t\t    |");
	puts("\t |\t\t3. 회원 정보 검색\t\t\t    |");
	puts("\t |\t\t4. 회원 정보 수정\t\t\t    |");
	puts("\t |\t\t5. 회원 삭제\t\t\t\t    |");
	puts("\t |\t\t6. 프로그램 종료\t\t\t    |");
	puts("\t ------------------------------------------------------------");
}
