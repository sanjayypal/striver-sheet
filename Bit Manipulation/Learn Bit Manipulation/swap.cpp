void swapNumber(int &a, int &b) {
	int temp = a;
	int mask = 0;
	a = mask | b;
	b = mask | temp;
}



// Better method
void swapNumber(int &a, int &b) {
	a = a^b;
	b=a^b;
	a=a^b;
}