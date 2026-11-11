
/* ==== FUN_1000fdc5 @ 1000fdc5 ==== 
 * signature: undefined FUN_1000fdc5(void)
 * body: 1000fdc5-1000fe27
 */

undefined4 FUN_1000fdc5(HANDLE param_1)

{
  HANDLE in_EAX;
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_1000fff0((uint)param_1);
    uVar1 = FUN_1000fe30(param_1);
    FUN_10010060((uint)param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}


