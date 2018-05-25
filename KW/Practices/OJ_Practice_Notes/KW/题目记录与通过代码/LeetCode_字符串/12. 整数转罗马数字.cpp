class Solution {
public:
	string intToRoman(int num) {
		int n = 1;
		string str = "";
		while (num != 0)
		{
			if (n == 1)
			{
				if (num % 10 == 9)
				{
					str = "IX" + str;
				}
				else if (num % 10 == 4)
				{
					str = "IV" + str;
				}
				else if (num % 10 >= 5)
				{

					for (int i = 0; i < num % 10 - 5; i++)
					{
						str = "I" + str;
					}
					str = "V" + str;
				}
				else if (num % 10 < 5)
				{
					for (int i = 0; i < num % 10; i++)
					{
						str = "I" + str;
					}
				}
				num /= 10;
				n++;
			}
			else if (n == 2)
			{
				if (num % 10 == 9)
				{
					str = "XC" + str;
				}
				else if (num % 10 == 4)
				{
					str = "XL" + str;
				}
				else if (num % 10 >= 5)
				{

					for (int i = 0; i < num % 10 - 5; i++)
					{
						str = "X" + str;
					}
					str = "L" + str;
				}
				else if (num % 10 < 5)
				{
					for (int i = 0; i < num % 10; i++)
					{
						str = "X" + str;
					}
				}
				num /= 10;
				n++;
			}
			else if (n == 3)
			{
				if (num % 10 == 9)
				{
					str = "CM" + str;
				}
				else if (num % 10 == 4)
				{
					str = "CD" + str;
				}
				else if (num % 10 >= 5)
				{

					for (int i = 0; i < num % 10 - 5; i++)
					{
						str = "C" + str;
					}
					str = "D" + str;;
				}
				else if (num % 10 < 5)
				{
					for (int i = 0; i < num % 10; i++)
					{
						str = "C" + str;
					}
				}
				num /= 10;
				n++;
			}
			else if (n == 4)
			{
				for (int i = 0; i < num % 10; i++)
				{
					str = "M" + str;
				}
				num /= 10;
				n++;
			}
		}
		return str;

	}
};