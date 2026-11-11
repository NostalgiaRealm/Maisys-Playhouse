
/* ==== FUN_10007c40 @ 10007c40 ==== 
 * signature: undefined __cdecl FUN_10007c40(undefined4 * param_1)
 * body: 10007c40-10007c59
 */

void __cdecl FUN_10007c40(undefined4 *param_1)

{
  if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)*param_1);
  }
  *param_1 = 0;
  return;
}


