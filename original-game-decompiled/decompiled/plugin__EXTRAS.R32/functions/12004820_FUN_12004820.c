
/* ==== FUN_12004820 @ 12004820 ==== 
 * signature: uint __cdecl FUN_12004820(int param_1, DWORD * param_2)
 * body: 12004820-12004841
 */

uint __cdecl FUN_12004820(int param_1,DWORD *param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 0x6e),(LPDWORD)0x0);
  *param_2 = DVar1;
  return -(uint)(DVar1 == 0xffffffff) & 0xa0000;
}


