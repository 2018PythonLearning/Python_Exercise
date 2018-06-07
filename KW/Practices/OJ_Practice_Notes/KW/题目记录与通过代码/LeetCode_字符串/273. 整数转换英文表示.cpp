class Solution {
public:
	string numberToWords(int num) {
		if (num == 0)
		{
			return "Zero";
		}
		int x = 0;
		int c = 0;
		string str = "";
		if (num % 100 < 20 && num % 100 >= 10)
		{
			if (num % 100 == 10)
			{
				str = "Ten" + str;
			}
			else if (num % 100 == 11)
			{
				str = "Eleven" + str;
			}
			else if (num % 100 == 12)
			{
				str = "Twelve" + str;
			}
			else if (num % 100 == 13)
			{
				str = "Thirteen" + str;
			}
			else if (num % 100 == 14)
			{
				str = "Fourteen" + str;
			}
			else if (num % 100 == 15)
			{
				str = "Fifteen" + str;
			}
			else if (num % 100 == 16)
			{
				str = "Sixteen" + str;
			}
			else if (num % 100 == 17)
			{
				str = "Seventeen" + str;
			}
			else if (num % 100 == 18)
			{
				str = "Eighteen" + str;
			}
			else if (num % 100 == 19)
			{
				str = "Nineteen" + str;
			}
		}
		else if (num % 10 < 10)
		{
			if (num % 10 == 1)
			{
				str = "One" + str;
			}
			else if (num % 10 == 2)
			{
				str = "Two" + str;
			}
			else if (num % 10 == 3)
			{
				str = "Three" + str;
			}
			else if (num % 10 == 4)
			{
				str = "Four" + str;
			}
			else if (num % 10 == 5)
			{
				str = "Five" + str;
			}
			else if (num % 10 == 6)
			{
				str = "Six" + str;
			}
			else if (num % 10 == 7)
			{
				str = "Seven" + str;
			}
			else if (num % 10 == 8)
			{
				str = "Eight" + str;
			}
			else if (num % 10 == 9)
			{
				str = "Nine" + str;
			}
		}
		if (num % 100 < 100 && num % 100 >= 20)
		{
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			if (num % 100 >= 20 && num % 100 < 30)
			{
				str = "Twenty" + str;
			}
			else if (num % 100 >= 30 && num % 100 < 40)
			{
				str = "Thirty" + str;
			}
			else if (num % 100 >= 40 && num % 100 < 50)
			{
				str = "Forty" + str;
			}
			else if (num % 100 >= 50 && num % 100 < 60)
			{
				str = "Fifty" + str;
			}
			else if (num % 100 >= 60 && num % 100 < 70)
			{
				str = "Sixty" + str;
			}
			else if (num % 100 >= 70 && num % 100 < 80)
			{
				str = "Seventy" + str;
			}
			else if (num % 100 >= 80 && num % 100 < 90)
			{
				str = "Eighty" + str;
			}
			else if (num % 100 >= 90 && num % 100 < 100)
			{
				str = "Ninety" + str;
			}
		}
		num /= 100;
		if (num % 10 > 0)
		{
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			str = " Hundred" + str;
			if (num % 10 == 1)
			{
				str = "One" + str;
			}
			else if (num % 10 == 2)
			{
				str = "Two" + str;
			}
			else if (num % 10 == 3)
			{
				str = "Three" + str;
			}
			else if (num % 10 == 4)
			{
				str = "Four" + str;
			}
			else if (num % 10 == 5)
			{
				str = "Five" + str;
			}
			else if (num % 10 == 6)
			{
				str = "Six" + str;
			}
			else if (num % 10 == 7)
			{
				str = "Seven" + str;
			}
			else if (num % 10 == 8)
			{
				str = "Eight" + str;
			}
			else if (num % 10 == 9)
			{
				str = "Nine" + str;
			}
		}
		num /= 10;
		cout << x;
		if (num % 100 > 0 || (num > 0 && num < 1000))
		{
			x = 1;
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			str = " Thousand" + str;
			if (num % 100 < 20 && num % 100 >= 10)
			{
				if (num % 100 == 10)
				{
					str = "Ten" + str;
				}
				else if (num % 100 == 11)
				{
					str = "Eleven" + str;
				}
				else if (num % 100 == 12)
				{
					str = "Twelve" + str;
				}
				else if (num % 100 == 13)
				{
					str = "Thirteen" + str;
				}
				else if (num % 100 == 14)
				{
					str = "Fourteen" + str;
				}
				else if (num % 100 == 15)
				{
					str = "Fifteen" + str;
				}
				else if (num % 100 == 16)
				{
					str = "Sixteen" + str;
				}
				else if (num % 100 == 17)
				{
					str = "Seventeen" + str;
				}
				else if (num % 100 == 18)
				{
					str = "Eighteen" + str;
				}
				else if (num % 100 == 19)
				{
					str = "Nineteen" + str;
				}
			}
			else if (num % 10 < 10)
			{
				if (num % 10 == 1)
				{
					str = "One" + str;
				}
				else if (num % 10 == 2)
				{
					str = "Two" + str;
				}
				else if (num % 10 == 3)
				{
					str = "Three" + str;
				}
				else if (num % 10 == 4)
				{
					str = "Four" + str;
				}
				else if (num % 10 == 5)
				{
					str = "Five" + str;
				}
				else if (num % 10 == 6)
				{
					str = "Six" + str;
				}
				else if (num % 10 == 7)
				{
					str = "Seven" + str;
				}
				else if (num % 10 == 8)
				{
					str = "Eight" + str;
				}
				else if (num % 10 == 9)
				{
					str = "Nine" + str;
				}
			}
			if (num % 100 < 100 && num % 100 >= 20)
			{
				if (str[0] != ' ' && str.size() > 0)
					str = " " + str;
				if (num % 100 >= 20 && num % 100 < 30)
				{
					str = "Twenty" + str;
				}
				else if (num % 100 >= 30 && num % 100 < 40)
				{
					str = "Thirty" + str;
				}
				else if (num % 100 >= 40 && num % 100 < 50)
				{
					str = "Forty" + str;
				}
				else if (num % 100 >= 50 && num % 100 < 60)
				{
					str = "Fifty" + str;
				}
				else if (num % 100 >= 60 && num % 100 < 70)
				{
					str = "Sixty" + str;
				}
				else if (num % 100 >= 70 && num % 100 < 80)
				{
					str = "Seventy" + str;
				}
				else if (num % 100 >= 80 && num % 100 < 90)
				{
					str = "Eighty" + str;
				}
				else if (num % 100 >= 90 && num % 100 < 100)
				{
					str = "Ninety" + str;
				}
			}
		}
		num /= 100;
		if (num % 10 > 0)
		{
			if (x == 0)
			{
				if (str[0] != ' ' && str.size() > 0)
					str = " " + str;
				str = " Thousand" + str;
			}
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			str = " Hundred" + str;
			if (num % 10 == 1)
			{
				str = "One" + str;
			}
			else if (num % 10 == 2)
			{
				str = "Two" + str;
			}
			else if (num % 10 == 3)
			{
				str = "Three" + str;
			}
			else if (num % 10 == 4)
			{
				str = "Four" + str;
			}
			else if (num % 10 == 5)
			{
				str = "Five" + str;
			}
			else if (num % 10 == 6)
			{
				str = "Six" + str;
			}
			else if (num % 10 == 7)
			{
				str = "Seven" + str;
			}
			else if (num % 10 == 8)
			{
				str = "Eight" + str;
			}
			else if (num % 10 == 9)
			{
				str = "Nine" + str;
			}
		}
		num /= 10;
		if (num % 100 > 0)
		{
			c = 1;
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			str = " Million" + str;
			if (num % 100 < 20 && num % 100 >= 10)
			{
				if (num % 100 == 10)
				{
					str = "Ten" + str;
				}
				else if (num % 100 == 11)
				{
					str = "Eleven" + str;
				}
				else if (num % 100 == 12)
				{
					str = "Twelve" + str;
				}
				else if (num % 100 == 13)
				{
					str = "Thirteen" + str;
				}
				else if (num % 100 == 14)
				{
					str = "Fourteen" + str;
				}
				else if (num % 100 == 15)
				{
					str = "Fifteen" + str;
				}
				else if (num % 100 == 16)
				{
					str = "Sixteen" + str;
				}
				else if (num % 100 == 17)
				{
					str = "Seventeen" + str;
				}
				else if (num % 100 == 18)
				{
					str = "Eighteen" + str;
				}
				else if (num % 100 == 19)
				{
					str = "Nineteen" + str;
				}
			}
			else if (num % 10 < 10)
			{
				if (num % 10 == 1)
				{
					str = "One" + str;
				}
				else if (num % 10 == 2)
				{
					str = "Two" + str;
				}
				else if (num % 10 == 3)
				{
					str = "Three" + str;
				}
				else if (num % 10 == 4)
				{
					str = "Four" + str;
				}
				else if (num % 10 == 5)
				{
					str = "Five" + str;
				}
				else if (num % 10 == 6)
				{
					str = "Six" + str;
				}
				else if (num % 10 == 7)
				{
					str = "Seven" + str;
				}
				else if (num % 10 == 8)
				{
					str = "Eight" + str;
				}
				else if (num % 10 == 9)
				{
					str = "Nine" + str;
				}
			}
			if (num % 100 < 100 && num % 100 >= 20)
			{
				if (str[0] != ' ' && str.size() > 0)
					str = " " + str;
				if (num % 100 >= 20 && num % 100 < 30)
				{
					str = "Twenty" + str;
				}
				else if (num % 100 >= 30 && num % 100 < 40)
				{
					str = "Thirty" + str;
				}
				else if (num % 100 >= 40 && num % 100 < 50)
				{
					str = "Forty" + str;
				}
				else if (num % 100 >= 50 && num % 100 < 60)
				{
					str = "Fifty" + str;
				}
				else if (num % 100 >= 60 && num % 100 < 70)
				{
					str = "Sixty" + str;
				}
				else if (num % 100 >= 70 && num % 100 < 80)
				{
					str = "Seventy" + str;
				}
				else if (num % 100 >= 80 && num % 100 < 90)
				{
					str = "Eighty" + str;
				}
				else if (num % 100 >= 90 && num % 100 < 100)
				{
					str = "Ninety" + str;
				}
			}
		}
		num /= 100;
		if (num % 10 > 0)
		{
			if (c == 0)
			{
				if (str[0] != ' ' && str.size() > 0)
					str = " " + str;
				str = " Million" + str;
			}
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			str = " Hundred" + str;
			if (num % 10 == 1)
			{
				str = "One" + str;
			}
			else if (num % 10 == 2)
			{
				str = "Two" + str;
			}
			else if (num % 10 == 3)
			{
				str = "Three" + str;
			}
			else if (num % 10 == 4)
			{
				str = "Four" + str;
			}
			else if (num % 10 == 5)
			{
				str = "Five" + str;
			}
			else if (num % 10 == 6)
			{
				str = "Six" + str;
			}
			else if (num % 10 == 7)
			{
				str = "Seven" + str;
			}
			else if (num % 10 == 8)
			{
				str = "Eight" + str;
			}
			else if (num % 10 == 9)
			{
				str = "Nine" + str;
			}
		}
		num /= 10;
		if (num % 10 > 0)
		{
			if (str[0] != ' ' && str.size() > 0)
				str = " " + str;
			str = " Billion" + str;
			if (num % 10 == 1)
			{
				str = "One" + str;
			}
			else if (num % 10 == 2)
			{
				str = "Two" + str;
			}
			else if (num % 10 == 3)
			{
				str = "Three" + str;
			}
			else if (num % 10 == 4)
			{
				str = "Four" + str;
			}
			else if (num % 10 == 5)
			{
				str = "Five" + str;
			}
			else if (num % 10 == 6)
			{
				str = "Six" + str;
			}
			else if (num % 10 == 7)
			{
				str = "Seven" + str;
			}
			else if (num % 10 == 8)
			{
				str = "Eight" + str;
			}
			else if (num % 10 == 9)
			{
				str = "Nine" + str;
			}
		}
		return str;
	}
};