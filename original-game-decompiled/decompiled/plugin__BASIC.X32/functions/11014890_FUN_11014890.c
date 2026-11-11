
/* ==== FUN_11014890 @ 11014890 ==== 
 * signature: undefined4 __cdecl FUN_11014890(undefined4 param_1, undefined4 param_2, short * param_3, int * param_4)
 * body: 11014890-110148aa
 */

undefined4 __cdecl FUN_11014890(undefined4 param_1,undefined4 param_2,short *param_3,int *param_4)

{
  if ((*param_3 == 0x191) && (param_3[3] == 0x1d)) {
    *param_4 = *param_4 + 1;
    param_3 = (short *)param_4;
  }
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


