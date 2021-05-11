#include <cstring>
#include <iostream>

using namespace std;

#include "what.h"
#include "alien.h"

void doSpeak(WhatCanSpeak* obj) { 
  obj->speak();
  obj->stop();
}
void doMotion(WhatCanMotion* obj) {
  obj->motion();
  obj->stop();
}

int main()
{
  //进行有必要的注释，是程序员必备的技能
  std::string name;
  std::cin >> name;
  Alien alien(name);
  doSpeak(&alien);
  doMotion(&alien);
  return 0;
}