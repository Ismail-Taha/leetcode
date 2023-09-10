/* function that check if a number is palindrome or not without convert it to string**/

int is_palindrom(long long int n){

	long long int origine = n;
	long long int reverse = 0;
	long int R = 0;

	while (n > 0) {
		R = n % 10;
		reverse = (reverse * 10) + R;
		n = (n / 10);
	}
	return origine == reverse;
}
