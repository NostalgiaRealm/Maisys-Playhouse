
/* ==== FUN_0044fa80 @ 0044fa80 ==== 
 * signature: undefined1 __thiscall FUN_0044fa80(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 0044fa80-0044fd62
 */

undefined1 __thiscall FUN_0044fa80(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  void *pvVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  short local_6c [24];
  short local_3c [21];
  byte local_12;
  int local_c;
  char local_5;
  
  local_5 = '\x01';
  if (param_1 == 0xc9) {
    if (((*(byte *)((int)this + 0x28) & 0x20) == 0) &&
       (pvVar1 = *(void **)((int)this + 0x3a), pvVar1 != (void *)0x0)) {
      iVar4 = FUN_0046ca10((int)this);
      uVar5 = FUN_00403760(pvVar1,iVar4);
      if ((char)uVar5 != '\0') {
        local_c = *(int *)((int)this + 0x156);
        (**(code **)(**(int **)((int)this + 0x5a) + 0x228))();
        *(undefined2 *)((int)this + 0x46) = 5;
        (**(code **)(*(int *)this + 0x148))(0);
        if (*param_3 != 0) {
          psVar6 = param_3;
          psVar7 = local_6c;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
            psVar6 = psVar6 + 2;
            psVar7 = psVar7 + 2;
          }
          *psVar7 = *psVar6;
          local_12 = *(byte *)((int)this + 0x15c) & 1;
          FUN_00416070(this,this,s_range_004d9f50,local_6c,0);
          *(byte *)((int)this + 0x15c) =
               (*(byte *)((int)this + 0x15c) ^ local_12) & 1 ^ *(byte *)((int)this + 0x15c);
        }
        if ((*(byte *)((int)this + 0x15c) & 1) == 0) {
          uVar5 = *(undefined4 *)((int)this + 0x152);
        }
        else {
          uVar5 = *(undefined4 *)((int)this + 0x14e);
        }
        *(undefined4 *)((int)this + 0x156) = uVar5;
        if (*(int *)((int)this + 0x156) != local_c) {
          piVar3 = (int *)(**(code **)(*(int *)this + 0x3c0))();
          (**(code **)(*piVar3 + 0x32c))(*(undefined4 *)((int)this + 0x156));
        }
        (**(code **)(*(int *)this + 0x140))(0);
        (**(code **)(*(int *)this + 0x2d8))();
      }
    }
    goto LAB_0044fd32;
  }
  if (param_1 != 0x32f) {
    if (param_1 != 0x330) {
      local_5 = '\0';
      goto LAB_0044fd32;
    }
    if (((*(byte *)((int)this + 0x28) & 0x20) != 0) ||
       (pvVar1 = *(void **)((int)this + 0x3a), pvVar1 == (void *)0x0)) goto LAB_0044fd32;
    iVar4 = FUN_0046ca10((int)this);
    uVar5 = FUN_00403760(pvVar1,iVar4);
    if ((char)uVar5 == '\0') goto LAB_0044fd32;
    if (*(short *)((int)this + 0x46) != 3) {
      (**(code **)(**(int **)((int)this + 0x5a) + 0x228))();
      *(undefined2 *)((int)this + 0x46) = 5;
    }
    (**(code **)(*(int *)this + 0x148))(0);
    if (*param_3 != 0) {
      psVar6 = param_3;
      psVar7 = local_3c;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar7 = psVar7 + 2;
      }
      *psVar7 = *psVar6;
      iVar4 = FUN_00414340(this,local_3c,0x1d);
      if ((char)iVar4 == '\0') {
        iVar4 = FUN_00414340(this,local_3c,0x11);
        if ((char)iVar4 == '\0') goto LAB_0044fd21;
      }
      (**(code **)(*(int *)this + 0x90))(5,local_3c);
      (**(code **)(*(int *)this + 0x4a4))(*(undefined4 *)((int)this + 0x152));
    }
LAB_0044fd21:
    *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) & 0xfe;
    (**(code **)(*(int *)this + 0x2d8))();
    goto LAB_0044fd32;
  }
  if (((*(byte *)((int)this + 0x28) & 0x20) != 0) ||
     (pvVar1 = *(void **)((int)this + 0x3a), pvVar1 == (void *)0x0)) goto LAB_0044fd32;
  iVar4 = FUN_0046ca10((int)this);
  uVar5 = FUN_00403760(pvVar1,iVar4);
  if ((char)uVar5 == '\0') goto LAB_0044fd32;
  if (*(short *)((int)this + 0x46) != 3) {
    (**(code **)(**(int **)((int)this + 0x5a) + 0x228))();
    *(undefined2 *)((int)this + 0x46) = 5;
  }
  (**(code **)(*(int *)this + 0x148))(0);
  if (*param_3 != 0) {
    psVar6 = param_3;
    psVar7 = local_3c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      psVar7 = psVar7 + 2;
    }
    *psVar7 = *psVar6;
    iVar4 = FUN_00414340(this,local_3c,0x1d);
    if ((char)iVar4 == '\0') {
      iVar4 = FUN_00414340(this,local_3c,0x11);
      if ((char)iVar4 == '\0') goto LAB_0044fc61;
    }
    (**(code **)(*(int *)this + 0x90))(5,local_3c);
    (**(code **)(*(int *)this + 0x4a4))(*(undefined4 *)((int)this + 0x14e));
  }
LAB_0044fc61:
  *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) | 1;
  (**(code **)(*(int *)this + 0x2d8))();
LAB_0044fd32:
  if (local_5 == '\0') {
    uVar2 = FUN_00462d50(this,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}


