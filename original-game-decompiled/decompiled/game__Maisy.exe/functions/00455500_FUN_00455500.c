
/* ==== FUN_00455500 @ 00455500 ==== 
 * signature: undefined4 __cdecl FUN_00455500(short * param_1, short * param_2)
 * body: 00455500-00455559
 */

undefined4 __cdecl FUN_00455500(short *param_1,short *param_2)

{
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x7c;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 3) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  if (*param_1 != 0x7c) {
    return 0x10000;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  param_2[6] = param_1[6];
  return 0;
}


