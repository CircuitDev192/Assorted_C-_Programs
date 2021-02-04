#ifndef PROGRAMMING_ASSIGNMENT_3_GRASSHOPPER_H
#define PROGRAMMING_ASSIGNMENT_3_GRASSHOPPER_H

#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Declare Node Class
class node {

    friend class list;

private:
    int foodSize;
    node* next;
    node* prev;

public:
    node(int foodSize, node* next, node* prev):foodSize(foodSize), next(next), prev(prev){};
};

//Declare List Class
class list{

    friend class grasshopper;

private:
    int size;
    node *first;
    node *last;

public:
    list(){
        size = 0;
        first = nullptr;
        last = nullptr;
    };

    //Called by grasshopper.report();
    //Goes to the node specified and returns the food value inside it
    //'counter' used to tell function which node to go to.
    int outputContents(int counter){
        node *temp = first;
        if(temp->next!=nullptr)
        {
            while(counter>=2)
            {
                temp = temp->next;
                counter--;
            }
            return temp->foodSize;
        } else {
            return temp->foodSize;
        }

    }

    //Adds a node to the front of the list and sets the
    //data it holds to the size of the food it ate.
    void push(const int& foodSize){
        node* newNode = new node(foodSize, nullptr, nullptr);

        if(first==nullptr)
        {
            first = newNode;
            last = newNode;
        } else {
            newNode->next = first;
            first = newNode;
            first->next->prev = newNode;
        }
        size++;
    };

    //Can remove from either front of back of list.
    //Uses boolean 'isFirst' to check which side to remove from.

    //The return value is the size of the food that was in the node removed.
    //This way it can keep track of how much food is in the stomach when deleting.
    int pop(bool isFirst)
    {
        //If nothing is in the stomach is skips the code and returns a zero.
        if(size!=0)
        {
            if (isFirst) {
                node *temp = first;
                first = temp->next;
                int tempData = temp->foodSize;
                if(temp->next==nullptr)
                {
                    last=nullptr;
                }
                delete temp;
                if(first!=nullptr)
                {
                    first->prev = nullptr;
                }
                size--;
                return tempData;
            } else {
                node *temp = last;
                last = temp->prev;
                int tempData = temp->foodSize;
                if(temp->prev==nullptr)
                {
                    first=nullptr;
                }
                delete temp;
                if(last!=nullptr)
                {
                    last->next = nullptr;
                }
                size--;
                return tempData;
            }
        } else {
            return 0;
        }
    };

    //~list destructor traverses list and delete all nodes
    ~list(){
        while(size!=0)
        {
            pop(true);
        }
    }
};


class grasshopper {

private:
    int kind;
    int maxStomachSpace;
    int foodSizeTotal;
    list stomach;

public:
    //Constructors
    grasshopper():kind(2),maxStomachSpace(5){

    };
    grasshopper(int k):kind(k){
        if(k==1){
            maxStomachSpace = 3;
        } else if(k==2){
            maxStomachSpace = 5;
        } else {
            maxStomachSpace = 9;
        }
        foodSizeTotal = 0;
    };

    //Methods

    //Pieces together a string that reports what is in the stomach by calling
    //stomach.outputContents for each node until all nodes have been read from.
    string status(){

        string outputString = "The contents of the grasshopper's stomach is:";
        int hungry;
        //Checks the amount of food in the stomach and sets 'hungry' to reflect that.
        if(foodSizeTotal == 0)
        {
            hungry = 1;
        } else if(foodSizeTotal == maxStomachSpace)
        {
            hungry = 0;
        } else {
            hungry = 2;
        }

        int temp = foodSizeTotal;
        int outputResult;
        if(temp==0)
        {
            return "There is nothing in the grasshopper's stomach.\n";
        }
        int counter = 1;
        while(temp>0)
        {
            outputResult = stomach.outputContents(counter);
            if(counter==stomach.size && stomach.size!=1)
            {
                outputString += " and";
            }
            switch(outputResult)
            {
                case 1:
                    outputString += " Grass";
                    break;
                case 2:
                    outputString += " Seeds";
                    break;
                case 3:
                    outputString += " Bugs";
                    break;
                default:
                    break;
            }
            if(counter<stomach.size)
            {
                outputString += ",";
            }
            temp -= outputResult;
            counter++;
        }
        switch(hungry)
        {
            case 0:
                outputString += ". \nThe grasshopper is full.\n";
                break;
            case 1:
                outputString += ". \nThe grasshopper is hungry.\n";
                break;
            case 2:
                outputString += ". \nThe grasshopper is neither full nor hungry.\n";
                break;
        }

        return outputString;

    }

    //Calls stomach.push() with 'item' being whatever food is being eaten
    bool eat(int item){
        foodSizeTotal += item;
        if(foodSizeTotal > maxStomachSpace)
        {
            foodSizeTotal -= item;
            return false;
        } else {
            stomach.push(item);
            return true;
        }

    }

    //Removes food from front of stomach list and adjusts the foodSizeTotal counter
    int vomit(){
        int result = stomach.pop(true);
        foodSizeTotal -= result;
        return result;
    }
    //Removes food from back of stomach list and adjusts the foodSizeTotal counter
    int excrete(){
        int result = stomach.pop(false);
        foodSizeTotal -= result;
        return result;
    }

    //Simply deletes every node starting at the front.
    void reset(){
        while(foodSizeTotal!=0)
        {
            int result = stomach.pop(true);
            foodSizeTotal -= result;
        }
    }


};
#endif
