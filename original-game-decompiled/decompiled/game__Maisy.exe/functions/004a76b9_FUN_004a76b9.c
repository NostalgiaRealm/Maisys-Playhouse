
/* ==== FUN_004a76b9 @ 004a76b9 ==== 
 * signature: undefined4 __thiscall FUN_004a76b9(void * this, int param_1, tagMSG * param_2)
 * body: 004a76b9-004a7849
 */

undefined4 __thiscall FUN_004a76b9(void *this,int param_1,tagMSG *param_2)

{
  CWnd *this_00;
  CFrameWnd *this_01;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_24 [7];
  _AFX_THREAD_STATE *local_8;
  
  if (param_2 != (tagMSG *)0x0) {
    if (param_1 != 0) {
      if (param_1 != 2) {
        return 0;
      }
      this_00 = CWnd::FromHandle(param_2->hwnd);
      if ((((this_00 != (CWnd *)0x0) &&
           (this_01 = CWnd::GetTopLevelFrame(this_00), this_01 != (CFrameWnd *)0x0)) &&
          (iVar1 = CFrameWnd::IsTracking(this_01), iVar1 != 0)) && (*(int *)(this_01 + 0x50) != 0))
      {
        iVar1 = FUN_004a7052();
        iVar2 = 0;
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_004a7052();
          iVar2 = (**(code **)(*piVar3 + 0x78))();
        }
        if ((*(int *)((int)this + 0x1c) != 0) &&
           (((param_2->message == 0x100 && (param_2->wParam == 0xd)) || (param_2->message == 0x202))
           )) {
          SendMessageA(*(HWND *)(iVar2 + 0x1c),0x111,0xe146,0);
          return 1;
        }
      }
    }
    iVar2 = 0;
    iVar1 = FUN_004a7052();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_004a7052();
      iVar2 = (**(code **)(*piVar3 + 0x78))();
    }
    if (((DAT_004e51f0 < 0x333) && (iVar2 != 0)) && (iVar1 = IsHelpKey(param_2), iVar1 != 0)) {
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x111,0xe146,0);
      return 1;
    }
    if ((((param_1 == 0) && (*(int *)((int)this + 0x20) != 0)) && (0xff < param_2->message)) &&
       ((param_2->message < 0x109 && (local_8 = AfxGetThreadState(), *(int *)(local_8 + 0xc0) == 0))
       )) {
      *(undefined4 *)(local_8 + 0xc0) = 1;
      puVar4 = local_24;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = param_2->hwnd;
        param_2 = (tagMSG *)&param_2->message;
        puVar4 = puVar4 + 1;
      }
      iVar1 = CWnd::IsWindowEnabled(*(CWnd **)((int)this + 0x20));
      if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)this + 0x5c))(local_24), iVar1 != 0)) {
        *(undefined4 *)(local_8 + 0xc0) = 0;
        return 1;
      }
      *(undefined4 *)(local_8 + 0xc0) = 0;
    }
  }
  return 0;
}


