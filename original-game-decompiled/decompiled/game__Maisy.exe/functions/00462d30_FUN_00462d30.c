
/* ==== FUN_00462d30 @ 00462d30 ==== 
 * signature: short __cdecl FUN_00462d30(short param_1, short param_2)
 * body: 00462d30-00462d4f
 */

short __cdecl FUN_00462d30(short param_1,short param_2)

{
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  return param_2;
}


