
/* ==== CWnd::ExecuteDlgInit @ 004ab5a2 ==== 
 * signature: int __thiscall ExecuteDlgInit(CWnd * this, void * param_1)
 * body: 004ab5a2-004ab649
 * note: Library Function - Single Match  public: int __thiscall CWnd::ExecuteDlgInit(void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::ExecuteDlgInit(void *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this,void *param_1)

{
  int iVar1;
  LRESULT LVar2;
  ushort uVar3;
  int iVar4;
  ushort *local_8;
  
  iVar4 = 1;
  if (param_1 != (void *)0x0) {
    local_8 = param_1;
    do {
      if (*local_8 == 0) break;
      uVar3 = local_8[1];
      iVar1 = *(int *)(local_8 + 2);
      if (uVar3 == 0x401) {
        uVar3 = 0x180;
      }
      else if (uVar3 == 0x403) {
        uVar3 = 0x143;
      }
      if ((uVar3 == 0x180) || (uVar3 == 0x143)) {
        LVar2 = SendDlgItemMessageA(*(HWND *)(this + 0x1c),(uint)*local_8,(uint)uVar3,0,
                                    (LPARAM)(local_8 + 4));
        if (LVar2 == -1) {
          iVar4 = 0;
        }
      }
      local_8 = (ushort *)((int)(local_8 + 4) + iVar1);
    } while (iVar4 != 0);
  }
  if (iVar4 != 0) {
    SendMessageToDescendants(*(HWND__ **)(this + 0x1c),0x364,0,0,0,0);
  }
  return iVar4;
}


