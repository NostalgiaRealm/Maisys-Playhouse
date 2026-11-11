
/* ==== FUN_0049f410 @ 0049f410 ==== 
 * signature: uint __cdecl FUN_0049f410(int param_1)
 * body: 0049f410-0049f43c
 */

uint __cdecl FUN_0049f410(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,0x10);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x10;
}


