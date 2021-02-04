/*
 *  Student Name: Matthew Ashmore
 *  Student NetID: wma92
 *  Compiler Used: CLion with WSL
 *  Program Description:
 *      This program will test strings for palindromes
 *      and return the result.
 */

#ifndef PROGRAMMING_ASSIGNMENT_2_STACK_H
#define PROGRAMMING_ASSIGNMENT_2_STACK_H

#include <string>
#include <iostream>


class node {

    friend class Stack;

private:
    char data;
    node* below;

public:
    node():data(' '), below(nullptr){};
    node(char data, node *below):data(data), below(below){};
};



class Stack {

private:
    node *top;
    int size;

public:
    Stack():size(0), top(nullptr){};
    Stack(char data):size(1){
        node(data, nullptr);
    };

    //Adds nodes to the linked list
    void push(const char& data){
        node* newNode = new node(data,top);

        if(top==nullptr)
        {
            top = newNode;
        } else {
            newNode->below = top;
            top = newNode;
        }

        size++;

    };

    //Pops off the top node
    char pop(){
        char tempChar = top->data;
        node* temp = top;
        top = top->below;
        delete temp;
        size--;
        return tempChar;
    };

    //Uses pop() to reverse the string in the linked list
    std::string toString(){
        std::string tempString = "";

        while(size > 0)
        {
            tempString += Stack::pop();
        }
        return tempString;

    };

};

#endif //PROGRAMMING_ASSIGNMENT_2_STACK_H
