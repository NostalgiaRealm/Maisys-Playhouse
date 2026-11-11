
/* ==== FUN_10013e57 @ 10013e57 ==== 
 * signature: undefined __cdecl FUN_10013e57(SIZE_T param_1, undefined4 * param_2)
 * body: 10013e57-10013e70
 */

void __cdecl FUN_10013e57(SIZE_T param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(2,param_1);
  *param_2 = hMem;
  GlobalLock(hMem);
  return;
}


