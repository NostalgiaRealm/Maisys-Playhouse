
/* ==== FUN_004ac852 @ 004ac852 ==== 
 * signature: undefined __fastcall FUN_004ac852(undefined4 * param_1)
 * body: 004ac852-004ac85f
 */

void __fastcall FUN_004ac852(undefined4 *param_1)

{
  if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)*param_1);
  }
  return;
}


