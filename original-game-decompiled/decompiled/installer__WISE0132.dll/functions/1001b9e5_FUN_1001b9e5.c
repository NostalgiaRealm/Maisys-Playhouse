
/* ==== FUN_1001b9e5 @ 1001b9e5 ==== 
 * signature: undefined FUN_1001b9e5(void)
 * body: 1001b9e5-1001ba47
 */

undefined4 FUN_1001b9e5(HANDLE param_1)

{
  HANDLE in_EAX;
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < in_EAX) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_1001bc10((uint)param_1);
    uVar1 = FUN_1001ba50(param_1);
    FUN_1001bc80((uint)param_1);
    return uVar1;
  }
  pDVar2 = FUN_10018220();
  *pDVar2 = 9;
  pDVar2 = FUN_10018230();
  *pDVar2 = 0;
  return 0xffffffff;
}


