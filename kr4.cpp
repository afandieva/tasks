#include <vector>
#include <iostream>
template <typename T>
void Duplicate(std::vector<T>& v)
{
    v.reserve(v.size());
	for(auto it=v.begin(); it!=v.end();++it)
	{
		v.push_back(*it);
	}

}

int main()
{
	std::vector<int> v{1,2,3};
	Duplicate(v);
	
	for(const auto& el: v)
	{
		std::cout<< el << ' ';
	}
return 0;
}
