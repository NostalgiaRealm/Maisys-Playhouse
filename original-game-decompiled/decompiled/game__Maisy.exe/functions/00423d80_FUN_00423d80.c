
/* ==== FUN_00423d80 @ 00423d80 ==== 
 * signature: undefined __thiscall FUN_00423d80(void * this, int * param_1)
 * body: 00423d80-00423dec
 */

void __thiscall FUN_00423d80(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)((int)this + 0x50);
  piVar3 = (int *)0x0;
  do {
    piVar2 = piVar4;
    if (piVar2 == (int *)0x0) {
LAB_00423dce:
      iVar1 = *param_1;
      (**(code **)(iVar1 + 0x214))(0);
      (**(code **)(iVar1 + 0x20c))(0);
      return;
    }
    if (param_1 == piVar2) {
      (**(code **)(*piVar2 + 0x234))();
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)piVar2 + 0x3e);
      }
      else {
        (**(code **)(*piVar3 + 0x20c))(*(undefined4 *)((int)param_1 + 0x3e));
      }
      goto LAB_00423dce;
    }
    piVar4 = *(int **)((int)piVar2 + 0x3e);
    piVar3 = piVar2;
  } while( true );
}


