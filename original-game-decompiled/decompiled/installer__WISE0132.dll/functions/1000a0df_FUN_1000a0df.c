
/* ==== FUN_1000a0df @ 1000a0df ==== 
 * signature: undefined4 __stdcall FUN_1000a0df(void)
 * body: 1000a0df-1000a18d
 */

undefined4 FUN_1000a0df(void)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  undefined3 extraout_var;
  
  if ((*(byte *)(DAT_10023310 + 1) & 0x10) != 0) {
    *(int *)(DAT_10023ee8 + (uint)DAT_10023f48 * 4) = DAT_10023310;
    DAT_10023f48 = DAT_10023f48 + 1;
  }
  bVar1 = *(byte *)(DAT_10023310 + 1);
  if (((bVar1 & 0x20) == 0) || ((bVar1 & 0x10) == 0)) {
    for (pcVar3 = (char *)(DAT_10023310 + 2); *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    }
    FUN_10009f15(DAT_10023e84,(byte *)(pcVar3 + 1),0x7800);
    uVar4 = FUN_1000a18e((uint)(ushort)(short)(char)(*(byte *)(DAT_10023310 + 1) & 0xf),
                         (byte *)(DAT_10023310 + 2),DAT_10023e84);
    if (uVar4 == 0) {
      if ((*(byte *)(DAT_10023310 + 1) & 0x10) != 0) {
        DAT_10023f48 = DAT_10023f48 - 1;
      }
      if ((*(byte *)(DAT_10023310 + 1) & 0x40) != 0) {
        *(byte *)(DAT_10023310 + 1) = *(byte *)(DAT_10023310 + 1) ^ 0x60;
      }
      bVar2 = FUN_1000a082();
      if (CONCAT31(extraout_var,bVar2) != 0) {
        return 0xffffffff;
      }
    }
  }
  else {
    *(byte *)(DAT_10023310 + 1) = bVar1 ^ 0x60;
  }
  return 0;
}


