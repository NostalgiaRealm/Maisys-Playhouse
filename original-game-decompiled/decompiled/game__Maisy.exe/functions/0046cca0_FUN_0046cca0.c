
/* ==== FUN_0046cca0 @ 0046cca0 ==== 
 * signature: undefined __thiscall FUN_0046cca0(void * this, int * param_1)
 * body: 0046cca0-0046cd02
 */

void __thiscall FUN_0046cca0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0x4e);
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar3;
    if (piVar1 == (int *)0x0) {
LAB_0046ccee:
      (**(code **)(*param_1 + 0x20c))(0);
      return;
    }
    if (piVar1 == param_1) {
      (**(code **)(*param_1 + 0x234))();
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)this + 0x4e) = *(undefined4 *)((int)piVar1 + 0x3e);
      }
      else {
        (**(code **)(*piVar2 + 0x20c))(*(undefined4 *)((int)piVar1 + 0x3e));
      }
      goto LAB_0046ccee;
    }
    piVar3 = *(int **)((int)piVar1 + 0x3e);
    piVar2 = piVar1;
  } while( true );
}


