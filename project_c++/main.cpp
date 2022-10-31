// C++ program to implement the program that illustrates Online shopping in ss.com
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char c1, f1;
int selectedNum;
int flag = 0;

// showMenu() is to print the menu to the user
void showMenu()
{
    cout << "\n";
    cout << "Menu\n";
    cout << "\n";
    cout << "= = = = = = = = = = = = =\n";
    cout << "1.Job and business\n";
    cout << "2.Transport\n";
    cout << "3.Real estate\n";
    cout << "4.Construction\n";
    cout << "5.Electronics\n";
    cout << "6.Clothes, footwear\n";
    cout << "7.Home\n";
    cout << "8.Production, work\n";
    cout << "9.For children\n";
    cout << "10.Animals\n";
    cout << "11.Agriculture\n";
    cout << "12.Rest, hobbies\n";
    cout << "= = = = = = = = = = = = =\n";
    cout << "\n";
}

// select_cateorie_action() connects posts in files with user by writing or reading them
void select_cateorie_action(string categorie){
    system("cls");
    cout << "\n";
    cout << "Do you wish to write or read posts?\n ";
    cout << "For write press (W/w).\n ";
    cout << "For read press (R/r).\n ";
    cout << "If no press other letter: ";
    cin >> f1;
    if (f1 == 'W' || f1 == 'w') {
        system("cls");
        string input;
        cout << "\n";
        cout << "Write the post: " << endl;
        cin >> input;
        ofstream file(categorie + ".txt");
        file << input << endl;
        file.close();
    }
    if (f1 == 'R' || f1 == 'r') {
        system("cls");
        cout << "\n";
        string line;
        ifstream file (categorie + ".txt");
        if (file.is_open()){
            while ( getline (file,line) ){
                cout << line << endl;
            }
            file.close();
        }
        else cout << "Unable to open posts";
    }
}

void showjob_and_businessMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - -- -\n";
    cout << "1.Vacancies\n";
    cout << "2.Looking for a job\n";
    cout << "3.Courses, education\n";
    cout << "4.Business contacts\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - -- -\n";
    cout << "\n";
}
void selectedjob_and_business(){
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Vacancies";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Looking_for_a_job";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Courses,_education";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Business_contacts";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showTransportMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Cars\n";
    cout << "2.Cargo cars\n";
    cout << "3.Moto transport\n";
    cout << "4.Bicycles, scooters\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedTransport(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Cars";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Cargo_cars";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Moto_transport";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Bicycles,_scooters";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showReal_EstateMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Flats\n";
    cout << "2.Houses, cottages\n";
    cout << "3.Farms, estates\n";
    cout << "4.Premises\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedReal_Estate(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showConstructionMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Building materials\n";
    cout << "2.Construction works\n";
    cout << "3.Tools and technics\n";
    cout << "4.Hire of tools and technics\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedConstruction(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Building_materials";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Construction works";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Tools and technics";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Hire_of_tools_and_technics";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showElectronicsMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Phones\n";
    cout << "2.Computers, office equipment\n";
    cout << "3.Audio, Video, DVD, SAT\n";
    cout << "4.Batteries\n";
    cout << "5.Other and repair\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedElectronics(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Phones";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Computers,_office_equipment";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Audio,_Video,_DVD,_SAT";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Batteries";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other_and_repair";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showClothes_FootwearMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Women's clothes\n";
    cout << "2.Men's clothes\n";
    cout << "3.Footwear\n";
    cout << "4.Accessories, jewelry\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedClothes_Footwear(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Women's_clothes";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Men's_clothes";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Footwear";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Accessories,_jewelry";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showHomeMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Furniture, interior\n";
    cout << "2.Jewellery, gems\n";
    cout << "3.Antiques, canvas\n";
    cout << "4.Home plants\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedHome(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Furniture,_interior";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Jewellery,_gems";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Antiques,_canvas";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Home_plants";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showProduction_WorkMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Equipment\n";
    cout << "2.Household work\n";
    cout << "3.Business contacts\n";
    cout << "4.Foodstuffs\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedProduction_Work(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Equipment";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Household_work";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Business_contacts";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Foodstuffs";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showFor_ChildrenMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.All for school\n";
    cout << "2.Children's clothing, shoes\n";
    cout << "3.Carriages\n";
    cout << "4.Accessories and food\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedFor_Children(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "All_for_school";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Children's-clothing,_shoes";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Carriages";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Accessories_and_food";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showAnimalsMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Dogs, puppies\n";
    cout << "2.Cats, kittens\n";
    cout << "3.Exotic animals\n";
    cout << "4.Veterinary medicine\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedAnimals(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Dogs,_puppies";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Cats,_kittens";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Exotic_animals";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Veterinary_medicine";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showAgricultureMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Animal husbandry\n";
    cout << "2.Agricultural works\n";
    cout << "3.Agricultural machinery\n";
    cout << "4.Seeds\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedAgriculture(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Animal_husbandry";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Agricultural_works";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Agricultural_machinery";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Seeds";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

void showRest_HobbiesMenu(){
    cout << "\n";
    cout << "- - - - - - - - - - - - - -\n";
    cout << "1.Collecting\n";
    cout << "2.Books\n";
    cout << "3.Hunting, fishing\n";
    cout << "4.Tourism\n";
    cout << "5.Other\n";
    cout << "- - - - - - - - - - - - -\n";
    cout << "\n";
}
void selectedRest_Hobbies(){
    cout << "\n";
    cout << "Do you wish to continue? " << "For yes press (Y/y), " << "if no press other letter: ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y') {
        system("cls");
        cout << "\n";
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1 || selectedNum == 2 || selectedNum == 3 || selectedNum == 4 || selectedNum == 5) {
            if (selectedNum == 1) {
                string categorie = "Collecting";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 2) {
                string categorie = "Books";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 3) {
                string categorie = "Hunting,_fishing";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 4) {
                string  categorie = "Tourism";
                select_cateorie_action(categorie);
            }
            if (selectedNum == 5) {
                string categorie = "Other";
                select_cateorie_action(categorie);
            }
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }
}

// Driver code
int main()
{
    do {
        showMenu();
        cout << "\n";
        cout << "Do you wish to continue? " << "For yes press (Y/y ), "  << "if no press other letter: ";
        char c;
        cin >> c;
        if (c == 'Y' || c == 'y') {
            cout << "\n";
            cout << "Enter respective number: ";
            int num;
            cin >> num;
            if (num == 1 || num == 2 || num == 3 || num == 4|| num == 5 || num == 6
                || num == 7 || num == 8 || num == 9 || num == 10 || num == 11 || num == 12) {
                switch (num) {
                    case 1:
                        // job and business
                        showjob_and_businessMenu();
                        selectedjob_and_business();
                        break;
                    case 2:
                        // transport
                        showTransportMenu();
                        selectedTransport();
                        break;
                    case 3:
                        // real estate
                        showReal_EstateMenu();
                        selectedReal_Estate();
                        break;
                    case 4:
                        // construction
                        showConstructionMenu();
                        selectedConstruction();
                        break;
                    case 5:
                        // electronics
                        showElectronicsMenu();
                        selectedElectronics();
                        break;
                    case 6:
                        // clothes, footwear
                        showClothes_FootwearMenu();
                        selectedClothes_Footwear();
                        break;
                    case 7:
                        // home
                        showHomeMenu();
                        selectedHome();
                        break;
                    case 8:
                        // Production, work
                        showProduction_WorkMenu();
                        selectedProduction_Work();
                        break;
                    case 9:
                        // for children
                        showFor_ChildrenMenu();
                        selectedFor_Children();
                        break;
                    case 10:
                        // animals
                        showAnimalsMenu();
                        selectedAnimals();
                        break;
                    case 11:
                        // Agriculture
                        showAgricultureMenu();
                        selectedAgriculture();
                        break;
                    case 12:
                        // rest, hobbies
                        showRest_HobbiesMenu();
                        selectedRest_Hobbies();
                        break;
                }
            }
            else {
                flag = 1;
            }
        }
        else {
            flag = 1;
        }
    } while (flag == 0);
}
