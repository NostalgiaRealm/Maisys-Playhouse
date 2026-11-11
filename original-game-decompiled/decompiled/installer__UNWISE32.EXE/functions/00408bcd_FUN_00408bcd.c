
/* ==== FUN_00408bcd @ 00408bcd ==== 
 * signature: int __cdecl FUN_00408bcd(LPCSTR param_1)
 * body: 00408bcd-00408be2
 */

int __cdecl FUN_00408bcd(LPCSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  return (DVar1 != 0xffffffff) - 1;
}


