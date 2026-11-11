
/* ==== FUN_12004800 @ 12004800 ==== 
 * signature: uint __cdecl FUN_12004800(int param_1)
 * body: 12004800-12004818
 */

uint __cdecl FUN_12004800(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x6e));
  return -(uint)(BVar1 == 0) & 0xa0000;
}


