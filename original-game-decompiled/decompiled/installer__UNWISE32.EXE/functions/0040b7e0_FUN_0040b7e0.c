
/* ==== FUN_0040b7e0 @ 0040b7e0 ==== 
 * signature: undefined4 __cdecl FUN_0040b7e0(uint param_1)
 * body: 0040b7e0-0040b873
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b7e0(uint param_1)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00413e00) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar1) & 1) != 0) &&
       (*(int *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) != -1)) {
      if (DAT_00411054 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040b84a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040b84a:
      *(undefined4 *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) = 0xffffffff;
      return 0;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}


