
/* ==== FUN_11020e70 @ 11020e70 ==== 
 * signature: uint __cdecl FUN_11020e70(undefined4 * param_1, short * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 11020e70-11020ec8
 */

uint __cdecl
FUN_11020e70(undefined4 *param_1,short *param_2,short *param_3,undefined4 param_4,
            undefined2 *param_5)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 local_30 [12];
  
  uVar1 = in_EAX & 0xffff0000;
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 3)) {
    do {
      iVar2 = iVar2 + 1;
      FUN_11021170(param_1,param_2,local_30,iVar2);
      uVar1 = FUN_11020f90(param_4,local_30,param_1,param_3,(short *)local_30,param_4,param_5);
      if ((short)uVar1 != 0) {
        return uVar1;
      }
    } while (iVar2 < *(int *)(param_2 + 3));
  }
  return uVar1;
}


