
/* ==== CWnd::ModifyStyle @ 004a8630 ==== 
 * signature: int __stdcall ModifyStyle(HWND__ * param_1, ulong param_2, ulong param_3, uint param_4)
 * body: 004a8630-004a864a
 * note: Library Function - Single Match  public: static int __stdcall CWnd::ModifyStyle(struct HWND__ *,unsigned long,unsigned long,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static int __stdcall CWnd::ModifyStyle(struct HWND__ *,unsigned long,unsigned
   long,unsigned int)
   
   Library: Visual Studio 1998 Release */

int CWnd::ModifyStyle(HWND__ *param_1,ulong param_2,ulong param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _AfxModifyStyle(param_1,-0x10,param_2,param_3,param_4);
  return iVar1;
}


