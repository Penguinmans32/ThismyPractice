#include <iostream>
#include <unordered_map>
int main()  {

    //how to learn set or unordered_map in c++

    std:: unordered_map<std:: string, int> mp;

    mp["hello"] = 1;
    mp["world"] = 2;
    mp["cherry"] = 3;

    std:: cout << "Hello: " << mp["hello"] << std:: endl;

    if(mp.find("world") != mp.end()) {
        std:: cout << "The world is in the map" << std:: endl;
    }

    for(const auto& pair : mp) {
        std:: cout << pair.first << ": " << pair.second << std:: endl;
    }

    return 0;
}