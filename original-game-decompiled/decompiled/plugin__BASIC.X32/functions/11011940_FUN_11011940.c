
/* ==== FUN_11011940 @ 11011940 ==== 
 * signature: undefined __cdecl FUN_11011940(short * param_1, short * param_2)
 * body: 11011940-11011973
 */

void __cdecl FUN_11011940(short *param_1,short *param_2)

{
  if ((param_1 != (short *)0x0) && (*param_1 == 0x1c)) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if ((param_2 != (short *)0x0) && ((*param_2 == 6 || (*param_2 == 1)))) {
    param_2[3] = 0;
    param_2[4] = 0;
  }
  return;
}


