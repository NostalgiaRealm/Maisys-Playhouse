
/* ==== FUN_004ab068 @ 004ab068 ==== 
 * signature: undefined4 __fastcall FUN_004ab068(CWnd * param_1)
 * body: 004ab068-004ab0e2
 */

undefined4 __fastcall FUN_004ab068(CWnd *param_1)

{
  SHORT SVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = CWnd::GetExStyle(param_1);
  if ((uVar2 & 0x40000000) == 0) {
    iVar6 = 0;
    iVar3 = FUN_004a7052();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_004a7052();
      iVar6 = (**(code **)(*piVar4 + 0x78))();
    }
    if ((((iVar6 != 0) && (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
        (SVar1 = GetKeyState(0x11), -1 < SVar1)) && (SVar1 = GetKeyState(0x12), -1 < SVar1)) {
      SendMessageA(*(HWND *)(iVar6 + 0x1c),0x111,0xe146,0);
      return 1;
    }
  }
  uVar5 = FUN_004a8882((int *)param_1);
  return uVar5;
}


