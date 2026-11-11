
/* ==== FUN_12023720 @ 12023720 ==== 
 * signature: undefined __cdecl FUN_12023720(int param_1, short param_2, undefined4 param_3, int param_4, undefined4 param_5)
 * body: 12023720-12023766
 */

void __cdecl
FUN_12023720(int param_1,short param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  short local_2c [22];
  
  local_2c[0] = param_2;
  if (0 < param_4) {
    do {
      FUN_12019290(param_1,local_2c);
      FUN_12018a40(param_5,local_2c);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


