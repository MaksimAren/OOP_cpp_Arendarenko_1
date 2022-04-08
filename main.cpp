#include <iostream>
#include "Container.h"

using namespace std;

int main() {
    Container<string> container(2);
//    Container<string> container_1(3);
    
    container[0] = "a";
    container[1] = "b";
    
//    container_1[0] = "A";
//    container_1[1] = "B";
//    container_1[2] = "C";
    
    //Проверка методов
//    container.insert("test", 1);
//    container_1.insertAtBeginning("TEST");
    
//    container.erase(0);
//    container_1.eraseAtEnd();
    
//    container.loop();
    
    container.clear();
//    container.erase(0);
    container.loop();
    
//    if (container.isEmpty()) {
//        cout << "container пуст" << "\n";
//    } else {
//        cout << "container не пуст" << "\n";
//    }
    
//    container.swap(container_1);
    
//    container.reverse();
    
    for (int i = 0; i < container.getLength(); ++i) {
        cout << container[i] << "\n";
    }
//    cout << "\n";
//    
//    for (int i = 0; i < container_1.getLength(); ++i) {
//        cout << container_1[i] << "\n";
//    }
    
    return 0;
}
