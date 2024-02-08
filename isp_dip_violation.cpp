#include <iostream>
#include <vector>

// ISP Violation
class DataProcessor
{
public:
    virtual void process(const std::vector<std::string> &data) = 0;
    virtual ~DataProcessor() = default;
};

class Logger
{
    virtual void log(const std::string &message) = 0;
};

class CSVProcessor : public DataProcessor,
                     public Logger
{
public:
    void process(const std::vector<std::string> &data) override
    {
        std::cout << "Processing CSV data:" << std::endl;
        for (const std::string &entry : data)
        {
            std::cout << "Record: " << entry << std::endl;
        }
    }

    void log(const std::string &message) override
    {
        std::cout << "Logging: " << message << std::endl;
    }
};

class JSONProcessor : public DataProcessor
{
public:
    void process(const std::vector<std::string> &data) override
    {
        std::cout << "Processing JSON data:" << std::endl;
        for (const std::string &entry : data)
        {
            std::cout << "Record: " << entry << std::endl;
        }
    }
};

class DataManager
{
private:
    DataProcessor *dataProcessor;

public:
    DataManager(DataProcessor *dataProcessor)
        : dataProcessor(dataProcessor) {}

    void manageData(const std::vector<std::string> &data)
    {
        std::cout << "Managing  data:" << std::endl;
        dataProcessor->process(data);
    }
};

int main()
{
    CSVProcessor csvProcessor;
    JSONProcessor jsonProcessor;

    DataManager csvdataManager(&csvProcessor);
    DataManager jsondataManager(&jsonProcessor);

    std::vector<std::string> csvData = {"1,John,Doe", "2,Jane,Smith", "3,Bob,Johnson"};
    std::vector<std::string> jsonData = {
        R"({"id": 1, "first_name": "John", "last_name": "Doe"})",
        R"({"id": 2, "first_name": "Jane", "last_name": "Smith"})",
        R"({"id": 3, "first_name": "Bob", "last_name": "Johnson"})"};

    csvdataManager.manageData(csvData);
    jsondataManager.manageData(jsonData);

    return 0;
}
