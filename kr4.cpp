#include <iostream>
#include <string>
#include <vector>

std::string LCP(const std::vector<std::string>& strings) { 
    if (strings.empty()) return "";  

    size_t lenght = strings[0].size();
    for (size_t i = 1; i < strings.size(); ++i) {
        const std::string& elem = strings[i];
        size_t j = 0;

        while (j < lenght && j < elem.size() && strings[0][j] == elem[j]) {
            ++j;
        }
        lenght = j; 
        if (lenght == 0) return "";  
    }

    return strings[0].substr(0, lenght); 
}

int main() {
    std::vector<std::string> mas;
    int n;
    std::string str;

    std::cout << "Введите количество строк:\n";
    std::cin >> n;
    std::cin.ignore();  

    for (int i = 0; i < n; ++i) {
        std::cout << "Введите строку №" << i + 1 << ":\n";
        std::getline(std::cin, str);
        mas.push_back(str);
    }

    std::string lsp = LCP(mas);
    if (lsp.empty()) { 
        std::cout << "Общего префикса нет.\n";
    } else {
        std::cout << "Наибольший общий префикс: '" << lsp << "'\n";
    }

    return 0;
}
