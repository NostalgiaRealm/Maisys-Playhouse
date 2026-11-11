
/* ==== FUN_0040ebd0 @ 0040ebd0 ==== 
 * signature: undefined __cdecl FUN_0040ebd0(int * param_1, int * param_2, uint param_3, int * param_4)
 * body: 0040ebd0-0040ec2b
 */

void __cdecl FUN_0040ebd0(int *param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_4;
  if (1 < (int)param_3) {
    uVar2 = param_3 >> 1;
    param_3 = param_3 + uVar2 * -2;
    do {
      if (*param_1 != iVar1) {
        *param_2 = *param_1;
      }
      if (param_1[1] != iVar1) {
        param_2[1] = param_1[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if ((param_3 != 0) && (*param_1 != iVar1)) {
    *param_2 = *param_1;
  }
  return;
}


