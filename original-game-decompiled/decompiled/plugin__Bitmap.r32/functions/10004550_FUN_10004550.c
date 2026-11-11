
/* ==== FUN_10004550 @ 10004550 ==== 
 * signature: bool __cdecl FUN_10004550(LPPRINTDLGA param_1)
 * body: 10004550-1000457c
 */

bool __cdecl FUN_10004550(LPPRINTDLGA param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  
  pHVar1 = GetActiveWindow();
  param_1->hwndOwner = pHVar1;
  param_1->Flags = 0x500;
  BVar2 = PrintDlgA(param_1);
  if (BVar2 == 0) {
    return false;
  }
  return param_1->hDevMode != (HGLOBAL)0x0;
}


