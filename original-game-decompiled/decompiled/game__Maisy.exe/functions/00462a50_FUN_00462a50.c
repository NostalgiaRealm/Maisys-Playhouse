
/* ==== FUN_00462a50 @ 00462a50 ==== 
 * signature: undefined __thiscall FUN_00462a50(void * this, char param_1)
 * body: 00462a50-00462bda
 */

void __thiscall FUN_00462a50(void *this,char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined4 local_60 [9];
  undefined2 local_3c;
  char local_f;
  short local_c [4];
  
  if (*(int *)((int)this + 0x3a) == 0) {
    return;
  }
  if ((*(short *)((int)this + 0x46) == 4) || (*(short *)((int)this + 0x46) == 0)) {
    local_f = '\0';
  }
  else {
    local_f = '\x01';
  }
  FUN_0046ca10((int)this);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x240))(param_1);
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x38c))(local_c,1);
  *(undefined2 *)((int)this + 0x46) = 4;
  if ((*(char *)((int)this + 0x146) != '\0') && (uVar2 = FUN_00460d70(this), (char)uVar2 == '\0')) {
    FUN_004087c0(*(void **)((int)this + 0x3a),local_c,'\x01');
  }
  (**(code **)(iVar1 + 0x358))(0,1);
  if (((local_f != '\0') && (param_1 == '\0')) && (*(int *)((int)this + 0x4e) != 0)) {
    FUN_004142c0(local_60,0xca,0,this,0);
    local_3c = 0;
    FUN_0046b770(this,(int)local_60);
  }
  piVar3 = (int *)(**(code **)(iVar1 + 0x28c))();
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x310))(this);
  }
  if (param_1 != '\0') {
    FUN_004142c0(local_60,0x66,0,this,0);
    FUN_0046b770(this,(int)local_60);
    (**(code **)(iVar1 + 0x120))(0);
    (**(code **)(**(int **)((int)this + 0x5a) + 0x120))(0);
    *(undefined2 *)((int)this + 0xc2) = 0;
    *(undefined2 *)((int)this + 0xc4) = 0;
    (**(code **)(iVar1 + 0x340))();
    if (param_1 != '\0') {
      uVar4 = 1;
      goto LAB_00462b87;
    }
  }
  uVar4 = 2;
LAB_00462b87:
  FUN_00406bb0(*(void **)((int)this + 0x3a),uVar4,this,(undefined4 *)0x0);
  *(undefined1 *)((int)this + 0x146) = 1;
  (**(code **)(iVar1 + 0x3d8))(0);
  piVar3 = *(int **)((int)this + 0x52);
  if (piVar3 != (int *)0x0) {
    if (param_1 != '\0') {
      (**(code **)(*piVar3 + 0x80))(0x7fffffff,0x4b);
      return;
    }
    (**(code **)(*piVar3 + 0x80))(0x7fffffff,0x19);
  }
  return;
}


