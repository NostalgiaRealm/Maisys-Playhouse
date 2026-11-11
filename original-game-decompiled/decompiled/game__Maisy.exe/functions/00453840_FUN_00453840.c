
/* ==== FUN_00453840 @ 00453840 ==== 
 * signature: undefined4 __cdecl FUN_00453840(short * param_1, undefined4 * param_2, int * param_3)
 * body: 00453840-0045391d
 */

undefined4 __cdecl FUN_00453840(short *param_1,undefined4 *param_2,int *param_3)

{
  int *this;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short local_34 [24];
  
  FUN_004537b0(param_1,param_3);
  if (*param_1 == 0x69) {
    *(undefined2 *)param_2 = 0x69;
    *(undefined4 *)((int)param_2 + 6) = 0;
    *(undefined4 *)((int)param_2 + 10) = 0;
    *(undefined4 *)((int)param_2 + 2) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((int)param_2 + 0xe) = 0;
    return 0;
  }
  if (*param_1 != 0x73) {
    return 0x10000;
  }
  this = *(int **)(param_1 + 1);
  if (this != (int *)0x0) {
    if (*(short *)((int)this + 0x22) == 0x51) {
      puVar3 = param_2;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)((int)param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 6) = 0;
      return 0;
    }
    if (this == (int *)0x0) {
      return 0x10000;
    }
    if ((*(byte *)((int)this + 0x1e) & 0x80) != 0) {
      local_34[0] = 0x17;
      FUN_00474bd0(this,0,local_34,0x17);
      uVar1 = FUN_004169e0(local_34,(undefined2 *)param_2,0xffffffff);
      if ((char)uVar1 == '\0') {
        return 0x10000;
      }
      return 0;
    }
  }
  if ((this != (int *)0x0) && ((*(byte *)((int)this + 0x21) & 0x20) != 0)) {
    uVar1 = (**(code **)(*this + 0x98))(s_value_004d9864,0,param_2);
    return uVar1;
  }
  return 0x10000;
}


