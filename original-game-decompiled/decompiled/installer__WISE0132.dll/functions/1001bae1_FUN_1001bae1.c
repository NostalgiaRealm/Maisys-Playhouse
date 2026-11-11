
/* ==== FUN_1001bae1 @ 1001bae1 ==== 
 * signature: undefined FUN_1001bae1(void)
 * body: 1001bae1-1001bb12
 */

void FUN_1001bae1(undefined4 param_1,undefined4 *param_2)

{
  if (((param_2[3] & 0x83) != 0) && ((param_2[3] & 8) != 0)) {
    FUN_10015a50((undefined *)param_2[2]);
    param_2[3] = param_2[3] & 0xfffffbf7;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  return;
}


