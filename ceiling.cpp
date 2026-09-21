#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
#include <stdexcept>

class DataFrame {
private:
    std::unordered_map<std::string, std::vector<double>> data;

public:
    
    DataFrame(const std::unordered_map<std::string, std::vector<double>>& input_data) 
        : data(input_data) {}

    
    DataFrame& ceil_op(const std::string& col, const std::string& target_col = "") {
        
        if (data.find(col) == data.end()) {
            throw std::runtime_error("Error: Column '" + col + "' does not exist.");
        }

        
        std::string target = target_col.empty() ? col + "_ceil" : target_col;
        
        
        std::vector<double> result;
        for (double val : data[col]) {
            result.push_back(std::ceil(val));
        }
        
        
        data[target] = result;
        return *this;
    }


    void print() const {
        for (const auto& pair : data) {
            std::cout << pair.first << ": [ ";
            for (double val : pair.second) {
                std::cout << val << " ";
            }
            std::cout << "]\n";
        }
    }
};

int main() {

    DataFrame df({
        {"scores", {-3.5, 0.0, 2.1, 4.9}}
    });

    
    df.ceil_op("scores");

    df.print();

    return 0;
}
