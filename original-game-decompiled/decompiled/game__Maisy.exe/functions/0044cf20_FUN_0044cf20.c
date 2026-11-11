
/* ==== FUN_0044cf20 @ 0044cf20 ==== 
 * signature: undefined __thiscall FUN_0044cf20(void * this, undefined * param_1, undefined4 param_2)
 * body: 0044cf20-0044cf7e
 */

void __thiscall FUN_0044cf20(void *this,undefined *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = FUN_0044e340((int)this);
  piVar1 = (int *)FUN_00430190(*(int *)((int)this + 0x30));
  if (0 < local_c) {
    do {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        if (iVar2 == 0) goto LAB_0044cf5c;
        do {
          (*(code *)param_1)(iVar2,param_2);
LAB_0044cf5c:
          iVar2 = *(int *)(iVar2 + 0x26);
        } while (iVar2 != 0);
      }
      piVar1 = (int *)((int)piVar1 + 0x1a);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  FUN_004301f0(*(int *)((int)this + 0x30));
  return;
}


