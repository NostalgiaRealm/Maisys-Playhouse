
/* ==== FUN_0042f4a0 @ 0042f4a0 ==== 
 * signature: undefined4 __cdecl FUN_0042f4a0(undefined4 param_1, int * param_2, byte * param_3, byte * param_4)
 * body: 0042f4a0-0042f4de
 */

undefined4 __cdecl FUN_0042f4a0(undefined4 param_1,int *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  bool bVar2;
  
  do {
    bVar1 = *param_3;
    bVar2 = bVar1 < *param_4;
    if (bVar1 != *param_4) {
LAB_0042f4d3:
      *param_2 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
      return 0;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar2 = bVar1 < param_4[1];
    if (bVar1 != param_4[1]) goto LAB_0042f4d3;
    param_3 = param_3 + 2;
    param_4 = param_4 + 2;
  } while (bVar1 != 0);
  *param_2 = 0;
  return 0;
}


