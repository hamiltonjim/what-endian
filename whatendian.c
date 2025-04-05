#include <stdio.h>

int main() {
	long foo = 0x01020304;
	char *bar = (char *) &foo;
	char *what;

	switch (*bar) {
	case 1: 
		what = "big";
		break;
	case 2:
	case 3:
		what = "wtf";
		break;
	case 4:
		what = "little";
		break;
	}
	printf("%s endian\n", what);
	return 0;
}
