
/* ==== FUN_004b2abc @ 004b2abc ==== 
 * signature: undefined __stdcall FUN_004b2abc(undefined4 param_1, int * param_2)
 * body: 004b2abc-004b2ae7
 */

void FUN_004b2abc(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    if ((*(short *)(*(int *)(*param_2 + 0x5c) + 0x1e) == -1) && (param_2[4] != 1)) {
      param_2[3] = 0;
    }
    else {
      param_2[3] = 1;
    }
  }
  return;
}


