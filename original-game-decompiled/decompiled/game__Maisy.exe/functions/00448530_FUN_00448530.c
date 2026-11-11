
/* ==== FUN_00448530 @ 00448530 ==== 
 * signature: undefined __thiscall FUN_00448530(void * this, int param_1, short param_2)
 * body: 00448530-00448592
 */

void __thiscall FUN_00448530(void *this,int param_1,short param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_004485a0(this,param_1,param_2);
  sVar1 = (short)uVar2;
  if (sVar1 != 0) {
    if (*(char *)((int)this + 0x3b) == '\0') {
      FUN_00430090(*(void **)((int)this + 0x2a),(int)sVar1);
      return;
    }
    iVar3 = FUN_00430190(*(int *)((int)this + 0x2a));
    iVar3 = iVar3 + sVar1 * 0xc;
    *(undefined1 *)(iVar3 + -2) = 1;
    *(undefined4 *)(iVar3 + -0xc) = 0;
    FUN_004301f0(*(int *)((int)this + 0x2a));
    *(undefined1 *)((int)this + 0x3a) = 1;
  }
  return;
}


