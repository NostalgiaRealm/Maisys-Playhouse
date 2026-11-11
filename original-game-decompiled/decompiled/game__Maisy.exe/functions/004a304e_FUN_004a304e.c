
/* ==== FUN_004a304e @ 004a304e ==== 
 * signature: undefined4 __thiscall FUN_004a304e(void * this, int param_1)
 * body: 004a304e-004a30eb
 */

undefined4 __thiscall FUN_004a304e(void *this,int param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  p_Var1 = AfxGetThreadState();
  iVar2 = *(int *)(p_Var1 + 0xd0);
  if (param_1 == 0) {
    if ((*(byte *)((int)this + 0x24) & 1) != 0) {
      if (*(void **)(p_Var1 + 0xd4) == this) {
        CWnd::CancelToolTips(1);
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
        _memset(&local_2c,0,0x28);
        local_24 = *(undefined4 *)((int)this + 0x1c);
        local_2c = 0x28;
        local_28 = 1;
        local_20 = local_24;
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0x405,0,(LPARAM)&local_2c);
      }
      *(byte *)((int)this + 0x24) = *(byte *)((int)this + 0x24) & 0xfe;
    }
  }
  else if ((*(byte *)((int)this + 0x24) & 1) == 0) {
    iVar2 = FUN_004bafe6();
    *(code **)(iVar2 + 4) = FUN_004a30ec;
    *(byte *)((int)this + 0x24) = *(byte *)((int)this + 0x24) | 1;
  }
  return 1;
}


