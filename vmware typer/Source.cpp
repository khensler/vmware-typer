#include "MainForm.h"
#include <Windows.h>


using namespace vmwaretyper;
[STAThreadAttribute]
int main(){
	MainForm mf;
	mf.ShowDialog();
	return 0;
}

