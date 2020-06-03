#include<iostream>

std::string reverseString(std::string word);

int main()
{
	std::cout << "Please enter a word to reverse: " << '\n';
	std::string word;
	std::cin >> word;

	std::cout << "The word before it was reversed was: " << word << '\n';

	std::string reversed = reverseString(word);

	std::cout << "The word after it was reversed was: " << reversed << '\n';

	return 0;
}

std::string reverseString(std::string word)
{
	std::string revWord = word;
	int count = word.size() - 1;

	/*for (unsigned int i = 0; i < word.size(); ++i)
	{
		revWord[i] = word[(word.size() - 1) - i];
	}*/

	for (auto iter = word.begin(); iter != word.end(); ++iter)
	{
		revWord[count] = *iter;

		--count;
	}

	return revWord;
}