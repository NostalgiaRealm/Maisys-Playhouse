
/* ==== FUN_0045a6e0 @ 0045a6e0 ==== 
 * signature: undefined1 __thiscall FUN_0045a6e0(void * this, int param_1, undefined4 param_2, short * param_3)
 * body: 0045a6e0-0045a7f0
 */

undefined1 __thiscall FUN_0045a6e0(void *this,int param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  short *psVar2;
  short local_3c;
  undefined4 local_3a;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 1;
  if (0x514 < param_1) {
    if (param_1 == 0x641) {
      iVar1 = FUN_00470c80(DAT_004dc564);
      if ((char)iVar1 != '\0') {
        iVar1 = FUN_0045a3e0((int)this);
        FUN_00451cb0(iVar1);
        return local_5;
      }
      *(undefined1 *)((int)this + 0x87) = 1;
      return local_5;
    }
    if (param_1 != 0x70c) {
      return 0;
    }
    local_c = 0x65;
    psVar2 = &local_3c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)psVar2 = *(undefined4 *)param_3;
      param_3 = param_3 + 2;
      psVar2 = psVar2 + 2;
    }
    *psVar2 = *param_3;
    iVar1 = FUN_00414340(this,&local_3c,1);
    if ((char)iVar1 != '\0') {
      local_c = local_3a;
    }
    FUN_0044df10(*(void **)((int)this + 0x38),local_c);
    return local_5;
  }
  if (param_1 == 0x514) {
    (**(code **)(*(int *)this + 0x8c))(param_2,param_3);
    return local_5;
  }
  if (param_1 != 0x4b0) {
    return 0;
  }
  (**(code **)(*(int *)this + 0x90))(param_2,param_3);
  return local_5;
}


