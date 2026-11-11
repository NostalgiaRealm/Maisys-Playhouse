
/* ==== FUN_0049f4c0 @ 0049f4c0 ==== 
 * signature: uint __cdecl FUN_0049f4c0(int param_1)
 * body: 0049f4c0-0049f4f1
 */

uint __cdecl FUN_0049f4c0(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,0x117);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x117;
}


