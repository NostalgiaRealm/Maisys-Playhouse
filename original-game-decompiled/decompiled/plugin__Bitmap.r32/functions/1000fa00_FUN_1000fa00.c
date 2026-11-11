
/* ==== FUN_1000fa00 @ 1000fa00 ==== 
 * signature: undefined4 __stdcall FUN_1000fa00(uint param_1, undefined4 param_2, undefined4 param_3)
 * body: 1000fa00-1000fa00
 */

int FUN_1000fa00(uint param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  uint in_stack_00000010;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000fff0(param_1);
    iVar1 = FUN_1000fa80(param_1,param_3,in_stack_00000010);
    FUN_10010060(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}


