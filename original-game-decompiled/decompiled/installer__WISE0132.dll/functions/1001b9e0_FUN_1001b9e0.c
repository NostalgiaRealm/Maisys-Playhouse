
/* ==== FUN_1001b9e0 @ 1001b9e0 ==== 
 * signature: undefined4 __stdcall FUN_1001b9e0(uint param_1)
 * body: 1001b9e0-1001b9e0
 */

undefined4 FUN_1001b9e0(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    uVar1 = FUN_1001ba50((HANDLE)param_1);
    FUN_1001bc80(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}


