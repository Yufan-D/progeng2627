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

    if(counter == 0){
        std::cout << "there are no occurrences of " << s << std::endl;
    }
    
    else{
        std::cout << "there are " << counter << " occurrences of " << s << " at indices:" << std::endl;

        for(int i = 0; i < n; i++){
            if(v[i] == s){
                std::cout << i << std::endl;
            }
        }
    }

}