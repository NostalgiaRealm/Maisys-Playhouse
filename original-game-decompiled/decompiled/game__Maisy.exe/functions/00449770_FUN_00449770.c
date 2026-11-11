
/* ==== FUN_00449770 @ 00449770 ==== 
 * signature: undefined __thiscall FUN_00449770(void * this, int * param_1, undefined4 param_2, int param_3)
 * body: 00449770-0044984f
 */

void __thiscall FUN_00449770(void *this,int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_3 + 4);
  if (((sVar1 != 0) && (sVar1 != 1)) && ((sVar1 == 2 || (sVar1 == 3)))) {
    *(undefined1 *)((int)this + 0x17c) = 1;
    FUN_0040ddf0(this,0);
    *(byte *)((int)this + 0x6a) = *(byte *)((int)this + 0x6a) & 0xef;
    uVar4 = (**(code **)(*param_1 + 0x110))();
    *(undefined2 *)((int)this + 0xa0) = uVar4;
    iVar2 = *(int *)(param_3 + 0x54);
    *(int *)((int)this + 0x186) = iVar2;
    iVar5 = *(int *)(param_3 + 0x58);
    *(int *)((int)this + 0x18a) = iVar5;
    iVar3 = *(int *)(param_3 + 0x5c);
    *(int *)((int)this + 0x18e) = iVar3;
    iVar5 = iVar2 + iVar3 + iVar5;
    *(undefined2 *)((int)this + 0x15a) = *(undefined2 *)(param_3 + 0x60);
    if (iVar5 < 0x101) {
      (**(code **)(*param_1 + 0x144))((int)this + 0x182);
      FUN_00449260(this);
      return;
    }
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x144))((int)this + 0x182);
      FUN_00486d40(param_1,*(int *)((int)this + 0x18e) + *(int *)((int)this + 0x186) +
                           *(int *)((int)this + 0x18a));
    }
  }
  return;
}


