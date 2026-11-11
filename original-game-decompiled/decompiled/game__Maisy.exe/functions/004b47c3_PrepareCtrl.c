
/* ==== CDataExchange::PrepareCtrl @ 004b47c3 ==== 
 * signature: HWND__ * __thiscall PrepareCtrl(CDataExchange * this, int param_1)
 * body: 004b47c3-004b47f9
 * note: Library Function - Single Match  public: struct HWND__ * __thiscall CDataExchange::PrepareCtrl(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct HWND__ * __thiscall CDataExchange::PrepareCtrl(int)
   
   Library: Visual Studio 1998 Release */

HWND__ * __thiscall CDataExchange::PrepareCtrl(CDataExchange *this,int param_1)

{
  HWND__ *local_8;
  
  CWnd::GetDlgItem(*(CWnd **)(this + 4),param_1,&local_8);
  if (local_8 == (HWND__ *)0x0) {
    AfxThrowNotSupportedException();
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(HWND__ **)(this + 8) = local_8;
  return local_8;
}


