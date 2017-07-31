/*读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char input[100];
	char pyNum[][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	int iSplit[5];
	int i, bitSum;
	bitSum = 0;
	gets(input);
	for (i = 0; i < strlen(input); i++)
		bitSum = bitSum + input[i] - '0'; //将字符ASCII转为Int之后位数相加 
	i = 0;
	while (bitSum != 0) {            //e.g 123 % 10 = 3 || 123 / 10 = 12 
		iSplit[i++] = bitSum % 10; //得到每一位数 
		bitSum = bitSum / 10;	  //排除已经得到的位数 
	}
	printf("%s", pyNum[iSplit[i - 1]]); //输出第一个数进行格式控制 
	for (i = i - 2; i >= 0; i--)
		printf(" %s", pyNum[iSplit[i]]);
	return 0;
}