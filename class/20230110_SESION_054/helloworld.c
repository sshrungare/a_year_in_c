#include <Windows.h>

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "kernel32.lib")

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam , LPARAM lParam);

int WINAPI WinMain(HINSTANCE HInstance , HINSTANCE hPrevInstance , LPSTR lpCmdLine , int nShowCmd)
{
    static TCHAR szClassName[] = TEXT("The Standard Window");
    static TCHAR szTitleOfWindow[]  = TEXT("Hello Windows!");

    
    HWND hwnd = NULL;
    
    WNDCLASSEX wnd;
    MSG msg;

    wnd.cbSize = sizeof(WNDCLASSEX);
    wnd.cbClsExtra = 0;
    wnd.cbWndExtra = 0;
    wnd.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wnd.hCursor = LoadCursor(NULL,IDC_ARROW);
    wnd.hIcon =LoadIcon(NULL,IDI_APPLICATION);
    wnd.hIconSm = LoadIcon(NULL , IDI_APPLICATION);
    wnd.hInstance = HInstance;
    wnd.lpfnWndProc = WndProc;
    wnd.lpszClassName = szClassName;
    wnd.lpszMenuName = NULL;
    wnd.style = CS_HREDRAW | CS_VREDRAW;

    if(!RegisterClassEx(&wnd))
    {
        MessageBox(NULL, TEXT("Failed to register windows class"),  TEXT("RegisterClassEx"), MB_ICONERROR | MB_TOPMOST);
        ExitProcess(EXIT_FAILURE);
    }

}

