
/* ==== FUN_1001bbc0 @ 1001bbc0 ==== 
 * signature: undefined4 __cdecl FUN_1001bbc0(uint param_1)
 * body: 1001bbc0-1001bc08
 */

undefined4 __cdecl FUN_1001bbc0(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10025320) &&
     ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10025220)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10018220();
  *pDVar1 = 9;
  pDVar1 = FUN_10018230();
  *pDVar1 = 0;
  return 0xffffffff;
}


