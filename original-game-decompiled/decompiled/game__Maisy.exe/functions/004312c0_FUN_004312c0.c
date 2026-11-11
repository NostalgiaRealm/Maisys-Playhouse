
/* ==== FUN_004312c0 @ 004312c0 ==== 
 * signature: undefined __thiscall FUN_004312c0(void * this, int * param_1)
 * body: 004312c0-00431433
 */

void __thiscall FUN_004312c0(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_8;
  
  (**(code **)(*(int *)this + 0x114))();
  FUN_00428380((int)this);
  if (*(char *)((int)this + 0xf8) == '\0') {
    cVar1 = (**(code **)(*(int *)this + 0xec))();
    if (cVar1 != '\0') {
      if (*(int *)((int)this + 0xce) == 0) {
        uVar5 = 0;
        if (*(char *)((int)param_1 + 0x26) != '\0') {
          uVar5 = *(uint *)((int)param_1 + 0x1e);
        }
        local_8 = *(int *)((int)this + 0xbc);
      }
      else {
        uVar5 = 0;
        if (*(char *)((int)param_1 + 0x26) != '\0') {
          uVar5 = (*(uint *)((int)param_1 + 0x1e) == 0) - 1 & *(uint *)((int)param_1 + 0x1e);
        }
        local_8 = *(int *)((int)this + 0xd2) - *(int *)((int)this + 0xce);
      }
      if (*param_1 == 0) {
        iVar2 = FUN_00444670();
        *param_1 = iVar2;
        (**(code **)(*(int *)this + 0x1f0))(param_1);
      }
      iVar2 = *param_1;
      if (iVar2 != 0) {
        if (*(int *)((int)this + 0xb8) == 0) {
          *(int *)(iVar2 + 0x10) = *(int *)((int)this + 0xce) + *(int *)((int)this + 0xfc);
          *(int *)(*param_1 + 0x18) =
               *(int *)((int)this + 0xce) + *(int *)((int)this + 0xfc) + local_8;
          *(uint *)(*param_1 + 0x1c) =
               *(int *)((int)this + 0xce) + *(int *)((int)this + 0xfc) + uVar5;
          *(undefined4 *)*param_1 = 0;
        }
        else {
          *(int *)(iVar2 + 0x10) = *(int *)((int)this + 0xce);
          *(int *)(*param_1 + 0x18) = *(int *)((int)this + 0xce) + local_8;
          *(uint *)(*param_1 + 0x1c) = *(int *)((int)this + 0xce) + uVar5;
          *(undefined4 *)*param_1 = *(undefined4 *)((int)this + 0xb8);
        }
        uVar3 = FUN_0040dd70(this);
        *(undefined4 *)(*param_1 + 0xc) = uVar3;
        *(int *)(*param_1 + 0x14) = local_8;
        *(undefined2 *)(*param_1 + 0x20) = *(undefined2 *)((int)param_1 + 0x12);
        *(undefined2 *)(*param_1 + 0x22) = *(undefined2 *)((int)param_1 + 0x16);
        uVar5 = (uint)*(byte *)((int)this + 0xf6);
        iVar2 = *(int *)((int)this + 0xe2);
        iVar4 = FUN_0048bb90(*(uint *)((int)this + 0xea));
        FUN_00444320((undefined4 *)*param_1,iVar4,iVar2,uVar5);
      }
    }
  }
  return;
}


