#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

template <typename T>
class parser {
    public:
        parser(){
            matrix.resize(1);
            std::string line;
            std::size_t row = 0;
            T i;
            while (std::getline(std::cin, line)) {
                if (row == matrix.size()) {
                    matrix.resize(row+1);
                }
                std::stringstream ss(line);
                while (ss >> i) {
                    matrix[row].push_back(i);
                }
                ++row;
            }
        }
        parser(std::string infile);
        parser(std::string infile, std::string outfile);

        void printer(std::ostream &out){
            out << "\\begin{bmatrix}\n";
            for (auto vec : matrix) {
                for (auto entry : vec) {
                    out << entry << " & ";
                }
                out << "\\\\\n";
            }
            out << "\\end{bmatrix}\n";
        }
    private:
        std::vector<std::vector<T> > matrix;
};
