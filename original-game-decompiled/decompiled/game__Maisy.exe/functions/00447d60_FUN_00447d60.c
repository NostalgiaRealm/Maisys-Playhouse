
/* ==== FUN_00447d60 @ 00447d60 ==== 
 * signature: undefined __thiscall FUN_00447d60(void * this, char param_1)
 * body: 00447d60-00447df7
 */

void __thiscall FUN_00447d60(void *this,char param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int *piVar3;
  void *pvVar4;
  
  uVar2 = DAT_004dcb38;
  DAT_004dcb38 = 1;
  if (*(int *)((int)this + 0x3a) != 0) {
    piVar3 = (int *)FUN_00409590(*(int *)((int)this + 0x3a));
    pvVar4 = (void *)(**(code **)(*piVar3 + 0x138))();
    if (pvVar4 == this) {
      if (param_1 != '\0') {
        uVar1 = *(undefined4 *)((int)this + 0x124);
        DAT_004dcb38 = 0;
        *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x120);
        FUN_00461460(this,param_1);
        *(undefined4 *)((int)this + 0x124) = uVar1;
        DAT_004dcb38 = uVar2;
        return;
      }
      DAT_004db888 = 1;
      FUN_00461460(this,'\0');
      DAT_004db888 = 0;
      DAT_004dcb38 = uVar2;
      return;
    }
  }
  FUN_00461460(this,param_1);
  DAT_004dcb38 = uVar2;
  return;
}


