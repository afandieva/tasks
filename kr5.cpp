#include <iostream>
#include <string>
#include <deque>

void doTrain(std::deque<int>& vagon)
{
	std::string command;
	int value;
	
	while(true){
		std::cout << " ";
		std::cin >> command;
		
		if(command=="+l"){
			std::cin >> value;
			vagon.push_front(value);
		} else if(command == "+r"){
			std::cin>>value;
			vagon.push_back(value);
		} else if(command == "-l"){
			std::cin >> value;
			vagon.pop_front();
		} else if(command == "-r"){
			std::cin>>value;
			vagon.pop_back();
		}
		else if(command == "exit"){
			break;
		}
	
  }
 
}
int main()
{
	std::deque<int> vagon {10,5,7};
	doTrain(vagon);
	std::cout<<"";
	for(int el:vagon)
	{
		std::cout<<el<<' ';
	}
	return 0;
}

