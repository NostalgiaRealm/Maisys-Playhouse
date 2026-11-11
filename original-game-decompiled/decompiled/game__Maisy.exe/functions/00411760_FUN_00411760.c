
/* ==== FUN_00411760 @ 00411760 ==== 
 * signature: undefined __thiscall FUN_00411760(void * this, uint param_1, int param_2, int param_3)
 * body: 00411760-00411820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411760(void *this,uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  if ((0 < (int)param_1) && (param_2 != 0)) {
    puVar2 = (uint *)FUN_004119c0(this,param_1,param_2);
    if (param_3 == 0) {
      uVar3 = *(uint *)this;
      *(uint *)this = param_1;
    }
    else if (param_3 == -1) {
      uVar3 = *(uint *)this;
      *(uint *)((int)this + 4) = param_1;
    }
    else {
      if (param_3 < 1) {
        return;
      }
      uVar3 = FUN_00411700(this,param_3,param_2);
      if (uVar3 != 0) goto LAB_004117c7;
      uVar3 = *(uint *)this;
      *(uint *)((int)this + 4) = uVar3;
    }
    if (uVar3 != 0) {
LAB_004117c7:
      uVar1 = _DAT_00000004;
      iVar4 = FUN_004119c0(this,uVar3,param_2);
      puVar5 = (uint *)FUN_004119c0(this,uVar1,param_2);
      puVar2[1] = uVar1;
      *(uint *)(iVar4 + 4) = param_1;
      *puVar2 = uVar3;
      *puVar5 = param_1;
      return;
    }
    *puVar2 = param_1;
    puVar2[1] = param_1;
    *(uint *)this = param_1;
    *(uint *)((int)this + 4) = param_1;
  }
  return;
}


