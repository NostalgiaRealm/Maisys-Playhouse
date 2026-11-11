
/* ==== FUN_0049f5b0 @ 0049f5b0 ==== 
 * signature: undefined4 __cdecl FUN_0049f5b0(int param_1)
 * body: 0049f5b0-0049f5f6
 */

undefined4 __cdecl FUN_0049f5b0(int param_1)

{
  uint uVar1;
  
  if (DAT_004de8cc < 2) {
    uVar1 = *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x107;
  }
  else {
    uVar1 = __isctype(param_1,0x107);
  }
  if ((uVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}


