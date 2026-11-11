
/* ==== FUN_0045cec0 @ 0045cec0 ==== 
 * signature: undefined __fastcall FUN_0045cec0(int param_1)
 * body: 0045cec0-0045d049
 */

void __fastcall FUN_0045cec0(int param_1)

{
  HDC pHVar1;
  int *piVar2;
  CGdiObject *pCVar3;
  LRESULT LVar4;
  void *pvVar5;
  int iVar6;
  HGLOBAL hMem;
  LPSTR pCVar7;
  HGLOBAL hMem_00;
  short sVar8;
  char *pcVar9;
  tagTEXTMETRICA local_58;
  char *local_20;
  void *local_1c [4];
  int *local_c;
  undefined2 local_8;
  short local_6;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    pHVar1 = GetDC(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c));
    piVar2 = (int *)FUN_004b0c83(pHVar1);
    sVar8 = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x418))(local_1c);
      pCVar3 = CGdiObject::FromHandle(local_1c[0]);
      (**(code **)(*piVar2 + 0x30))(pCVar3);
      GetTextMetricsA((HDC)piVar2[2],&local_58);
      ReleaseDC(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c),(HDC)piVar2[1]);
      sVar8 = (short)local_58.tmHeight;
    }
    LVar4 = SendMessageA(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c),0xce,0,0);
    local_6 = -(sVar8 * (short)LVar4);
    local_8 = 0;
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x394))(&local_8);
    CWnd::ShowWindow(*(CWnd **)(param_1 + 0x68),0);
    local_c = *(int **)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (local_c != (int *)0x0) {
      pvVar5 = FUN_0046da90(local_c,'\x01','\x01');
      if (pvVar5 != (void *)0x0) {
        iVar6 = FUN_004a81cd(*(int *)(param_1 + 0x68));
        local_58._50_4_ = iVar6 + 1;
        hMem = FUN_0043f770(local_58._50_4_);
        if (hMem != (HGLOBAL)0x0) {
          pCVar7 = GlobalLock(hMem);
          FUN_004a81a4(*(void **)(param_1 + 0x68),pCVar7,local_58._50_4_);
          GlobalUnlock(hMem);
          hMem_00 = FUN_00412270(hMem,(SIZE_T *)&local_58.tmStruckOut,'\0');
          if (hMem_00 != (HGLOBAL)0x0) {
            local_20 = GlobalLock(hMem_00);
            FUN_00447460((int)local_c);
            pcVar9 = local_20;
            pvVar5 = FUN_0046da90(local_c,'\x01','\x01');
            FUN_00449b00(pvVar5,pcVar9);
            GlobalUnlock(hMem_00);
            FUN_0043f7a0(hMem_00);
            (**(code **)(*local_c + 0x318))();
            FUN_00447960(local_c);
          }
          FUN_0043f7a0(hMem);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}


