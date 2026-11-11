
/* ==== FUN_00430de0 @ 00430de0 ==== 
 * signature: undefined __thiscall FUN_00430de0(void * this, int * param_1, char param_2)
 * body: 00430de0-00430e64
 */

void __thiscall FUN_00430de0(void *this,int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x26) != 0) {
    FUN_00430190((int)this);
    iVar1 = *(int *)((int)this + 0x26);
    do {
      do {
        iVar2 = iVar1;
        iVar1 = iVar2 + -1;
        if (iVar1 < 0) goto LAB_00430e2d;
        piVar3 = (int *)FUN_004301c0(this,iVar2);
      } while ((int *)*piVar3 != param_1);
      FUN_004301f0((int)this);
      FUN_00430090(this,iVar2);
      FUN_00430190((int)this);
    } while (param_2 != '\0');
LAB_00430e2d:
    FUN_004301f0((int)this);
    for (piVar3 = (int *)(**(code **)(*param_1 + 0x184))(); piVar3 != (int *)0x0;
        piVar3 = (int *)(**(code **)(*piVar3 + 0x17c))()) {
      FUN_00430de0(this,piVar3,'\0');
    }
  }
  return;
}


