#include <stdlib.h>
#include <stdio.h>

int main() {
	FILE *in, *out;
	int cnt;
	char str[100];
	in = fopen("welcome.txt", "r");
	out = fopen("output.txxt", "w");
	while (!feof(in)) {
		cnt = fscanf(in, "%s", str);
		if (cnt > 0) {
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
}