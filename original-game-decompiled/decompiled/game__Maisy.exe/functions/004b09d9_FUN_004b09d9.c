
/* ==== FUN_004b09d9 @ 004b09d9 ==== 
 * signature: undefined __fastcall FUN_004b09d9(int * param_1)
 * body: 004b09d9-004b0a2d
 */

void __fastcall FUN_004b09d9(int *param_1)

{
  int *piVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  
  piVar1 = param_1 + 0x12;
  iVar2 = *piVar1;
  *piVar1 = 0;
  while (param_1[0xd] != 0) {
    pCVar3 = CWnd::GetParentFrame(*(CWnd **)(param_1[0xb] + 8));
    (**(code **)(*param_1 + 0x98))(pCVar3);
    (**(code **)(*(int *)pCVar3 + 0x5c))();
  }
  *piVar1 = iVar2;
  iVar2 = *param_1;
  (**(code **)(iVar2 + 0x70))();
  if ((*piVar1 != 0) && (param_1 != (int *)0x0)) {
    (**(code **)(iVar2 + 4))(1);
  }
  return;
}


