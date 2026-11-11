
/* ==== FUN_0043d400 @ 0043d400 ==== 
 * signature: uint __cdecl FUN_0043d400(int * param_1, int * param_2)
 * body: 0043d400-0043d425
 */

uint __cdecl FUN_0043d400(int *param_1,int *param_2)

{
  if ((((param_2[1] <= *param_1) && (*param_1 < param_2[3])) &&
      (param_1 = (int *)param_1[1], *param_2 <= (int)param_1)) && ((int)param_1 < param_2[2])) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return (uint)param_1 & 0xffffff00;
}


