
/* ==== FUN_0044b650 @ 0044b650 ==== 
 * signature: undefined __thiscall FUN_0044b650(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 0044b650-0044b6e1
 */

void __thiscall FUN_0044b650(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_26;
  undefined4 local_22;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (*(int *)((int)this + 0x48) != 0) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x38c))(local_14,1);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x3a0))(local_c,1);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x398))(local_1c,1);
    local_58 = local_1c;
    local_54 = local_c;
    local_50 = local_14;
    local_46 = 0;
    local_48 = 0;
    local_42 = 0;
    local_3e = 0;
    local_26 = param_1;
    local_22 = 0;
    local_4c = local_54;
    (**(code **)(**(int **)((int)this + 0x48) + 600))(0x7b,&local_58,0x3a);
    *param_2 = local_22;
  }
  return;
}


