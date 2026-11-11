
/* ==== FUN_110115c0 @ 110115c0 ==== 
 * signature: undefined __cdecl FUN_110115c0(undefined4 * param_1)
 * body: 110115c0-11011604
 */

void __cdecl FUN_110115c0(undefined4 *param_1)

{
  DWORD DVar1;
  
  if (DAT_11036100 == 0) {
    DAT_11036100 = timeGetTime();
  }
  DVar1 = timeGetTime();
  if ((99 < DVar1 - DAT_11036100) || (99 < DAT_11036100 - DVar1)) {
    FUN_11011580(param_1);
    DAT_11036100 = timeGetTime();
  }
  return;
}


