int main() {
	int password;

	puts("***********************************");
	puts("*          -  Level00  -          *");
	puts("***********************************");
	printf("Password:")
	scanf("%d", &password);
	if (password == 0x149c) {
		puts("\nAuthenticated!");
		system("/bin/sh")
	} else {
		puts("\nInvalid Password!");
	}
	return (1);
}
