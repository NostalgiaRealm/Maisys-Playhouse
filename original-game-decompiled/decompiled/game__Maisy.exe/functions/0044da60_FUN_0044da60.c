
/* ==== FUN_0044da60 @ 0044da60 ==== 
 * signature: undefined __thiscall FUN_0044da60(void * this, int param_1)
 * body: 0044da60-0044daea
 */

void __thiscall FUN_0044da60(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_c;
  
  iVar2 = FUN_0044e340((int)this);
  if (param_1 <= iVar2) {
    FUN_00430190(*(int *)((int)this + 0x30));
    piVar3 = (int *)FUN_004301c0(*(void **)((int)this + 0x30),param_1);
    local_c = (int *)0x0;
    piVar4 = (int *)*piVar3;
    while (piVar4 != (int *)0x0) {
      piVar1 = *(int **)((int)piVar4 + 0x26);
      iVar2 = FUN_0040da40((int)piVar4);
      piVar5 = piVar4;
      if (iVar2 == 0) {
        if ((int *)*piVar3 == piVar4) {
          *piVar3 = (int)piVar1;
        }
        else if (local_c != (int *)0x0) {
          FUN_0040d490(local_c,piVar1);
        }
        piVar5 = (int *)0x0;
        (**(code **)(*piVar4 + 4))();
      }
      piVar4 = piVar1;
      if (piVar5 != (int *)0x0) {
        local_c = piVar5;
      }
    }
    FUN_004301f0(*(int *)((int)this + 0x30));
  }
  return;
}


