
/* ==== FUN_10012539 @ 10012539 ==== 
 * signature: int __cdecl FUN_10012539(LPCSTR param_1)
 * body: 10012539-1001254e
 */

int __cdecl FUN_10012539(LPCSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  return (DVar1 != 0xffffffff) - 1;
}


