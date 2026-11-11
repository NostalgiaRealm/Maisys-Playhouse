
/* ==== FUN_00418420 @ 00418420 ==== 
 * signature: undefined __thiscall FUN_00418420(void * this, int param_1, int param_2, undefined4 * param_3)
 * body: 00418420-00418555
 */

void __thiscall FUN_00418420(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_8;
  
  iVar4 = param_2 - param_1;
  iVar3 = param_2;
  iVar5 = DAT_004e01d8;
joined_r0x00418437:
  DAT_004e01d8 = param_1;
  local_8 = iVar3;
  if (iVar4 < 2) {
    DAT_004e01d8 = iVar5;
    return;
  }
LAB_00418449:
  DAT_004e01d8 = DAT_004e01d8 + 1;
  if (DAT_004e01d8 < iVar3) goto code_r0x0041845a;
  goto LAB_00418489;
code_r0x0041845a:
  iVar5 = (**(code **)*param_3)
                    ((*(int *)(*(int *)((int)this + 0x52) + DAT_004e01d8 * 4) + -1) *
                     *(int *)((int)this + 0x32) + *(int *)((int)this + 0x4e),
                     (*(int *)(*(int *)((int)this + 0x52) + param_1 * 4) + -1) *
                     *(int *)((int)this + 0x32) + *(int *)((int)this + 0x4e));
  if (iVar5 < 0) goto LAB_00418449;
LAB_00418489:
  iVar4 = local_8 << 2;
  iVar5 = local_8;
  do {
    local_8 = iVar5;
    iVar4 = iVar4 + -4;
    param_2 = local_8 + -1;
    if (param_2 <= param_1) break;
    iVar6 = (**(code **)*param_3)
                      ((*(int *)(iVar4 + *(int *)((int)this + 0x52)) + -1) *
                       *(int *)((int)this + 0x32) + *(int *)((int)this + 0x4e),
                       (*(int *)(*(int *)((int)this + 0x52) + param_1 * 4) + -1) *
                       *(int *)((int)this + 0x32) + *(int *)((int)this + 0x4e));
    iVar5 = param_2;
  } while (0 < iVar6);
  if (DAT_004e01d8 < param_2) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x52) + DAT_004e01d8 * 4);
    uVar2 = *puVar1;
    *puVar1 = *(undefined4 *)(*(int *)((int)this + 0x52) + param_2 * 4);
    *(undefined4 *)(*(int *)((int)this + 0x52) + param_2 * 4) = uVar2;
    local_8 = param_2;
    goto LAB_00418449;
  }
  if (param_2 == param_1) {
    param_1 = param_1 + 1;
    param_2 = iVar3;
  }
  else {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x52) + param_1 * 4);
    uVar2 = *puVar1;
    *puVar1 = *(undefined4 *)(*(int *)((int)this + 0x52) + param_2 * 4);
    *(undefined4 *)(*(int *)((int)this + 0x52) + param_2 * 4) = uVar2;
    if (param_2 - param_1 < (iVar3 - param_2) + -1) {
      FUN_00418420(this,param_1,param_2,param_3);
      param_1 = local_8;
      param_2 = iVar3;
    }
    else {
      FUN_00418420(this,local_8,iVar3,param_3);
    }
  }
  iVar4 = param_2 - param_1;
  iVar3 = param_2;
  iVar5 = DAT_004e01d8;
  goto joined_r0x00418437;
}


