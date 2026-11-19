# include <iostream>
# include<unordered_map>
# include<string>
using namespace std;
class URLShortener{
    private:
    unordered_map<string,string>database;
    int id=1;
    public :
    string shortenURL(string longURL){
        string shortCode="URL"+to_string(id++);
        database[shortCode]=longURL;
        return shortCode;
    }
    string getOriginalURL(string shortCode){
        if(database.find(shortCode)==database.end()){
            return "URL not found!";
        }
        return database[shortCode];
    }
};
int main() {

    URLShortener system;
    int choice;
    while (true) {
        cout << "\n===== URL SHORTENER =====\n";
        cout << "1. Shorten URL\n";
        cout << "2. Get Original URL\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) {
            string longURL;
            cout << "Enter long URL: ";
            cin >> longURL;
            string shortURL = system.shortenURL(longURL);
            cout << "Short URL: " << shortURL << endl;
        }

        else if (choice == 2) {
            string shortURL;
            cout << "Enter short URL code: ";
            cin >> shortURL;
            cout << "Original URL: "
                 << system.getOriginalURL(shortURL) << endl;
        }
        else if (choice == 3) {
            cout << "Thank you!\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
