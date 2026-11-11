
/* ==== FUN_1000fec1 @ 1000fec1 ==== 
 * signature: undefined FUN_1000fec1(void)
 * body: 1000fec1-1000fef2
 */

void FUN_1000fec1(undefined4 param_1,undefined4 *param_2)

{
  if (((param_2[3] & 0x83) != 0) && ((param_2[3] & 8) != 0)) {
    FUN_1000bff0((undefined *)param_2[2]);
    param_2[3] = param_2[3] & 0xfffffbf7;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  return;
}


