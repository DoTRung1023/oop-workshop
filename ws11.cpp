#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            while (std::getline(_file, line)) {
                int num = 0;
                int pass = 0;
                for(int i = 0; i<line.length(); i++){
                    if(line[i] >= '0' && line[i] <= '9'){
                        double currentNum = line[i] - '0';
                        double max = 2147483647;
                        if((max - currentNum)/10>num){
                            num *= 10;
                            num += (line[i] - '0');
                            pass++;
                        }
                        else{
                            _file.close();
                            throw("Out of range when reading the file: " + _filename);
                        }
                    }
                    else{
                        _file.close();
                        throw("Wrong argument when reading the file: " + _filename);
                    }
                }
                if(pass == line.length()){
                    records.push_back(num);
                }
            }
            _file.close();
        }
    }
};

int main() {       
    // RecordsManager receordM("test_clean.txt");
    RecordsManager receordM("test_corrupt1.txt");
    // RecordsManager receordM("test_corrupt2.txt");
    Records myRecords;
    // calculate and print out the sum
    int sum = 0;
    try{
        try{
            // reads records
            receordM.read(myRecords);
        }
        catch(string errorMessage){
            cout << "Caught an exception: \n" << errorMessage << endl;
            throw runtime_error("Something went wrong!");
        }
        for (int i = 0; i < myRecords.size(); i++) {
            if(2147483647 - sum < myRecords[i]){
                throw runtime_error("Something went wrong!");
            }
            sum += myRecords[i];
        }
        cout << sum << endl;
    } catch (exception const& e) {
        cout << "Caught an exception: \n" << e.what() << endl;
    }   
    return 0;
}