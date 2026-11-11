
/* ==== FUN_0040b730 @ 0040b730 ==== 
 * signature: undefined4 __cdecl FUN_0040b730(uint param_1, HANDLE param_2)
 * body: 0040b730-0040b7d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b730(uint param_1,HANDLE param_2)

{
  int iVar1;
  
  if (param_1 < DAT_00413e00) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_00411054 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(DAT_00413d00 + 8) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(DAT_00413d00 + 0x10) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}


