#include "Akinator.h"

using namespace std;

Akinator:: Akinator(){
  root = nullptr;
}

void Akinator:: traverse(){
    traverse_helper(root);
}

void Akinator:: traverse_helper(Node* node){
    if(ask(node)){
        node = node->yes;
        traverse_helper(node);
    }
    else{
        node = node->no;
        traverse_helper(node);
    }
}

bool Akinator:: ask(Node* node){
    if(node->yes == nullptr){
        cout << "Your person is " << node->question << endl;
        exit(0);
    }
    else{
        cout << node->question << " (Answer Yes or No): " << endl;
        string ans;
        if(cin >> ans)
            return (strcasecmp(ans.c_str(),"yes") == 0);
        else{
            cout << "Invalid input. Try again." << endl;
            ask(node);
        }
    }
}

void Akinator:: insert(bool answer, std::string question, string y, string n){
    Node* yesNode = nodeMap[y];
    Node* noNode = nodeMap[n];
    Node* newNode = new Node(answer,question,yesNode,noNode);
    nodeMap.emplace(question, newNode);
}

void Akinator:: insert_answer(bool answer, std::string question, Node* y, Node* n){
    Node* newNode = new Node(answer,question,y,n);
    nodeMap.emplace(question, newNode);
}

void Akinator::set_root(string start){
    root = nodeMap[start];
}


