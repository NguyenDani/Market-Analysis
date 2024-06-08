#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

struct StockData {
    std::string datetime;
    double open;
    double high;
    double low;
    double close;
    int volume;
};

std::vector<StockData> readCSV(const std::string& filename) {
    std::vector<StockData> data;
    std::ifstream file(filename);
    std::string line, word;

    if (file.is_open()) {
        // Skip the header line
        std::getline(file, line);

        while (std::getline(file, line)) {
            std::stringstream s(line);
            StockData stockData;

            std::getline(s, stockData.datetime, ',');
            std::getline(s, word, ',');
            stockData.open = std::stod(word);
            std::getline(s, word, ',');
            stockData.high = std::stod(word);
            std::getline(s, word, ',');
            stockData.low = std::stod(word);
            std::getline(s, word, ',');
            stockData.close = std::stod(word);
            std::getline(s, word, ',');
            stockData.volume = std::stoi(word);

            data.push_back(stockData);
        }
        file.close();
    }
    return data;
}

int main() {
    std::string filename = "live_data.csv";
    std::vector<StockData> stockData = readCSV(filename);

    for (const auto& data : stockData) {
        std::cout << "Datetime: " << data.datetime 
                  << ", Open: " << data.open 
                  << ", High: " << data.high 
                  << ", Low: " << data.low 
                  << ", Close: " << data.close 
                  << ", Volume: " << data.volume 
                  << std::endl;
    }

    return 0;
}
