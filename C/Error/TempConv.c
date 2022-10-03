#include <stdio.h>
//Convert the temperature in celsius to farhenheit.

float temp_f;     
float temp_c;     
char line_text[2];        

int main() {
	printf("Input a temperature (in Centigrade): ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &temp_c);

	temp_f == ((9 / 5) * &temp_c) + 32.0;
	printf("%f degrees Fahrenheit.\n", &temp_f);

	return(0);
}