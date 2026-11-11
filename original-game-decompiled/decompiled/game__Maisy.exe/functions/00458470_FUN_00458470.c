
/* ==== FUN_00458470 @ 00458470 ==== 
 * signature: undefined __fastcall FUN_00458470(undefined4 * param_1)
 * body: 00458470-00458492
 */

void __fastcall FUN_00458470(undefined4 *param_1)

{
  if ((HLOCAL)*param_1 != (HLOCAL)0x0) {
    if (param_1[1] != 0) {
      LocalUnlock((HLOCAL)*param_1);
    }
    FUN_0043f720((HLOCAL)*param_1);
  }
  return;
}


