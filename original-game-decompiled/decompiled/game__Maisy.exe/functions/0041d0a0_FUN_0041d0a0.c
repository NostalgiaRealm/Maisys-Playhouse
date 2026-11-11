
/* ==== FUN_0041d0a0 @ 0041d0a0 ==== 
 * signature: undefined __fastcall FUN_0041d0a0(int * param_1)
 * body: 0041d0a0-0041d125
 */

void __fastcall FUN_0041d0a0(int *param_1)

{
  int iVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 4) & 0x10) != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xef;
    iVar1 = *param_1;
    cVar2 = (**(code **)(iVar1 + 0x15c))(0xe);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(iVar1 + 0xec))();
      if (cVar2 != '\0') {
        (**(code **)(iVar1 + 0x19c))();
      }
      if (*(int *)((int)param_1 + 0x152) != 0) {
        (**(code **)(iVar1 + 0x1d4))();
      }
    }
    else if (((HGLOBAL)param_1[0x43] != (HGLOBAL)0x0) && (*(char *)((int)param_1 + 0xf2) == '\0')) {
      GlobalUnlock((HGLOBAL)param_1[0x43]);
      *(undefined4 *)((int)param_1 + 0x156) = 0;
      FUN_0043f7a0((HGLOBAL)param_1[0x43]);
      param_1[0x43] = 0;
      return;
    }
  }
  return;
}


