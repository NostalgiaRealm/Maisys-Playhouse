
/* ==== FUN_00462d10 @ 00462d10 ==== 
 * signature: undefined4 __cdecl FUN_00462d10(short * param_1, undefined4 param_2)
 * body: 00462d10-00462d26
 */

undefined4 __cdecl FUN_00462d10(short *param_1,undefined4 param_2)

{
  if (*param_1 == 1) {
    return *(undefined4 *)(param_1 + 1);
  }
  return param_2;
}


