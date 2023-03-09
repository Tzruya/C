//question2
/*
*כתוב פונקציה המקבלת מספר ומחזירה אותו באופן הבא:
* אם הספרה קטנה מ-5 היא תוכפל ב-2 ותוכנס לקידמת המספר לפי סדר
* אם הספרה גדולה מ-5 היא תוכפל ב-2 והשארית שלה מ-10 תוכנס לקידמת המספר
* אם הספרה שווה ל-5 היא תהיה תהפוך ל-0 ותוכנס לקידמת המספר
*/
int func(int num)
{
	int temp, res = 0;
	int i;
	while (num > 0)
	{
		res = res * 10;
		temp = (num % 10 * 2) % 10;
		res = res + temp;
		num = num / 10;
	}
	return res;
}
int main()
{
	int num;
	num = 1234;
	num = func(num);
	printf("num=%d\n", num);
	num = 756;
	num = func(num);
	printf("num=%d\n", num);
//question3
/*
*  כיתבו פונקציה שמקבלת מערך הבודקת 3 תנאים
*  -כל המספרים במערך חיוביים
*  -סכום חצי המערך הראשון שווה לסכום חצי המערך השני
* -ערכו של המספר הראשון במערך מופיע פעמיים לכל היותר
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int func(int vec[10])
{
	int i,ans;
	int sum1 = 0, sum2 = 0;
	int arr1 = vec[0],count =0;
	for (i = 0; i <sizeof(vec)/2; i++)
	{
		sum1 = sum1 + vec[i];
		sum2 = sum2 + vec[9 - i];
		if (vec[i] >= 0)&&(vec(9-i>=0))
			ans = 1;
		else
			return 0;
		if (arr1 == vec[i])
			count++;
		if (count == 3)
			return 0;
	}
	if (sum1 == sum2)
		return 1;
	else return 0;
	
}
int main()
{
	int ans=2;
	int vec[10] = { 10,4,2,9,8,7,3,1,10,12};
	ans=func(vec);
	printf("%d",ans);
}
