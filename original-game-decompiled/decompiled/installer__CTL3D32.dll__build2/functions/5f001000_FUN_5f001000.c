
/* ==== FUN_5f001000 @ 5f001000 ==== 
 * signature: HANDLE __cdecl FUN_5f001000(HWND param_1)
 * body: 5f001000-5f00101c
 */

HANDLE __cdecl FUN_5f001000(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 == (HWND)0x0) {
    return (HANDLE)0x0;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
  return pvVar1;
}


