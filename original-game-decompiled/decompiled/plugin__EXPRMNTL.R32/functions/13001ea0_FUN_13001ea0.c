
/* ==== FUN_13001ea0 @ 13001ea0 ==== 
 * signature: undefined4 __cdecl FUN_13001ea0(int param_1, undefined4 param_2, short param_3)
 * body: 13001ea0-13002119
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001ea0(int param_1,undefined4 param_2,short param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 local_50;
  int local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0x1a) {
    local_50 = 0x69;
    local_3c = 0;
    local_38 = 0x69;
    local_4a = 0;
    local_46 = 0;
    local_32 = 0;
    local_24 = 0x69;
    local_4e = 0;
    local_42 = 0;
    local_2e = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    local_1e = 0;
    local_2a = 0;
    local_1a = 0;
    local_22 = 0;
    uStack_20 = 0;
    local_16 = 0;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_10);
    puVar5 = &local_24;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(local_10,uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(param_1,0,0x20,&iStack_c);
    _DAT_13008d34 = (*pcVar1)(iStack_c,&local_3c);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_8);
    _DAT_13008d34 = (*pcVar1)(iStack_8,local_3c,s_project_130080ec,0,&local_50);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&iStack_4);
    _DAT_13008d34 =
         (*pcVar1)(iStack_4,CONCAT22(uStack_20,local_22),s_activeproject_130080d8,0,&local_38);
    if (CONCAT22(uStack_34,uStack_36) == local_4e) {
      if (*(char *)(param_1 + 0x26) == '\0') {
        FUN_13001b20(param_1);
        *(undefined1 *)(param_1 + 0x26) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x26) != '\0') {
      *(undefined1 *)(param_1 + 0x26) = 0;
      FUN_13001da0(param_1,'\0');
    }
    FUN_13003be0((int)&local_50);
    FUN_13003be0((int)&local_38);
    FUN_13003be0((int)&local_24);
    return 0;
  }
  if (param_3 == 0x1e) {
    local_50 = 0x69;
    local_4a = 0;
    local_46 = 0;
    local_4e = 0;
    local_42 = 0;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,(int *)&local_38);
    puVar5 = &local_50;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(CONCAT22(uStack_36,local_38),uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x24,(int *)&local_24);
    _DAT_13008d34 = (*pcVar1)(CONCAT22(local_22,local_24),local_4e,*(undefined4 *)(param_1 + 0x22));
    *(undefined4 *)(param_1 + 0x22) = 0;
    FUN_13003be0((int)&local_50);
    FUN_13001da0(param_1,'\x01');
  }
  return 0;
}


