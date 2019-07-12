
#include <ClassContact.hpp>

int     main(int argc, char **argv){

    if (argc == 2){
        Contact new_contact;
        new_contact.add_first_name("Gakki");
        std::cout << new_contact.get_first_name();
    }
    std::cout << endl;
    return 0;
}
