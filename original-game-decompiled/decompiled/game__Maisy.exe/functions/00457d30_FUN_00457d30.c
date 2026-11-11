
/* ==== FUN_00457d30 @ 00457d30 ==== 
 * signature: int __cdecl FUN_00457d30(short * param_1, HLOCAL param_2, SIZE_T * param_3, int * param_4)
 * body: 00457d30-00457f4d
 */

/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_00457d30(short *param_1,HLOCAL param_2,SIZE_T *param_3,int *param_4)

{
  int *this;
  undefined4 uVar1;
  int iVar2;
  char local_164 [256];
  short local_64 [2];
  char *local_60;
  short local_34 [7];
  char *local_26;
  int local_8;
  
  local_8 = 0;
  switch(*param_1) {
  case 0:
    FUN_00457c80(param_2,&local_8,param_3,&DAT_004d99e4);
    return 0;
  default:
    return 0x60002;
  case 0x66:
    FUN_00457c80(param_2,&local_8,param_3,*(char **)(param_1 + 7));
    return 0;
  case 0x69:
  case 0x73:
    break;
  }
  FUN_004537b0(param_1,param_4);
  this = *(int **)(param_1 + 1);
  if ((this == (int *)0x0) || ((*(byte *)((int)this + 0x1e) & 0x80) == 0)) {
    if (this != (int *)0x0) {
      if ((*(byte *)((int)this + 0x21) & 0x20) != 0) {
        local_64[1] = 0;
        local_34[0] = 0x66;
        local_34[1] = -1;
        local_34[2] = -1;
        local_34[3] = 0;
        local_34[4] = 0;
        local_34[5] = 0;
        local_34[6] = 0;
        local_26 = (char *)0x0;
        iVar2 = (**(code **)(*this + 0x98))(s_value_004d9864,local_64 + 1,local_34);
        if ((iVar2 == 0) &&
           (FUN_00457c80(param_2,&local_8,param_3,local_26), local_26 != (char *)0x0)) {
          FUN_0043ba20(local_26);
        }
        return iVar2;
      }
      if ((this != (int *)0x0) && (*(short *)((int)this + 0x22) == 0x51)) {
        iVar2 = FUN_00457af0(this,0,param_2,&local_8,param_3);
        return iVar2;
      }
    }
    return 0x10000;
  }
  local_64[0] = 0x17;
  FUN_00474bd0(this,0,local_64,0x17);
  if (local_64[0] == 0xd) {
    FUN_00457c80(param_2,&local_8,param_3,local_60);
    if (local_60 != (char *)0x0) {
      FUN_0043ba20(local_60);
    }
    return 0;
  }
  uVar1 = FUN_004169e0(local_64,local_34,0);
  if ((char)uVar1 != '\0') {
    if (local_34[0] == 0x66) {
      FUN_00457c80(param_2,&local_8,param_3,local_26);
      return 0;
    }
    iVar2 = FUN_00456560(local_34,local_164,0x100,(int *)0x0);
    if (iVar2 == 0) {
      FUN_00457c80(param_2,&local_8,param_3,local_164);
    }
    return iVar2;
  }
  return 0x60002;
}


