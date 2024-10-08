#include <set>
#include <string>
#include <unordered_set>
#include <iostream>
#include <unordered_map>

int main()
{
	std::unordered_set<std::string> words;
	std::set<std::string> duplicate_words;
	std::string word;
	
	std::unordered_map<std::string,int> lubof{
		{"love",0},
		{"lovely",0},
		{"honey",0}
	};
	
	while(std::cin>>word)
	{
		if(){
			count++;
		}
		if(words.contains(word))
		{
			duplicate_words.insert(word);
		}
		else
		{
			words.insert(word);
		}
		
	}
    std::cout << " " << count << '\n';
    
	return 0;

}
