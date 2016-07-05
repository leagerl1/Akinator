#include "Akinator.h"

using namespace std;

int main(){
  Akinator ak;
  ak.insert_answer(true, "Lucas",nullptr,nullptr);
  ak.insert_answer(true, "Arielle",nullptr,nullptr);
  ak.insert_answer(true, "Aurora",nullptr,nullptr);
  ak.insert_answer(true, "Stacey",nullptr,nullptr);
  ak.insert_answer(true, "Jeffrey",nullptr,nullptr);
  ak.insert(false,"Does this person have brown hair?","Lucas","Jeffrey");
  ak.insert(false,"Does this person go to college?","Arielle","Aurora");
  ak.insert(false,"Does this person have children?","Stacey","Does this person go to college?");
  ak.insert(false,"Is this person male?","Does this person have brown hair?","Does this person have children?");
  ak.set_root("Is this person male?");
  ak.traverse();
}
