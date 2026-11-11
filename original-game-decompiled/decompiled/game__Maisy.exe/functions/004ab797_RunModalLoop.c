
/* ==== CWnd::RunModalLoop @ 004ab797 ==== 
 * signature: int __thiscall RunModalLoop(CWnd * this, ulong param_1)
 * body: 004ab797-004ab8f4
 * note: Library Function - Single Match  public: int __thiscall CWnd::RunModalLoop(unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::RunModalLoop(unsigned long)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  HWND hWnd;
  int iVar4;
  LPMSG lpMsg;
  BOOL BVar5;
  LRESULT LVar6;
  int *piVar7;
  int iVar8;
  int local_c;
  
  local_c = 0;
  bVar1 = true;
  bVar2 = true;
  if (((param_1 & 4) == 0) || (uVar3 = GetExStyle(this), (uVar3 & 0x10000000) != 0)) {
    bVar1 = false;
  }
  hWnd = GetParent(*(HWND *)(this + 0x1c));
  this[0x24] = (CWnd)((byte)this[0x24] | 0x18);
  iVar4 = FUN_004a7052();
  lpMsg = (LPMSG)(iVar4 + 0x30);
  do {
    if (bVar2) {
      do {
        BVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0);
        if (BVar5 != 0) break;
        if (bVar1) {
          bVar1 = false;
          ShowWindow(this,1);
          UpdateWindow(*(HWND *)(this + 0x1c));
        }
        if ((((param_1 & 1) == 0) && (hWnd != (HWND)0x0)) && (local_c == 0)) {
          SendMessageA(hWnd,0x121,0,*(LPARAM *)(this + 0x1c));
        }
        if ((param_1 & 2) == 0) {
          iVar8 = local_c + 1;
          LVar6 = SendMessageA(*(HWND *)(this + 0x1c),0x36a,0,local_c);
          local_c = iVar8;
          if (LVar6 == 0) goto LAB_004ab853;
        }
        else {
LAB_004ab853:
          bVar2 = false;
        }
      } while (bVar2);
    }
    do {
      piVar7 = (int *)FUN_004a7052();
      iVar8 = (**(code **)(*piVar7 + 0x60))();
      if (iVar8 == 0) {
        FUN_004bd490(0);
        return -1;
      }
      if ((bVar1) && ((*(int *)(iVar4 + 0x34) == 0x118 || (*(int *)(iVar4 + 0x34) == 0x104)))) {
        bVar1 = false;
        ShowWindow(this,1);
        UpdateWindow(*(HWND *)(this + 0x1c));
      }
      iVar8 = (**(code **)(*(int *)this + 0x74))();
      if (iVar8 == 0) {
        this[0x24] = (CWnd)((byte)this[0x24] & 0xe7);
        return *(int *)(this + 0x2c);
      }
      piVar7 = (int *)FUN_004a7052();
      iVar8 = (**(code **)(*piVar7 + 0x68))(lpMsg);
      if (iVar8 != 0) {
        bVar2 = true;
        local_c = 0;
      }
      BVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0);
    } while (BVar5 != 0);
  } while( true );
}


