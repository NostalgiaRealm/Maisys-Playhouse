
/* ==== FUN_004552e0 @ 004552e0 ==== 
 * signature: undefined4 __cdecl FUN_004552e0(short * param_1, short * param_2)
 * body: 004552e0-004553d2
 */

undefined4 __cdecl FUN_004552e0(short *param_1,short *param_2)

{
  int *this;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8c [44];
  short local_60 [24];
  short local_30 [22];
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x68;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0x3ff0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0x3ff0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
  }
  if (*param_1 == 0x68) {
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    *param_2 = *param_1;
    return 0;
  }
  if (*param_1 != 0x69) {
    return 0x10000;
  }
  this = *(int **)(param_1 + 1);
  if (this == (int *)0x0) {
    return 0x10000;
  }
  if ((*(byte *)((int)this + 0x1e) & 0x80) == 0) {
    if (this == (int *)0x0) {
      return 0x10000;
    }
    if ((*(byte *)((int)this + 0x21) & 0x20) == 0) {
      return 0x10000;
    }
    local_30[0] = 0x68;
    (**(code **)(*this + 0x98))(s_value_004d9864,local_8c,local_30);
  }
  else {
    FUN_00474bd0(this,0,local_60,0x17);
    uVar1 = FUN_004169e0(local_60,local_30,0);
    if ((char)uVar1 == '\0') {
      return 0x10000;
    }
  }
  uVar1 = FUN_004552e0(local_30,param_2);
  return uVar1;
}


