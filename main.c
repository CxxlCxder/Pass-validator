#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_numbers(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    return count;
}

int count_sp( const char *str)
{
    int count = 0;
    for ( int i = 0; str[i] != '\0'; i++) {
        if ( str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '&' || str[i] == '*' ) {
        count++;
        }
    }
    return count;
}

int main()
{
	
	char _password[20];
	printf("Enter Password: ");
	scanf("%s", _password);
	
	if ( strlen(_password) >= 7 && count_numbers(_password) >= 2 && count_sp(_password) >= 2 )
	
	{
	    printf("\nStrong\n");
	}
	else
	{
	    printf("\nWeak\n");
	}
	
	return 0;	
}
