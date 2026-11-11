
/* ==== FUN_0049f370 @ 0049f370 ==== 
 * signature: uint __cdecl FUN_0049f370(int param_1)
 * body: 0049f370-0049f39c
 */

uint __cdecl FUN_0049f370(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,4);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 4;
}


