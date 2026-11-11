
/* ==== FUN_1001b2f0 @ 1001b2f0 ==== 
 * signature: undefined4 __stdcall FUN_1001b2f0(uint param_1, undefined4 param_2, undefined4 param_3)
 * body: 1001b2f0-1001b2f0
 */

int FUN_1001b2f0(uint param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  uint in_stack_00000010;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    iVar1 = FUN_1001b370(param_1,param_3,in_stack_00000010);
    FUN_1001bc80(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}


