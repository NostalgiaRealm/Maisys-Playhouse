
/* ==== FUN_1000ff93 @ 1000ff93 ==== 
 * signature: undefined FUN_1000ff93(void)
 * body: 1000ff93-1000ff9f
 */

undefined4 FUN_1000ff93(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10018500) &&
     ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000f540();
  *pDVar1 = 9;
  pDVar1 = FUN_1000f550();
  *pDVar1 = 0;
  return 0xffffffff;
}


