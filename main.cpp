//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <windows.h>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <psapi.h>
#include <string.h>
#pragma hdrstop
            using namespace std;
#include "main.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::handlesClick(TObject *Sender)
{
BitBtn1->Enabled=true;

}

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
BitBtn1->Enabled=true;
BitBtn2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{

HWND whandle = FindWindowA(NULL,Edit1->Text.c_str());
         SetWindowPos(whandle, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
SetWindowPos(this->Handle, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

}
//---------------------------------------------------------------------------
         void SetTopMost(HWND Handle) {
         SetWindowPos(Handle, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
}
void RemoveTopMost(HWND Handle) {
         SetWindowPos(Handle, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
}
HWND GetHandleByTitle(std::string Title) {
return FindWindowA(NULL,Title.c_str());
}

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 HWND whandle = FindWindowA(NULL,Edit1->Text.c_str());
         SetWindowPos(whandle, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

}
//---------------------------------------------------------------------------
