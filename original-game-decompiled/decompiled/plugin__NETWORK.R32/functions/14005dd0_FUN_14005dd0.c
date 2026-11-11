
/* ==== FUN_14005dd0 @ 14005dd0 ==== 
 * signature: undefined __cdecl FUN_14005dd0(undefined4 param_1, int param_2)
 * body: 14005dd0-14005e3f
 */

void __cdecl FUN_14005dd0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int local_f8;
  undefined1 local_f4 [126];
  undefined1 auStack_76 [118];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_f8);
  DAT_14028e48 = (*pcVar1)(local_f8,*(undefined4 *)(param_2 + 0x1c),1,local_f4);
  if (*(char *)(param_2 + 0x72) == '\0') {
    FUN_1400d500((int)auStack_76);
  }
  *(undefined2 *)(param_2 + 2) = 0xb;
  return;
}


