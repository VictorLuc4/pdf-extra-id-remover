/*
**
** remover.cpp created by Victor Lucas
** 
*/

#include "remover.hpp"

Remover::Remover()
{
}

Remover::~Remover()
{
}

void Remover::setFilenamesFromDirectory()
{
	DIR *dir;
  	struct dirent *ent;
  	if ((dir = opendir (".")) != NULL) {
	    while ((ent = readdir (dir)) != NULL) {
	      	this->filenames.push_back(ent->d_name);	
	    }
	    closedir (dir);
	  }	
}

void Remover::eraseIDAndReplaceFiles()
{
	int pos;
  	string tmp, com;

	for (int i = 1; i < (int)this->filenames.size(); i++){
		tmp = this->filenames[i];
		pos = this->filenames[i].find(".pdf");
		if (pos > 0){
			this->filenames[i].erase(pos + 4, this->filenames[i].size());
		    com = "mv ./" + tmp + " ./" + this->filenames[i];
		    cout << "Replacing ./" + tmp + "  by ./" + this->filenames[i] << endl;
	      	system(com.c_str());
	    }
	}
}

	/* Setters ans getters */
void Remover::setFilenames(vector<string> filenames)
{
	this->filenames = filenames;
}

void Remover::setDirectoryName(string name)
{
	this->directoryName = name;
}

vector<string> Remover::getFilenames() const
{
	return this->filenames;
}

string Remover::getDirectoryName() const
{
	return this->directoryName;	
}