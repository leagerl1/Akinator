#include <iostream>
#include <string>
#include <strings.h>
#include <unordered_map>

class Akinator{
 private:
 
    struct Node{
      bool answer;
      std:: string question;
      Node* yes;
      Node* no;
      
      Node(bool a, std::string q, Node* y, Node* n) : answer(a),question(q),yes(y),no(n){}
    };

    Node* root;
    
    std::unordered_map<std::string,Node*> nodeMap;
    
    void traverse_helper(Node* root);
 
 public:

    Akinator();

    bool ask(Node* root);

    void traverse();
    
    void insert_answer(bool answer, std::string question, Node* y, Node* n);

    void insert(bool answer, std::string question, std::string y, std::string n);
    
    void set_root(std::string start);
};
