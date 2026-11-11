
/* ==== FUN_0049f310 @ 0049f310 ==== 
 * signature: uint __cdecl FUN_0049f310(int param_1)
 * body: 0049f310-0049f33c
 */

uint __cdecl FUN_0049f310(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,1);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 1;
}


