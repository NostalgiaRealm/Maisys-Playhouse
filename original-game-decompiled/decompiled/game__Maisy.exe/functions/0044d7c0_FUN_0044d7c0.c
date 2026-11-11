
/* ==== FUN_0044d7c0 @ 0044d7c0 ==== 
 * signature: undefined __thiscall FUN_0044d7c0(void * this, int param_1, char param_2)
 * body: 0044d7c0-0044d87f
 */

void __thiscall FUN_0044d7c0(void *this,int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int *local_c;
  
  local_10 = FUN_0044e340((int)this);
  puVar3 = (undefined4 *)FUN_00430190(*(int *)((int)this + 0x30));
  iVar1 = *(int *)(param_1 + 0xc);
  (**(code **)(*(int *)this + 0x10))();
  if (0 < local_10) {
    do {
      local_c = (int *)0x0;
      piVar2 = (int *)*puVar3;
      while (piVar5 = piVar2, piVar5 != (int *)0x0) {
        piVar2 = *(int **)((int)piVar5 + 0x26);
        if ((((iVar1 == *(int *)((int)piVar5 + 0x66)) || (*(int *)((int)piVar5 + 0x66) == -1)) &&
            ((**(code **)(*piVar5 + 0x80))(0x7fffffff,100), param_2 != '\0')) &&
           (iVar4 = FUN_0040da40((int)piVar5), iVar4 == 0)) {
          if ((int *)*puVar3 == piVar5) {
            *puVar3 = piVar2;
          }
          else if (local_c != (int *)0x0) {
            FUN_0040d490(local_c,piVar2);
          }
          iVar4 = *piVar5;
          piVar5 = (int *)0x0;
          (**(code **)(iVar4 + 4))();
        }
        if (piVar5 != (int *)0x0) {
          local_c = piVar5;
        }
      }
      puVar3 = (undefined4 *)((int)puVar3 + 0x1a);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  FUN_004301f0(*(int *)((int)this + 0x30));
  return;
}


