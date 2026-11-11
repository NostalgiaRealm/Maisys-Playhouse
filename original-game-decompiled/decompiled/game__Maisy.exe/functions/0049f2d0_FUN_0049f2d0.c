
/* ==== FUN_0049f2d0 @ 0049f2d0 ==== 
 * signature: uint __cdecl FUN_0049f2d0(int param_1)
 * body: 0049f2d0-0049f301
 */

uint __cdecl FUN_0049f2d0(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,0x103);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x103;
}


