/*
	@AUTHOR: Swapnil Shrungare
	@DATE: 17TH NOV 2022
	@GOAL: TO DISPLAY GREETINGS MESSAGEBOX
*/

#include <Windows.h> 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	MessageBox(NULL, TEXT("Greetings!"), TEXT("Masterclass in C Batch 3!"), MB_OK);
	return (0);
}