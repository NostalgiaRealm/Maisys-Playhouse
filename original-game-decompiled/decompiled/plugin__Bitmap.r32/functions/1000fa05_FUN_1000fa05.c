
/* ==== FUN_1000fa05 @ 1000fa05 ==== 
 * signature: undefined FUN_1000fa05(void)
 * body: 1000fa05-1000fa71
 */

int FUN_1000fa05(uint param_1,undefined4 param_2,char *param_3,uint param_4)

{
  uint in_EAX;
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000fff0(param_1);
    iVar1 = FUN_1000fa80(param_1,param_3,param_4);
    FUN_10010060(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return -1;
}


