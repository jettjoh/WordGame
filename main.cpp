#include <iostream>
#include <string>
using namespace std;


void up1 ()
{
    bool armor = false;
    cout << "You went up the staircase and found a room. You see a chest and a door, what do you want to do?" << endl;
    cout << "Your decision (chest, door): ";
    string updecision1;
    cin >> updecision1;
    if (updecision1 == "chest")
    { cout << "You chose to open the chest. You found armor. This could be useful." << endl; armor = true;}
    else if (updecision1 == "door") {armor = false;}
        cout << "You went through the door." << endl;
        cout << "You have entered the boss room!" << endl;
        cout << "Will you fight or run?" << endl;
        cout << "(fight, run): ";
        string fightorrun;
        cin  >> fightorrun;
        if (fightorrun == "fight")
        {
        if (armor == true) { cout << "You had armor so the boss only took 20hp away from you!" << endl; }
        else if (armor == false) { cout << "You didn't have armor so the boss killed you!" << endl; exit(1);}
        }
    if (fightorrun == "run") { cout << "You tripped and fell into a trap on your way out and died. Try again" << endl; exit(1);}
        cout << "You enter another room, there's a door and a suspicious object. Your decision, young warrior." << endl;
            cout << "(object, door): ";
            string updecision2;
            cin >> updecision2;
    if (updecision2 == "door") { cout << "You won." << endl; exit(1); }
            else if (updecision2 == "object") { cout << "You lost. Try again." << endl; exit(1); }
    
}
void down1 ()
{
    cout << "You went down the stairs into the dungeon. You can examine the prison cells or leave to the next room." << endl;
    cout << "What do you want to do? (examine, leave): ";
    string examine;
    cin >> examine;
    bool hasarmor = false;
    
    if (examine == "examine") { cout << "You searched the prison cells and found armor." << endl; hasarmor = true;}
    else if (examine == "leave") { cout << "You left to the next room." << endl; hasarmor = false;}
    cout << "You left the prison cells and entered the boss room! What do you want to do?" << endl;
    cout << "(fight, run): ";
    string fightorrun;
    cin >> fightorrun;
    if (fightorrun == "fight")
    {
        if (hasarmor == true) { cout << "You chose to fight the boss, and because you had armor, you survived!" << endl; }
        else if (hasarmor == false) { cout << "You died beceause you didn't have any armor!" << endl; exit(1); }
    }
    if (fightorrun == "run") { cout << "You tripped on a booby trap and got killed. Try again." << endl; exit(1);}
    cout << "You enter another room. It has a door and an object." << endl;
    cout << "What would you like to do? (object, door): ";
    string objectdoor;
    cin >> objectdoor;
    if (objectdoor == "object") { cout << "You touched the object which activated a booby trap and killed you. Try again" << endl; exit(1); }
    else if (objectdoor == "door") { cout << "You safely left the building and won." << endl; exit(1); }
    
}






int main() {
    
    cout << "Welcome to my beta wordgame" << endl;
    cout << "You have two paths, up or down. You choose." << endl;
    cout << "Your decision: ";
    string upordown;
    cin >> upordown;
    
    if (upordown == "up") { cout << "You chose up." << endl; up1();}
    if (upordown == "down") { cout << "You chose down." << endl; down1();}
    
    
    return 0;
}
