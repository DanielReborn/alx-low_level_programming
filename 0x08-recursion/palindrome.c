// Palindrome madam <=> madam racecar <=> racecar level <=> level
// iteration <=> recursion "level"=> length => 5 str[4] end = len -1
#include<stdio.h>
#include<string.h>


int isPalindrome(char *str, int start, int end)
{
	if (start >= end)
	{
		return 1;
	} else {
		if (str[start] == str[end]){
			return isPalindrome(str, start +1, end -1);//recursive call
		} else {
			return 0; // this is not palindrome
		}
	}
}

int main()
{
	char *str = "OftheAlmighty";
	int len = strlen(str);
	int Palindrome = isPalindrome(str, 0, len -1);
	if (Palindrome)
	{
		printf("%s is a Palindrome.\n", str);
	} else {
		printf("%s is not a Palindrome.\n", str);
	}
	return 0;
}
