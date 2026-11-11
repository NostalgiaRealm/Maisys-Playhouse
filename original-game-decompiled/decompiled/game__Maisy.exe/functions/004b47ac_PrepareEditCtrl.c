
/* ==== CDataExchange::PrepareEditCtrl @ 004b47ac ==== 
 * signature: HWND__ * __thiscall PrepareEditCtrl(CDataExchange * this, int param_1)
 * body: 004b47ac-004b47c2
 * note: Library Function - Single Match  public: struct HWND__ * __thiscall CDataExchange::PrepareEditCtrl(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct HWND__ * __thiscall CDataExchange::PrepareEditCtrl(int)
   
   Library: Visual Studio 1998 Release */

HWND__ * __thiscall CDataExchange::PrepareEditCtrl(CDataExchange *this,int param_1)

{
  HWND__ *pHVar1;
  
  pHVar1 = PrepareCtrl(this,param_1);
  *(undefined4 *)(this + 0xc) = 1;
  return pHVar1;
}


