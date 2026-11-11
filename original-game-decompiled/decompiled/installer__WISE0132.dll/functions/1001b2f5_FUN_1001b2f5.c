
/* ==== FUN_1001b2f5 @ 1001b2f5 ==== 
 * signature: undefined FUN_1001b2f5(void)
 * body: 1001b2f5-1001b361
 */

int FUN_1001b2f5(uint param_1,undefined4 param_2,char *param_3,uint param_4)

{
  uint in_EAX;
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001bc10(param_1);
    iVar1 = FUN_1001b370(param_1,param_3,param_4);
    FUN_1001bc80(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return -1;
}


