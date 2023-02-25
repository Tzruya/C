// פיתרון שאלה 1
int fun(int num,int digit)
{
	if((num>9&&num<100)&&(digit>0&&digit<10))  // שלושת התנאים הראשונים של השאלה
	{
		if ((num % 10) + (num / 10) == digit)  // בדיקת תנאי עיקרי
		{
			if (num / 10 >= num % 10)          //   בודק האם ספרת העשרות גדולה מספרת האחדות
			{
				digit = digit - (num / 10);
				return digit;
			}
			else
			{
				digit = digit - (num % 10);
				return digit;
			}
		}
		else
		{
			if (num / 10 <= num % 10)
			{
				if (num / 10 < digit)
					return num / 10;
				else
					return digit;
			}
			else
			{
				if (num % 10 < digit)
					return num % 10;
				else
					return digit;
			}

		}
			
	}
	else
	{
		return -1;
	}
}
int pol(int num,int size)
{
	int i,divide = 1;
	int ans=0;
	for (i = 0; i < size - 1; i++)
		divide = divide * 10;
	for (i = 0; i < size/2-1; i++)
	{
		if ((num / divide) == (num % 10))
			ans = 1;
		else
			return 0;
		num = num / 10;
		num = num % divide;
		divide /= 10;
		
	}
}
void pol1(int num, int size)
{
	int arr[7];
	int i,divide=1;
	for (i = 0; i < size - 1; i++)
		divide = divide * 10;
	printf("%d\n", divide);
	for (i = 0; i < size; i++)
	{
		arr[i] = num / divide;
		num = num % divide;
		divide = divide / 10;
		
	}
	printf("%d\n", divide);
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
//  פיתרון שאלה 2
int pol(int num,int size)
{
	int i,divide = 1;
	int ans=0;
	for (i = 0; i <(size-1); i++)
		divide = divide * 10;
	for (i = 0; i <size/2; i++)
	{
		if ((num / divide) == (num % 10))
			ans = 1;
		else
			return 0;
		num = num / 10;
		divide = divide / 10;
		num = num % (divide);
		divide = divide / 10;
	}
	return ans;
}
// פתרון שאלה 3
void func(int vec[20])
{
	int i,sum,countCouple=0,countOdd=0,maxThreeEven=0;
	for (i = 0; i < 20; i++)
	{
		if (vec[i] > 99 && vec[i] < 1000)
		{
			sum = ((vec[i] % 10) + (vec[i] / 100) + (vec[i] / 10) % 10);
			printf("%d\n", sum);
			if ((vec[i] % 2 == 0) && (vec[i] > maxThreeEven))
				maxThreeEven = vec[i];
		}
		if (vec[i] > 9 && vec[i] < 100)
		{
			countCouple++;
		}
		if (vec[i] % 2 == 1)
			countOdd++;

	}
	printf("%d\n", countCouple);
	printf("%d\n", countOdd);
	printf("%d", maxThreeEven);
}
