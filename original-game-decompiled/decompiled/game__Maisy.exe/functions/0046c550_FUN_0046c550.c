
/* ==== FUN_0046c550 @ 0046c550 ==== 
 * signature: undefined __thiscall FUN_0046c550(void * this, int * param_1)
 * body: 0046c550-0046c5bd
 */

void __thiscall FUN_0046c550(void *this,int *param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_00469f80(param_1);
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x2b8);
    do {
      cVar2 = FUN_0040af70();
      if (cVar2 == '\0') {
LAB_0046c59b:
        uVar5 = *(undefined4 *)((int)this + 4);
        iVar6 = *piVar3;
      }
      else {
        piVar4 = FUN_0042c350(piVar3);
        if (piVar4 == (int *)0x0) goto LAB_0046c59b;
        if (DAT_004d95c8 == (int *)0x0) {
          DAT_004d95c8 = piVar3;
        }
        uVar5 = *(undefined4 *)((int)this + 4);
        iVar6 = *piVar4;
      }
      uVar5 = (**(code **)(iVar6 + 0xec))(uVar5);
      (*pcVar1)(uVar5,1);
      piVar3 = *(int **)((int)piVar3 + 0x3e);
    } while (piVar3 != (int *)0x0);
  }
  return;
}


