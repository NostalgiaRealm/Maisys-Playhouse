
/* ==== FUN_10018240 @ 10018240 ==== 
 * signature: uint __cdecl FUN_10018240(uint param_1)
 * body: 10018240-100182dd
 */

uint __cdecl FUN_10018240(uint param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (param_1 < 0x100) {
    if ((*(byte *)((int)&DAT_10023528 + param_1 + 1) & 0x20) == 0x20) {
      return (uint)(byte)(&DAT_10023630)[param_1];
    }
  }
  else {
    bVar2 = (byte)(param_1 >> 8);
    param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)param_1),bVar2);
    if ((*(byte *)((int)&DAT_10023528 + bVar2 + 1) & 4) != 0) {
      iVar3 = FUN_10017d00(DAT_10023734,0x200,(char *)&param_1,(LPCWSTR)0x2,(LPWSTR)local_8,2,
                           DAT_10023730,1);
      if (iVar3 != 0) {
        return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
      }
    }
  }
  return uVar1;
}


