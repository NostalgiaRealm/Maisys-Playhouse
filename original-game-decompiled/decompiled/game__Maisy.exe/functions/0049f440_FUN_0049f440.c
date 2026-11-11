
/* ==== FUN_0049f440 @ 0049f440 ==== 
 * signature: uint __cdecl FUN_0049f440(int param_1)
 * body: 0049f440-0049f471
 */

uint __cdecl FUN_0049f440(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004de8cc) {
    uVar1 = __isctype(param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 0x107;
}


