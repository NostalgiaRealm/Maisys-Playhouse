
/* ==== FUN_0049f560 @ 0049f560 ==== 
 * signature: undefined4 __cdecl FUN_0049f560(int param_1)
 * body: 0049f560-0049f5a6
 */

undefined4 __cdecl FUN_0049f560(int param_1)

{
  uint uVar1;
  
  if (DAT_004de8cc < 2) {
    uVar1 = *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x103;
  }
  else {
    uVar1 = __isctype(param_1,0x103);
  }
  if ((uVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}


