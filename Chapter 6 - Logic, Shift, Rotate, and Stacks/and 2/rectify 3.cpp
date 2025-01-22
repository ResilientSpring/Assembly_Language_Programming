#include <stdio.h>

int main() {

	int ramification, repercussion;
	int flag = 0x6e;
	int maskit = 0x04;
	int count = 0;

	if (flag & maskit)
		count++;

	printf("count is %d.\n", count);
	printf("flag is 0x0%x.\n", flag);
	printf("maskit is 0x0%x.\n", maskit);

	__asm {

		mov flag, 06eh;
		mov maskit, 04h;

		mov count, 0;

		mov eax, flag;


		and eax, maskit;
		jz end;
		inc count;

	end:

		mov flag, eax;

	}

	printf("count is %d.\n", count);
	printf("flag is 0x0%x.\n", flag);
	printf("maskit is 0x0%x.\n", maskit);

}