
/* ==== CDataExchange::Fail @ 004b47fa ==== 
 * signature: void __thiscall Fail(CDataExchange * this)
 * body: 004b47fa-004b482e
 * note: Library Function - Single Match  public: void __thiscall CDataExchange::Fail(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDataExchange::Fail(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDataExchange::Fail(CDataExchange *this)

{
  if ((*(int *)this != 0) && (*(HWND *)(this + 8) != (HWND)0x0)) {
    SetFocus(*(HWND *)(this + 8));
    if (*(int *)(this + 0xc) != 0) {
      SendMessageA(*(HWND *)(this + 8),0xb1,0,-1);
    }
  }
  AfxThrowUserException();
  return;
}


