/*现有序列： s = a + （a + 3） + （a + 6） +…+ （a + 3 * n）
请写出递归求s的程序。
输入只有一行，为两个用空格分隔正整数，分别代表n(0<n) 和 a(1<a) */ 
int getSum(int n , int a) 
{
	if (n == 0){
		return a;
	}
	if (n>0){
		return getSum(n-1,a)+a+3*n;
	}
} 
