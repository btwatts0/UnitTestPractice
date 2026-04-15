#include "Password.h"
#include <string>
#include <vector>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
bool Password::has_mixed_case(string str)
{
  bool found = false;
  for(char c : str){
    if( !found && c >= 'A' && c <= 'Z' ){
      found = true;
    }
    else if( found && c >= 'a' && c <= 'z'){
      return true;
    }
  }
  return false;
}

unsigned int Password::unique_characters(string str)
{
  int num_unique = 0;
  bool seen = false;
  std::vector<int> diff_chars;
  for (int i = 0; i < str.size(); i ++){
    num_unique += 1;
    diff_chars.push_back(str[i]);
    seen = false;
    for (int j = 0; j < diff_chars.size(); j ++){
      if (str[i] == diff_chars[j]){
        if (!seen){
          seen = true;
        }
        else{
          diff_chars.pop_back();
          num_unique -= 1;
        }
      }
    }
  }
  return num_unique;
}