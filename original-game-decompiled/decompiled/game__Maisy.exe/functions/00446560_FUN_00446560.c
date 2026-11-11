
/* ==== FUN_00446560 @ 00446560 ==== 
 * signature: undefined4 __stdcall FUN_00446560(int param_1, int param_2)
 * body: 00446560-0044659b
 */

undefined4 FUN_00446560(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0x10000;
  }
  if (((*(char *)(param_1 + 0x17d) != '\0') && (param_2 != 0)) &&
     (*(char *)(param_2 + 0xa4) != '\0')) {
    return 0x10000;
  }
  return 0;
}


