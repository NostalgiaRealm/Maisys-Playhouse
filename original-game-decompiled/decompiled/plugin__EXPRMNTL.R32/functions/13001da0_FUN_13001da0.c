
/* ==== FUN_13001da0 @ 13001da0 ==== 
 * signature: undefined4 __cdecl FUN_13001da0(int param_1, char param_2)
 * body: 13001da0-13001e71
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001da0(int param_1,char param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int local_1c;
  int iStack_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x1e) != 0)) {
    local_e = 0;
    local_a = 0;
    local_12 = 0;
    local_6 = 0;
    local_14 = 0x69;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,5,&local_1c);
    puVar5 = &local_14;
    uVar4 = 0;
    pcVar3 = s_system_13008060;
    uVar2 = FUN_13003970(param_1);
    _DAT_13008d34 = (*pcVar1)(local_1c,uVar2,pcVar3,uVar4,puVar5);
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x24,&iStack_18);
    _DAT_13008d34 = (*pcVar1)(iStack_18,local_12,*(undefined4 *)(param_1 + 0x1e));
    *(undefined4 *)(param_1 + 0x1e) = 0;
    FUN_13003be0((int)&local_14);
  }
  return 0;
}


