#include <filesystem>
#include <iostream>
#include <fstream>

namespace fs = std::filesystem;
using namespace std;

// class Folder {
//     public:
//         string name;
//         Folder* next;

//         Folder() {
//             string = fs::current_path();
//             next = NULL;
//         }

//         Folder()
// };

// void append_node(Folder* filesystem,string) {
//     if (filesystem->next == NULL)
// }

string structureSplitter(string files) {
    string splitter = ";";

    size_t pos = 0;
    string token;
    while ((pos = files.find(splitter)) != string::npos) {
        token = files.substr(0,pos);
        // cout << token << endl;
        files.erase(0, pos + splitter.length());
    }
    // cout << files << endl;
    return token;
}

int main(int argc, char *argv[]) {

    string filesystem = "Footage;Footage/Sony a7III;Footage/DJI mini 2;Sound;Sound/Music;Sound/SFX";
    string test;

    test = structureSplitter(filesystem);
    cout << test;
    // cout << "CWD: " << fs::current_path() << "\n";
    // fs::create_directories(argv[1]);
    // fs::current_path(argv[1]);
    // cout << "CWD: " << fs::current_path();
    // ofstream{"test.prpoj"};
}