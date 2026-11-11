
/* ==== FUN_00488420 @ 00488420 ==== 
 * signature: undefined __thiscall FUN_00488420(void * this, undefined4 * param_1)
 * body: 00488420-00488530
 */

void __thiscall FUN_00488420(void *this,undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined1 local_14 [10];
  undefined4 local_a;
  
  bVar4 = 0;
  local_a = *(code **)(*(int *)this + 0x31c);
  (*local_a)();
  if (*(int **)((int)this + 0x6c) == (int *)0x0) {
    if (*(void **)((int)this + 0x48) == (void *)0x0) {
      iVar3 = FUN_00409610(*(int *)((int)this + 0x42));
      if (iVar3 != *(int *)((int)this + 0x3e)) goto LAB_00488477;
    }
    else {
      FUN_0048bed0(*(void **)((int)this + 0x48),param_1);
    }
  }
  else {
    (**(code **)(**(int **)((int)this + 0x6c) + 600))(0x6d,param_1,0x3a);
  }
  bVar4 = 1;
LAB_00488477:
  cVar1 = (**(code **)(**(int **)((int)this + 0x3e) + 0x68))(1);
  if (cVar1 != '\0') {
    puVar5 = &local_58;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    local_50 = *param_1;
    local_4c = param_1[3];
    local_48 = param_1[1];
    local_52 = 0;
    local_40 = 0;
    local_54 = 0;
    local_58 = 0;
    if (DAT_004e1c4a < 0) {
      local_58 = 2;
    }
    if (*(void **)((int)this + 0x48) == (void *)0x0) {
      local_44 = (undefined1 *)0x0;
    }
    else {
      FUN_0048bea0(*(void **)((int)this + 0x48),local_68);
      local_44 = local_68;
    }
    bVar2 = (**(code **)(**(int **)((int)this + 0x3e) + 0x44))(1,FUN_00461370,&local_58);
    bVar4 = bVar4 | bVar2;
  }
  (*local_a)();
  if (bVar4 == 0) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x410))(local_14);
    local_a = (code *)CONCAT22(0xffff,(undefined2)local_a);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x414))(local_14);
  }
  return;
}


