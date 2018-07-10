#include <stdio.h>
int i = 0;

void add{
	printf("입력하실 변수를 입력해 주세요");
printf("이름 : ");
scanf_s(" %s", name[i]);
printf("전화번호(번호만) : ");
scanf_s("%d", phone[i]);
printf("소속 : ");
scanf(" %s", school[i]);
i++;
}

void del{

}

void check{
	int tmp;
if (i > 0) {
	for (j = 0; j < i; j++) {
		printf("------------------------------");
		printf("%d.", j);
		printf("이름 : %s ||", name[j])
			printf("전화번호; : %d ||", phone[j]);
		printf("소속 : %s", school[j]);
	}
}
}
int main() {
	char name[100][100]; //이름변수
	int phone[100]; //전화번호 변수
	char school[100][100]; //소속변수
	int num;
	printf("사용하실 기능을 선택하세요. \n 1.등록, 2.삭제, 3.조회")
		scanf_s("%d", num);
	switch (num) {
	case 1: //등록
		add();
		break;
	case 2: //삭제

		break;
	case 3: //조회

		break;
	}
	return 0;
}