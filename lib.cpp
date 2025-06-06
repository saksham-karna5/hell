#include<iostream>
#include<vector>

using namespace std;


class rec {

    const vector<string> books = {
        "To Kill a Mockingbird",
        "1984",
        "The Great Gatsby",
        "Pride and Prejudice",
        "The Catcher in the Rye",
        "Moby-Dick",
        "The Lord of the Rings",
        "The Hobbit",
        "Brave New World",
        "Jane Eyre"
    };

    vector<string> book;

    public :

    void view_av_books() {
        cout<<endl;
        for (int i = 0; i < books.size(); i++) {
            cout << i+1 << ". " << books[i] << endl;
        }
        cout<<endl;
    }
    void add_book() {
        string kitab;
        bool com;
        cout<<"enter title of the book to add to your list. :";
        cin.ignore();
        getline(cin, kitab);
        for(int i=0; i<books.size(); i++) {
            if(kitab == books[i]) {
                com = true;
            }
        }
        if(com == true) {
            book.push_back(kitab);
            cout<<"book added success";
        }
        /*string BOOK;
        cout << "Enter book title to add: ";
        cin.ignore();
        getline(cin, BOOK);
        book.push_back(BOOK);
        cout << "Book added: " << BOOK << "\n";*/
    }

    void view_book() {
        if(book.empty()){
            cout<<"The shelf is empty nigga" <<endl;
        } else {
            for(int i=0; i<book.size(); i++) {
                cout<<i+1<<". "<<book[i]<<endl;
            }
            cout<<endl;
        }
    }

    /*void remove_book() {
        int index;
        cout<<"enter the index of the book you want to remove FROM YOUR LIST";
        cin>>index;
        book[index-1] = "";
        for(int i=0; i<book.size(); i++) {
            for(int j=0; j<i; j++) {
                book[i] = book[j];
            }
        }
        book.size() = book.size()-1;
        cout<<"book removed"<<endl;
    }*/

    void remove_book() {
        int index;
        cout << "Enter the index of the book you want to remove FROM YOUR LIST: ";
        cin >> index;
    
        if(index < 1 || index > book.size()) {
            cout << "Invalid index!" << endl;
            return;
        }
    
        // Remove the book at index-1
        book.erase(book.begin() + (index - 1));
        
        cout << "Book removed" << endl;
    }
    

    void search_book() {
        string name;
        bool found = false;
        cout << "Enter the name of the book you want to search: ";
        cin.ignore();
        getline(cin, name);

        for (int j = 0; j < book.size(); j++) {
            if (name == book[j]) {
                cout << "FOUND A MATCH:\n";
                cout << j + 1 << ". " << book[j] << endl << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No such book in your shelf.\n";
        }
    }

    void InPuT() {
        int choice;
        while (true) {
            cout << " o" << endl;
            cout << "o      ______/~/~/~/__           /((" << endl;
            cout << "  o  // __            ====__    /_((" << endl;
            cout << " o  //  @))       ))))      ===/__((" << endl;
            cout << "    ))           )))))))        __((" << endl;
            cout << "    \\\\     \\)     ))))    __===\\ _((" << endl;
            cout << "     \\\\_______________====      \\_((" << endl;
            cout << "                                 \\((" << endl;
            cout << "WHALE LIBS"<<endl;
            cout << "\n\n====== Library Management System ======\n";
            cout << "1. Add Book\n";
            cout << "2. View All Books\n";
            cout << "3. Search Book\n";
            cout << "4. View Avilable books.\n";
            cout << "5. Remove Book\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                add_book();
            } else if (choice == 2) {
                view_book();
            } else if (choice == 3) {
                search_book();
            }else if (choice == 4) {
                view_av_books();
            }else if (choice == 5) {
                remove_book();
            } else if (choice == 0) {
                cout << "Exiting...\n";
                break;
            } else {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
    
};

class convert_temp {
    public:
    
        void far_to_cel() {
            float fahrenheit;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            float celsius = (fahrenheit - 32) * 5 / 9;
            cout << "In Celsius: " << celsius << "°C\n";
        }
    
        void cel_to_far() {
            float celsius;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            float fahrenheit = (celsius * 9 / 5) + 32;
            cout << "In Fahrenheit: " << fahrenheit << "°F\n";
        }
    
        void cel_to_kel() {
            float celsius;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            float kelvin = celsius + 273.15;
            cout << "In Kelvin: " << kelvin << "K\n";
        }
    
        void kel_to_cel() {
            float kelvin;
            cout << "Enter temperature in Kelvin: ";
            cin >> kelvin;
            float celsius = kelvin - 273.15;
            cout << "In Celsius: " << celsius << "°C\n";
        }
    
        void far_to_kel() {
            float fahrenheit;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            float kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
            cout << "In Kelvin: " << kelvin << "K\n";
        }
    
        void kel_to_far() {
            float kelvin;
            cout << "Enter temperature in Kelvin: ";
            cin >> kelvin;
            float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
            cout << "In Fahrenheit: " << fahrenheit << "°F\n";
        }
};

int main() {
    int input;
    cout<<"Hello World!";
    rec my_res;
    convert_temp ct;
    cout<<endl;
    cout << "\n=====================\n";
    cout << "1. Temperature Converter\n";
    cout << "2. Library Management System\n";
    cout << "=====================\n";
    cout << "Enter your choice (1 or 2): ";
    cin>>input;
    switch (input)
    {
    case 1:
        int choice;
        cout << "\nTemperature Conversion Menu:\n";
        cout << "1. Fahrenheit to Celsius\n";
        cout << "2. Celsius to Fahrenheit\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Fahrenheit to Kelvin\n";
        cout << "6. Kelvin to Fahrenheit\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1: ct.far_to_cel(); break;
            case 2: ct.cel_to_far(); break;
            case 3: ct.cel_to_kel(); break;
            case 4: ct.kel_to_cel(); break;
            case 5: ct.far_to_kel(); break;
            case 6: ct.kel_to_far(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";

        }
        break;
    case 2:
        my_res.InPuT();
        break;

    default:
        break;
    }
    return 0;

}