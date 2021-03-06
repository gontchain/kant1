// build_ppdl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
#include <iosfwd>
#include <filesystem>
#include <list>

#ifndef LINUX
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif
#include<iostream>

using namespace std;

std::string GetCurrentWorkingDir(void) {
  char buff[FILENAME_MAX];
  GetCurrentDir(buff, FILENAME_MAX);
  std::string current_working_dir(buff);
  return current_working_dir;
}

std::string read_file(std::string file_name)
{
  ifstream inFile;
  inFile.open(file_name);//open the input file
  if(!inFile.is_open())
    return string("");
  else
  {
    string line;
    string file("");
    while (getline(inFile,line))
    {
      file += line + string("\n");
    }
    return file;
  }

}

inline bool file_exist(const std::string& name) {
  ifstream f(name.c_str());
  return f.good();
}

string get_init_dir(string curr, string top)
{
  
  return string("");
}

int main(int argc, char** argv)
{
  string file_name("arcdb1.txt.txt");
  string top_dir = string(argv[1]);
  string cur_dir = GetCurrentWorkingDir();
  string ppdl_text("");
  ofstream res_file;
  list<string> dirs;

  cout << "top dir:" << top_dir << endl;
  cout << "cur dir:" << cur_dir << endl;
  if (cur_dir.find(top_dir)!=0)
  {
    cout << "error: top dir " << top_dir << " is not a top for current dir";
    exit(-1);
  }
 
  ppdl_text = string("Device ") + string("nnn") + 
  string("\n{\n\
  Reg int32 pc, \"pc\";\n\
  MemSpace prog_bus, 32, 32;\n\
  ISET Main\n  {\n");
  // get list of directories from bottom dir to collect instructions from the ppdl description
  while(cur_dir != top_dir)
  {
    string tmp;
    int pos = cur_dir.find_last_of("/\\");
    if(pos == string::npos)
      break; // error, top dir is incorrect
    tmp = cur_dir.substr(0,pos);
    cur_dir = tmp;
    cout << "iteration dir:" << tmp  << endl;
    dirs.push_back(cur_dir);
  }

  // collect text of ppdl descriptions
  for (list<string>::iterator dir = dirs.begin(); dir != dirs.end(); ++dir)
  {
    string full_file_name = *dir + string("\\") + file_name;
    ppdl_text = ppdl_text + read_file(full_file_name);
  }
  // write result to file
  res_file.open("res_vm.hdl",ios::out | ios::binary);
  res_file << ppdl_text << endl << "  }\n}\n";
  res_file.close();
  // success
  return 0;
}

