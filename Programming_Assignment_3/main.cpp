/*
 *  Student Name: Matthew Ashmore
 *  Student NetID: WMA92
 *  Compiler Used: CLion w/ WSL
 *  Program Description:
 *   Program simulates a digital grasshopper that can
 *   perform multiple actions based on user input.
 */

#include "grasshopper.h"

void train(int);
grasshopper* ghPtr = nullptr;
const int GRASS = 1;
const int SEEDS = 2;
const int BUGS = 3;
int main() {

    //Initial Command Prompt
    string input = "";
    cout << "Enter a command (train, eat, excrete, vomit, report, reset, exit): " << endl;
    cin >> input;
    while(input!="exit")
    {
        if (input == "train")
        {
            int kind;
            cout << "What kind of grasshopper do you want to train?(1 = Kriket, 2 = Hopper, 3 = Lokust)" << endl;
            cin >> kind;
            if (kind == 1 || kind == 2 || kind == 3)
            {
                train(kind);
            } else {
                cout << "Invalid type." << endl;
            }
        }

        //Check to make sure ghPtr isn't null. If it is, skips over all
        //the commands and prompts the user to Train first.
        if(ghPtr!=nullptr)
        {
            //Handles eating any food type
            if (input == "eat")
            {
                int item;
                cout << "What do you want the grasshopper to eat?(1 = Grass, 2 = Seeds, 3 = Bugs)" << endl;
                cin >> item;
                if (item == GRASS || item == SEEDS || item == BUGS)
                {
                    bool wasFed = ghPtr->eat(item);
                    cout << (wasFed ? "The grasshopper was fed." : "The grasshopper was full and not fed.") << endl;
                } else {
                    cout << "Invalid type." << endl;
                }
            } else if (input == "excrete") {
                int result = ghPtr->excrete();
                switch(result)
                {
                    case 1:
                        cout << "The grasshopper excreted Grass." << endl;
                        break;
                    case 2:
                        cout << "The grasshopper excreted Seeds." << endl;
                        break;
                    case 3:
                        cout << "The grasshopper excreted Bugs." << endl;
                        break;
                    default:
                        cout << "The grasshopper's stomach was empty already." << endl;
                        break;
                }
            } else if (input == "vomit")
            {
                int result = ghPtr->vomit();
                switch(result)
                {
                    case 1:
                        cout << "The grasshopper vomited Grass." << endl;
                        break;
                    case 2:
                        cout << "The grasshopper vomited Seeds." << endl;
                        break;
                    case 3:
                        cout << "The grasshopper vomited Bugs." << endl;
                        break;
                    default:
                        cout << "The grasshopper's stomach was empty already." << endl;
                        break;
                }
            } else if (input == "report")
            {
                cout << ghPtr->status();
            } else if (input == "reset")
            {
                ghPtr->reset();
            } else {
                //Do nothing, will redisplay prompt.
            }
        } else {
            cout << "No grasshopper trained yet. Please train one to do other actions." << endl;
        }
        cout << "Enter a command (train, eat, excrete, vomit, report, reset, exit): " << endl;
        cin >> input;
    }






    return 0;
}

//Trains a grasshopper of type 'kind'.
void train(int kind){

    char input;
    cout << "This will delete your current grasshopper. Are you sure? (Y/N): " << endl;
    cin >> input;


    if(input=='Y')
    {
        //Make sure there is a grasshopper to actually delete first
        if(ghPtr!=nullptr)
        {
            delete ghPtr;
        }
        ghPtr = new grasshopper(kind);
        cout << "New grasshopper trained." << endl;
    } else if(input=='N') {
        //Do nothing except return to the main prompt.
    }
    else {
        cout << "Invalid input..." << endl;
    }

}