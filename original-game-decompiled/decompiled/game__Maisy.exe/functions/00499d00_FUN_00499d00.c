
/* ==== FUN_00499d00 @ 00499d00 ==== 
 * signature: int __cdecl FUN_00499d00(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 00499d00-00499de1
 */

int __cdecl
FUN_00499d00(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  tm local_24;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    return -1;
  }
  iVar2 = *(int *)(&DAT_004df0d4 + param_2 * 4) + param_3;
  if (((uVar3 & 3) == 0) && (2 < param_2)) {
    iVar2 = iVar2 + 1;
  }
  ___tzset();
  local_24.tm_mon = param_2 + -1;
  local_24.tm_hour = param_4;
  iVar1 = ((param_4 + ((param_1 - 0x76dU & 0xfffffffc) + (uVar3 * 0x16d + iVar2) * 4) * 6) * 0x3c +
          param_5) * 0x3c + param_6 + 0x7c558180 + DAT_004dee70;
  if (param_7 != 1) {
    if (param_7 != -1) {
      return iVar1;
    }
    if (DAT_004dee74 == 0) {
      return iVar1;
    }
    local_24.tm_year = uVar3;
    local_24.tm_yday = iVar2;
    iVar2 = __isindst(&local_24);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return iVar1 + DAT_004dee78;
}


