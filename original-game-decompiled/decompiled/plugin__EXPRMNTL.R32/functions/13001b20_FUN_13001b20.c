
/* ==== FUN_13001b20 @ 13001b20 ==== 
 * signature: undefined4 __cdecl FUN_13001b20(int param_1)
 * body: 13001b20-13001d83
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001b20(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4c;
  undefined2 local_48;
  int local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined1 *local_26;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  iVar1 = FUN_13003970(param_1);
  local_e = 0;
  local_a = 0;
  local_12 = 0;
  local_6 = 0;
  local_42 = 0;
  local_3e = 0;
  local_46 = 0;
  local_3a = 0;
  local_34 = 0x66;
  local_2e = 0;
  local_14 = 0x69;
  local_2a = 0;
  local_48 = 0x69;
  local_26 = (undefined1 *)0x0;
  local_32 = 0xffffffff;
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_4c);
  _DAT_13008d34 = (*pcVar2)(local_4c,&local_26,0x100);
  if (local_26 != (undefined1 *)0x0) {
    local_2e = 0x100;
    *local_26 = 0;
  }
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_4c);
  _DAT_13008d34 = (*pcVar2)(local_4c,iVar1,s_system_13008060,0,&local_14);
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_20);
  _DAT_13008d34 = (*pcVar2)(iStack_20,iVar1,s_parent_130080c4,0,&local_48);
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_1c);
  _DAT_13008d34 = (*pcVar2)(iStack_1c,local_46,&DAT_130080b0,0,&local_34);
  pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_18);
  _DAT_13008d34 = (*pcVar2)(iStack_18,local_46,s_childobject_1300809c,0,&local_48);
  while (local_46 != 0) {
    if (local_46 != iVar1) {
      FUN_13001d90();
    }
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_4c);
    _DAT_13008d34 = (*pcVar2)(local_4c,local_46,s_nextsibling_13008088,0,&local_48);
  }
  FUN_13003be0((int)&local_48);
  FUN_13003be0((int)&local_14);
  if (local_26 != (undefined1 *)0x0) {
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x10,&local_4c);
    _DAT_13008d34 = (*pcVar2)(local_4c,local_26);
  }
  return 0;
}


