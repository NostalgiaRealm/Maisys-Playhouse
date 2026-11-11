
/* ==== CWnd::ModifyStyleEx @ 004a869b ==== 
 * signature: int __stdcall ModifyStyleEx(HWND__ * param_1, ulong param_2, ulong param_3, uint param_4)
 * body: 004a869b-004a86b5
 * note: Library Function - Multiple Matches With Different Base Names  public: static int __stdcall CWnd::ModifyStyle(struct HWND__ *,unsigned long,unsigned long,unsigned int)  public: static int __stdcall CWnd::ModifyStyleEx(struct HWND__ *,unsigned long,unsigned long,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: static int __stdcall CWnd::ModifyStyle(struct HWND__ *,unsigned long,unsigned
   long,unsigned int)
    public: static int __stdcall CWnd::ModifyStyleEx(struct HWND__ *,unsigned long,unsigned
   long,unsigned int)
   
   Library: Visual Studio 1998 Release */

int CWnd::ModifyStyleEx(HWND__ *param_1,ulong param_2,ulong param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _AfxModifyStyle(param_1,-0x14,param_2,param_3,param_4);
  return iVar1;
}


