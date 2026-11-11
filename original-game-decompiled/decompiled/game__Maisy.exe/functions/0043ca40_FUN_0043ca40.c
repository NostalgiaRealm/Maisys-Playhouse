
/* ==== FUN_0043ca40 @ 0043ca40 ==== 
 * signature: undefined __cdecl FUN_0043ca40(int * param_1, void * param_2)
 * body: 0043ca40-0043ca81
 */

void __cdecl FUN_0043ca40(int *param_1,void *param_2)

{
  FUN_00430640((int)param_2);
  if (((((short)param_1[0x18] != 0) || ((*(byte *)((int)param_1 + 0x21) & 0x40) != 0)) ||
      (*(short *)((int)param_1 + 0x22) == 0x43)) && ((*(byte *)(param_1 + 0x12) & 2) != 0)) {
    FUN_004306b0(param_2,param_1);
  }
  FUN_0043c8e0(param_1,param_2);
  return;
}


