
/* ==== FUN_10006570 @ 10006570 ==== 
 * signature: undefined __cdecl FUN_10006570(LPCVOID param_1)
 * body: 10006570-10006592
 */

void __cdecl FUN_10006570(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


