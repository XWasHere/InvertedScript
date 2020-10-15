#include <iostream>
#include <string.h>

using namespace std;

void showHelp() {
cout << "Usage: InvertedScript [-h | -s (script)]" << endl;
}

void runFile(char*) {

}

void runPrompt() {

}
int main(int argc, char* argv[]) {
if (_stricmp(argv[1], "-h") == 0) {
showHelp(); //show the help thing
return 0;
} else if (_stricmp(argv[1], "/h") == 0) {
cout << "I understand your confusion fellow Windows user, But please start command line flags UNIX style, for example you could type -h to get help" << endl;
} else if (_stricmp(argv[1], "-s") == 0) {
runFile(argv[1]);
} else {
runPrompt();
}
}
