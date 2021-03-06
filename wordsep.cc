#include "wordsep.h"

#include <cstring>

// SO http://stackoverflow.com/questions/5607589/right-way-to-split-an-stdstring-into-a-vectorstring
// Given a space-separated string, returns the individual words
set<string> split(const string &s) {
  set<string> res;
  // Cast to char* to avoid a warning
  char* cs = (char*) s.c_str();
  char* curr = strtok(cs, " ,");
  while (curr != nullptr) {
    res.insert(curr);
    curr = strtok(nullptr, " ,");
  }
  return res;
}
