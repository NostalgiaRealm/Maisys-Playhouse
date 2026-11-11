
/* ==== FUN_0040b880 @ 0040b880 ==== 
 * signature: undefined4 __cdecl FUN_0040b880(uint param_1)
 * body: 0040b880-0040b8c3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b880(uint param_1)

{
  if ((param_1 < DAT_00413e00) &&
     ((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00413d00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}


