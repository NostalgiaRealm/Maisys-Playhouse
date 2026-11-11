
/* ==== FUN_1202eca0 @ 1202eca0 ==== 
 * signature: undefined4 __cdecl FUN_1202eca0(undefined4 param_1)
 * body: 1202eca0-1202ed2b
 */

undefined4 __cdecl FUN_1202eca0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  
  FUN_1202a3a0();
  uVar1 = FUN_12030840(DAT_1203abfc);
  if (uVar1 < (uint)((int)DAT_1203abf8 + (4 - (int)DAT_1203abfc))) {
    iVar2 = FUN_12030840(DAT_1203abfc);
    pvVar3 = FUN_120307d0(DAT_1203abfc,iVar2 + 0x10);
    if (pvVar3 == (LPVOID)0x0) {
      FUN_1202a3b0();
      return 0;
    }
    DAT_1203abf8 = (undefined4 *)
                   (((int)DAT_1203abf8 - (int)DAT_1203abfc & 0xfffffffcU) + (int)pvVar3);
    DAT_1203abfc = pvVar3;
  }
  *DAT_1203abf8 = param_1;
  DAT_1203abf8 = DAT_1203abf8 + 1;
  FUN_1202a3b0();
  return param_1;
}


