
/* ==== FUN_0049f480 @ 0049f480 ==== 
 * signature: uint __cdecl FUN_0049f480(int param_1)
 * body: 0049f480-0049f4b1
 */

uint __cdecl FUN_0049f480(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,0x157);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x157;
}


