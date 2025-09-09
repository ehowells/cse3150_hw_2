#include <iostream>
#include <string>

#include "greeting_utils.h"

using std::cout, std::endl, std::string;

namespace GreetingUtils {
    std::string create_message(const std::string& name){
        return "Hello, " + name + '!';
    }

    char* format_as_c_string(const std::string& msg) {
        size_t len = msg.size();

        char* arr = new char[len + 1];
        for(size_t i = 0; i < len; ++i) {
            arr[i] = msg[i];
        }

        arr[len] = '\0';
        return arr;
    }

}