int main() {
	int i2;
	char buffer[100];
	int i;

	i = 0;
	fgets(buffer, 100, stdin);
	i = 0;
	while(i < strlen(buffer)) {
		if (buffer[i] >= 'A') {
			if (buffer[i] <= 'Z') {
				buffer[i] = buffer[i] ^ 32;
			}
		}
		i++;
	}
	printf(buffer);
	exit(0);
}
