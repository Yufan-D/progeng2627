#include <iostream>
#include <vector>

int main(){
    int n, tmp, s, counter = 0;
    std::vector<int> v;

    std::cout << "please enter n:" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "please enter a number:" <<std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "please enter s:" << std::endl;
    std::cin >> s;

    for(int i = 0; i < n; i++){
        if(v[i] == s){
            counter++;
        }
    }

    std::cout << "there are " << counter << " occurrences of " << s << std::endl;
}