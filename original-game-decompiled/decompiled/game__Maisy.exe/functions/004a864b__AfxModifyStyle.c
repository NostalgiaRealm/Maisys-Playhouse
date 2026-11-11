
/* ==== _AfxModifyStyle @ 004a864b ==== 
 * signature: int __stdcall _AfxModifyStyle(HWND__ * param_1, int param_2, ulong param_3, ulong param_4, uint param_5)
 * body: 004a864b-004a869a
 * note: Library Function - Single Match  int __stdcall _AfxModifyStyle(struct HWND__ *,int,unsigned long,unsigned long,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall _AfxModifyStyle(struct HWND__ *,int,unsigned long,unsigned long,unsigned int)
   
   Library: Visual Studio 1998 Release */

int _AfxModifyStyle(HWND__ *param_1,int param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint dwNewLong;
  
  uVar1 = GetWindowLongA(param_1,param_2);
  dwNewLong = ~param_3 & uVar1 | param_4;
  if (dwNewLong == uVar1) {
    iVar2 = 0;
  }
  else {
    SetWindowLongA(param_1,param_2,dwNewLong);
    if (param_5 != 0) {
      SetWindowPos(param_1,(HWND)0x0,0,0,0,0,param_5 | 0x17);
    }
    iVar2 = 1;
  }
  return iVar2;
}


