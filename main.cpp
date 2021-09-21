#pragma comment(lib, "Strmiids.lib")
#include <string.h>
#include "lecture.h"
void main(void)
{
    DShowPlayer* g_pPlayer = new DShowPlayer();

    // Initialize the COM library.
    HRESULT hr = CoInitialize(NULL);
    if (FAILED(hr))
    {
        printf("ERROR - Could not initialize COM library");
        return;
    }

    //IMPORTANT: Change this string to a file on your system.
    hr = g_pPlayer->OpenFile(L"Example.avi");
    
    CoUninitialize();

    return;
}
