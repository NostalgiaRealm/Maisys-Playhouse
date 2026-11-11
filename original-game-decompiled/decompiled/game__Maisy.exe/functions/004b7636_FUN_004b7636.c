
/* ==== FUN_004b7636 @ 004b7636 ==== 
 * signature: undefined __thiscall FUN_004b7636(void * this, int param_1)
 * body: 004b7636-004b76c5
 */

void __thiscall FUN_004b7636(void *this,int param_1)

{
  CMDIFrameWnd *pCVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  LPCSTR pCVar5;
  CHAR local_208 [516];
  
  pCVar1 = CMDIChildWnd::GetMDIFrame(this);
  (**(code **)(*(int *)pCVar1 + 0xe4))(param_1);
  uVar2 = CWnd::GetExStyle(this);
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = (**(code **)(*(int *)this + 0xc0))();
    if ((param_1 != 0) && (iVar3 != 0)) {
      lstrcpyA(local_208,*(LPCSTR *)(iVar3 + 0x1c));
      iVar3 = *(int *)((int)this + 0x40);
      if (0 < iVar3) {
        pCVar5 = ":%d";
        iVar4 = lstrlenA(local_208);
        wsprintfA(local_208 + iVar4,pCVar5,iVar3);
      }
      AfxSetWindowText(*(HWND__ **)((int)this + 0x1c),local_208);
    }
  }
  return;
}


