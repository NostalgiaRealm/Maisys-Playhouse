
/* ==== FUN_0040bcf0 @ 0040bcf0 ==== 
 * signature: int __cdecl FUN_0040bcf0(uint param_1, int param_2)
 * body: 0040bcf0-0040bd6d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040bcf0(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_00413e00) {
    bVar1 = *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          _DAT_00413464 = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  _DAT_00413464 = 9;
  return -1;
}


