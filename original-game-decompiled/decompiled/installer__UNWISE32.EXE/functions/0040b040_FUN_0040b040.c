
/* ==== FUN_0040b040 @ 0040b040 ==== 
 * signature: undefined __cdecl FUN_0040b040(uint param_1)
 * body: 0040b040-0040b0a6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040b040(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  DAT_00413468 = param_1;
  iVar2 = 0;
  puVar1 = &DAT_00411058;
  do {
    if (param_1 == *puVar1) {
      _DAT_00413464 = *(undefined4 *)(iVar2 * 8 + 0x41105c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_004111c0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_00413464 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_00413464 = 8, 0xca < param_1)) {
    _DAT_00413464 = 0x16;
  }
  return;
}


