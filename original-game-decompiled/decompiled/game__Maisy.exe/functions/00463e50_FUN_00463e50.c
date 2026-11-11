
/* ==== FUN_00463e50 @ 00463e50 ==== 
 * signature: undefined4 __thiscall FUN_00463e50(void * this, int param_1, short * param_2)
 * body: 00463e50-004642c4
 */

undefined4 __thiscall FUN_00463e50(void *this,int param_1,short *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  short local_9c [24];
  short local_6c;
  char local_6a;
  undefined4 local_46;
  undefined4 local_42;
  short local_3c;
  int local_3a;
  undefined4 local_28 [4];
  undefined4 local_16;
  undefined4 local_12;
  short local_c [4];
  
  if (param_1 == 1) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = &local_3c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,&local_3c,0x10);
      if ((char)uVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x3f8))(local_3a);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 2) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = local_9c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,local_9c,1);
      if ((char)uVar2 != '\0') {
        iVar5 = *(int *)this;
        (**(code **)(iVar5 + 0x3a0))(&local_46,0);
        local_16 = local_46;
        local_12 = local_42;
        (**(code **)(iVar5 + 0x398))(local_c,0);
        local_12 = CONCAT22(local_12._2_2_,(short)local_16 + local_9c[1]);
        FUN_0043bff0(local_c,(short *)&local_46,(short *)&local_16);
        (**(code **)(iVar5 + 0x3a4))(&local_16);
        uVar3 = (**(code **)(iVar5 + 0x39c))(local_c);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 3) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = local_9c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,local_9c,1);
      if ((char)uVar2 != '\0') {
        iVar5 = *(int *)this;
        (**(code **)(iVar5 + 0x3a0))(&local_46,0);
        local_16 = local_46;
        local_12 = local_42;
        (**(code **)(iVar5 + 0x398))(local_c,0);
        local_12 = CONCAT22(local_9c[1] + local_16._2_2_,(undefined2)local_12);
        FUN_0043bff0(local_c,(short *)&local_46,(short *)&local_16);
        (**(code **)(iVar5 + 0x3a4))(&local_16);
        uVar3 = (**(code **)(iVar5 + 0x39c))(local_c);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 0x37) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = &local_3c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,&local_3c,0x1a);
      if ((char)uVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x134))(local_3a);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 0x38) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = &local_6c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,&local_6c,0x1a);
      if ((char)uVar2 != '\0') {
        FUN_00406bb0(*(void **)((int)this + 0x3a),1,this,
                     (undefined4 *)(((*(byte *)((int)this + 0x9c) & 2) == 0) - 1 & (uint)local_28));
        iVar5 = *(int *)this;
        pcVar1 = *(code **)(iVar5 + 0x424);
        (*pcVar1)(0);
        uVar3 = (**(code **)(iVar5 + 300))(local_6a == '\0');
        if ((*(byte *)((int)this + 0x9c) & 2) != 0) {
          FUN_00406bb0(*(void **)((int)this + 0x3a),0,this,local_28);
          uVar3 = (*pcVar1)(0);
        }
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 0x3a) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = &local_3c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,&local_3c,0x1a);
      if ((char)uVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x358))(local_3a,1);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 0x18) {
    uVar2 = 0;
    if ((*param_2 != 0) &&
       (((*(short *)((int)this + 0x60) != 0 || ((*(byte *)((int)this + 0x21) & 0x40) != 0)) ||
        (*(short *)((int)this + 0x22) == 0x43)))) {
      psVar6 = &local_3c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,&local_3c,1);
      if ((char)uVar2 != '\0') {
        iVar5 = *(int *)this;
        (**(code **)(iVar5 + 0x424))(0);
        piVar4 = (int *)FUN_0046ca10((int)this);
        piVar4 = FUN_0043cbd0(piVar4,local_3a);
        if (piVar4 != (int *)0x0) {
          if ((*(byte *)((int)piVar4 + 0x1e) & 4) != 0) {
            (**(code **)(*piVar4 + 0x424))(0);
          }
          uVar3 = (**(code **)(iVar5 + 0x27c))();
          (**(code **)(*piVar4 + 0x278))(uVar3);
        }
        uVar3 = (**(code **)(iVar5 + 0x278))(local_3a);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 == 4) {
    uVar2 = 0;
    if (*param_2 != 0) {
      psVar6 = &local_3c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *param_2;
      uVar2 = FUN_00414340(this,&local_3c,1);
      if ((char)uVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x34c))(local_3a);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  if (param_1 != 8) {
    uVar3 = FUN_0046b690(this,param_1,param_2);
    return uVar3;
  }
  uVar2 = 0;
  if (((*param_2 == 4) &&
      (((uVar2 = *(uint *)(param_2 + 1), uVar2 == 0 || ((*(byte *)(uVar2 + 0x21) & 1) != 0)) ||
       (uVar2 == 0)))) && (*(uint *)((int)this + 0x13e) != uVar2)) {
    *(uint *)((int)this + 0x13e) = uVar2;
    uVar3 = (**(code **)(*(int *)this + 0x314))(1);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


