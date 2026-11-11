
/* ==== CFrameWnd::OnSetPreviewMode @ 004b971b ==== 
 * signature: void __thiscall OnSetPreviewMode(CFrameWnd * this, int param_1, CPrintPreviewState * param_2)
 * body: 004b971b-004b993b
 * note: Library Function - Single Match  public: virtual void __thiscall CFrameWnd::OnSetPreviewMode(int,struct CPrintPreviewState *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnSetPreviewMode(int,struct CPrintPreviewState *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
  undefined4 *puVar1;
  CControlBar *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  HMENU pHVar8;
  HWND hWnd;
  HWND hWnd_00;
  uint uVar9;
  HWND local_8;
  
  iVar4 = (**(code **)(*(int *)this + 0xc4))();
  if ((param_1 != 0) && (*(int **)(iVar4 + 0x68) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x68) + 0x60))(0);
  }
  uVar9 = 0;
  puVar3 = *(undefined4 **)(this + 0x70);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    pCVar2 = (CControlBar *)puVar3[2];
    uVar5 = GetDlgCtrlID(*(HWND *)(pCVar2 + 0x1c));
    uVar5 = uVar5 & 0xffff;
    puVar3 = puVar1;
    if ((0xe7ff < uVar5) && (uVar5 < 0xe820)) {
      uVar6 = 1 << ((byte)uVar5 & 0x1f);
      iVar7 = (**(code **)(*(int *)pCVar2 + 0xcc))();
      if (iVar7 != 0) {
        uVar9 = uVar9 | uVar6;
      }
      iVar7 = (**(code **)(*(int *)pCVar2 + 0xd4))();
      if ((iVar7 == 0) || (uVar5 != 0xe81f)) {
        ShowControlBar(this,pCVar2,*(uint *)(param_2 + 8) & uVar6,1);
      }
    }
  }
  *(uint *)(param_2 + 8) = uVar9;
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x9c) = 0;
    hWnd = GetDlgItem(*(HWND *)(this + 0x1c),0xea21);
    if (hWnd != (HWND)0x0) {
      hWnd_00 = GetDlgItem(*(HWND *)(this + 0x1c),0xe900);
      if (hWnd_00 != (HWND)0x0) {
        SetWindowLongA(hWnd_00,-0xc,0xea21);
      }
      SetWindowLongA(hWnd,-0xc,0xe900);
    }
    if (*(int *)(param_2 + 4) != 0) {
      InvalidateRect(*(HWND *)(this + 0x1c),(RECT *)0x0,1);
      SetMenu(*(HWND *)(this + 0x1c),*(HMENU *)(param_2 + 4));
    }
    if (*(int **)(iVar4 + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x68) + 0x60))(1);
    }
    (**(code **)(*(int *)this + 0xcc))(1);
    if (*(int *)param_2 != 0xe900) {
      hWnd = GetDlgItem(*(HWND *)(this + 0x1c),*(int *)param_2);
    }
    ShowWindow(hWnd,5);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_2 + 0x14);
    FUN_004b7fd3(this,1);
  }
  else {
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_2 + 0x10);
    FUN_004b7fd3(this,0);
    local_8 = GetDlgItem(*(HWND *)(this + 0x1c),*(int *)param_2);
    ShowWindow(local_8,0);
    pHVar8 = GetMenu(*(HWND *)(this + 0x1c));
    *(HMENU *)(param_2 + 4) = pHVar8;
    if (pHVar8 != (HMENU)0x0) {
      InvalidateRect(*(HWND *)(this + 0x1c),(RECT *)0x0,1);
      SetMenu(*(HWND *)(this + 0x1c),(HMENU)0x0);
      this[0xb8] = (CFrameWnd)((byte)this[0xb8] & 0xfe);
    }
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x48) = 0;
    LoadAccelTable(this,(char *)0x7915);
    if (*(int *)param_2 != 0xe900) {
      local_8 = GetDlgItem(*(HWND *)(this + 0x1c),0xe900);
    }
    if (local_8 != (HWND)0x0) {
      SetWindowLongA(local_8,-0xc,0xea21);
    }
  }
  return;
}


