
/* ==== FUN_0041d130 @ 0041d130 ==== 
 * signature: undefined __fastcall FUN_0041d130(int * param_1)
 * body: 0041d130-0041d1d6
 */

void __fastcall FUN_0041d130(int *param_1)

{
  int iVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 4) & 0x10) == 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0xf2) != '\0') {
    return;
  }
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x15c))(0xe);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(iVar1 + 0xec))();
    if (cVar2 != '\0') {
      (**(code **)(iVar1 + 0x19c))();
    }
    FUN_0041cca0(param_1,DAT_004da388);
    if ((param_1[0x43] == 0) && (*(int *)((int)param_1 + 0x15a) != param_1[0x1e]))
    goto LAB_0041d1c6;
  }
  else {
    if ((HGLOBAL)param_1[0x43] == (HGLOBAL)0x0) goto LAB_0041d1c6;
    GlobalUnlock((HGLOBAL)param_1[0x43]);
    *(undefined1 *)((int)param_1 + 0xf2) = 1;
    if ((param_1[0x43] == 0) && (*(int *)((int)param_1 + 0x15a) != param_1[0x44]))
    goto LAB_0041d1c6;
  }
  *(byte *)((int)param_1 + 0x15e) = *(byte *)((int)param_1 + 0x15e) | 2;
LAB_0041d1c6:
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xef;
  *(undefined4 *)((int)param_1 + 0x156) = 0;
  return;
}


