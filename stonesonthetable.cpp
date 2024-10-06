#include <iostream>

int main() {

    int n;
    std:: string stones;

    std:: cin >> n;
    std:: cin >> stones;

    int count = 0;
    for(int i = 0; i < n; ++i)  {
        if(stones[i] == stones[i+1]) {
            count++;
        }
    }
    
    std:: cout << count << std:: endl;
}