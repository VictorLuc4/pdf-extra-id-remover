/*
**
** main.cpp created by Victor Lucas
** 
*/

#include "header.hpp"

using namespace std;

void help(){
	cout << "USAGE		./mid_remover\n\n" 
		<< "		Remove the mid in the filename for pdf files only in the current directory.\n"
		<< "		Example: filename.pdf.XXX_MID_XXX become filename.pdf.\n"
		<< endl;
	exit(0);
}

void checkHelp(int ac)
{
	if (ac == 2)
		help();
}

int main(int ac, char** av)
{
	(void)av;
	checkHelp(ac);
  	
  	Remover remover;
  	remover.setFilenamesFromDirectory();
  	remover.eraseIDAndReplaceFiles();

	return 0;
}
