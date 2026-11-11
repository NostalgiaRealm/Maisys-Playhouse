
/* ==== FUN_004b3e36 @ 004b3e36 ==== 
 * signature: int __thiscall FUN_004b3e36(void * this, void * param_1, uint param_2)
 * body: 004b3e36-004b3f4d
 */

int __thiscall FUN_004b3e36(void *this,void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x28) - (int)*(void **)((int)this + 0x24);
    if (param_2 <= uVar3) {
      uVar3 = param_2;
    }
    FID_conflict__memcpy(param_1,*(void **)((int)this + 0x24),uVar3);
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar3;
    param_1 = (void *)((int)param_1 + uVar3);
    uVar3 = param_2 - uVar3;
    if (uVar3 != 0) {
      iVar4 = 0;
      iVar1 = uVar3 - uVar3 % *(uint *)((int)this + 0x1c);
      local_8 = iVar1;
      do {
        iVar2 = (**(code **)(**(int **)((int)this + 0x20) + 0x3c))(param_1,local_8);
        iVar4 = iVar4 + iVar2;
        param_1 = (void *)((int)param_1 + iVar2);
        local_8 = local_8 - iVar2;
        if (iVar2 == 0) break;
      } while (local_8 != 0);
      uVar3 = uVar3 - iVar4;
      if (iVar4 == iVar1) {
        if (*(int *)((int)this + 8) == 0) {
          local_8 = *(uint *)((int)this + 0x1c);
          if (*(uint *)((int)this + 0x1c) <= uVar3) {
            local_8 = uVar3;
          }
          uVar5 = 0;
          local_c = *(int *)((int)this + 0x2c);
          do {
            iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x3c))(local_c,local_8);
            uVar5 = uVar5 + iVar1;
            local_c = local_c + iVar1;
            local_8 = local_8 - iVar1;
            if ((iVar1 == 0) || (local_8 == 0)) break;
          } while (uVar5 < uVar3);
          *(int *)((int)this + 0x24) = *(int *)((int)this + 0x2c);
          *(uint *)((int)this + 0x28) = *(int *)((int)this + 0x2c) + uVar5;
        }
        else {
          (**(code **)(**(int **)((int)this + 0x20) + 0x58))
                    (0,*(undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x2c),
                     (int)this + 0x28);
          *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x2c);
        }
        uVar5 = *(int *)((int)this + 0x28) - (int)*(void **)((int)this + 0x24);
        if (uVar3 <= uVar5) {
          uVar5 = uVar3;
        }
        uVar3 = uVar3 - uVar5;
        FID_conflict__memcpy(param_1,*(void **)((int)this + 0x24),uVar5);
        *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar5;
      }
    }
    iVar1 = param_2 - uVar3;
  }
  return iVar1;
}


