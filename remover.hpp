/*
**
** remover.hpp created by Victor Lucas
** 
*/

#ifndef REMOVER_HPP
#define REMOVER_HPP

#include <iostream>
#include <vector>
#include <string>
#include <dirent.h>

using namespace std;

class Remover {
public:
	Remover();
	virtual	~Remover();
	virtual void setFilenamesFromDirectory();
	virtual void eraseIDAndReplaceFiles();

	/* Setters ans getters */
	virtual void setFilenames(vector<string> filenames);
	virtual void setDirectoryName(string name);
	virtual vector<string> getFilenames() const;
	virtual string getDirectoryName() const;
private:
	vector<string> 	filenames;
	string 			directoryName;
};

#endif /* REMOVER_HPP */