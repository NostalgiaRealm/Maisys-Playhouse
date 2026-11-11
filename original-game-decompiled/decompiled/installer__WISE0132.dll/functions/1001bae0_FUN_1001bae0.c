
/* ==== FUN_1001bae0 @ 1001bae0 ==== 
 * signature: undefined __stdcall FUN_1001bae0(undefined4 * param_1)
 * body: 1001bae0-1001bae0
 */

void FUN_1001bae0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10015a50((undefined *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


