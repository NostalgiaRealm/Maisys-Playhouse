
/* ==== FUN_00430d80 @ 00430d80 ==== 
 * signature: undefined __thiscall FUN_00430d80(void * this, int param_1, char param_2)
 * body: 00430d80-00430dda
 */

void __thiscall FUN_00430d80(void *this,int param_1,char param_2)

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
        if (iVar1 < 0) goto LAB_00430dcd;
        piVar3 = (int *)FUN_004301c0(this,iVar2);
      } while (*piVar3 != param_1);
      FUN_004301f0((int)this);
      FUN_00430090(this,iVar2);
      FUN_00430190((int)this);
    } while (param_2 != '\0');
LAB_00430dcd:
    FUN_004301f0((int)this);
  }
  return;
}


