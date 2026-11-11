
/* ==== FUN_00413b00 @ 00413b00 ==== 
 * signature: undefined4 __thiscall FUN_00413b00(void * this, short param_1, undefined * param_2, undefined4 param_3)
 * body: 00413b00-00413ba9
 */

undefined4 __thiscall FUN_00413b00(void *this,short param_1,undefined *param_2,undefined4 param_3)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  short *psVar3;
  undefined3 extraout_var_00;
  undefined3 uVar4;
  undefined1 local_5;
  
  local_5 = 0;
  cVar1 = FUN_00413fc0((int)this);
  uVar4 = extraout_var;
  if (cVar1 != '\0') {
    iVar2 = *(int *)((int)this + 0x10);
    *(int *)((int)this + 0x10) = iVar2 + 1;
    if (iVar2 == 0) {
      FUN_00430190(*(int *)((int)this + 4));
      FUN_00430190(*(int *)((int)this + 8));
    }
    for (iVar2 = FUN_00414260((int)this); iVar2 != 0; iVar2 = iVar2 + -1) {
      psVar3 = (short *)FUN_00414190(this,iVar2);
      if ((psVar3 != (short *)0x0) && (*psVar3 == param_1)) {
        local_5 = (*(code *)param_2)(psVar3,param_3);
        FUN_00414200(this,iVar2);
        break;
      }
      FUN_00414200(this,iVar2);
    }
    iVar2 = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x10) = iVar2;
    if (iVar2 == 0) {
      FUN_004301f0(*(int *)((int)this + 8));
      FUN_004301f0(*(int *)((int)this + 4));
    }
    FUN_004140a0((int)this);
    uVar4 = extraout_var_00;
  }
  return CONCAT31(uVar4,local_5);
}


