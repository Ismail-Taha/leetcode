/* fuction that convert a roman number to integer num without convert it to string */
int roman_to_num(char *str){
	 int rvalues[10] = {0};
	 rvalues['I'] = 1;
	 rvalues['V'] = 5;
	 rvalues['X'] = 10;
	 rvalues['L'] = 50;
	 rvalues['C'] = 100;
	 rvalues['D'] = 500;
	 rvalues['M'] = 1000;

	int res = 0;
	int prevalue = 0;
	int len = strlen(str);

	for(int i = len - 1; i >= 0; i--){
		int curvalue = rvalues[str[i]];

		if (curvalue < prevalue){
			res -= curvalue;
		}else {
			res += curvalue;
		}
		prevalue = curvalue;
	}
	return res;
}
