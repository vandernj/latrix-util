#include "matrix_wizard.h"

int main(int argc, char **argv){
    if (argc == 2) {
        if (*argv[1] == 'i') {
            parser<int> parse = parser<int>();
            parse.printer(std::cout);
        } else if (*argv[1] == 'c') {
            parser<char> parse = parser<char>();
            parse.printer(std::cout);
        } else if (*argv[1] == 'd') {
            parser<double> parse = parser<double>();
            parse.printer(std::cout);
        }
        
    } else if (argc == 3) {
        return 3;
        //parser(argv[1]);
    } else if (argc == 4) {
        return 4;
        //parser(argv[1], argv[2]);
    } else {
        std::cout << "invalid arguments\n";
        return -1;
    }

}
