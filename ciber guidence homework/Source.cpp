#include <stdio.h>

int i = 1;//index번호
int tmp[100] = { 0 }; //언제든지사용가능한 임시변수
char name[100][100]; //이름변수
int phone[100]; //전화번호 변수
char school[100][100]; //소속변수

void add() {
	printf("입력하실 변수를 입력해 주세요\n");
	printf("이름 : ");
	scanf_s("%s", name[i]);
	printf("전화번호(번호만) : ");
	scanf_s("%d", &phone[i]);
	printf("소속 : ");
	scanf_s("%s", school[i]);
	i++;
}

void del(){
	int delnum;
	printf("몇번째 주소록을 삭제하시겠습니까\n");
	scanf_s("%d", &delnum);
	tmp[delnum] = 1;

}

void check(){
	int j;
	if (i > 1) {
		for (j = 1; j < i; j++) {
			if (tmp[j] == 0) {
				printf("%d번째 주소록\n", j);
				printf("+--------------------------------------+\n");
				printf("|이름		: %15s      |\n", name[j]);
				printf("|전화번호	: %15d      |\n", phone[j]);
				printf("|소속		: %15s      |\n", school[j]);
				printf("+--------------------------------------+\n");
			}
			else {
				printf("\n\n%d번째 주소록은 삭제되었습니다\n\n\n", j);
			}
		}
	}
	else {
		printf("주소록이 존재하지 않습니다");
	}
}
int main() {
	int num;
	while (1) {
		printf("사용하실 기능을 선택하세요. \n 1.등록, 2.삭제, 3.조회 4.나가기\n입력 : ");
		scanf_s(" %d", &num);
		switch (num) {
		case 1: //등록
			add();
			break;
		case 2: //삭제
			del();
			break;
		case 3: //조회
			check();
			break;
		case 4 : 
			return 0;
		}
	}
	return 0;
}