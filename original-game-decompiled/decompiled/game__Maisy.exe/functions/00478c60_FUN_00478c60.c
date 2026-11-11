
/* ==== FUN_00478c60 @ 00478c60 ==== 
 * signature: undefined __fastcall FUN_00478c60(int param_1)
 * body: 00478c60-00478cee
 */

void __fastcall FUN_00478c60(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_120 [256];
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    local_120[0] = '\0';
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x26) != 0) {
      FUN_00478cf0(param_1);
    }
    local_1c = FUN_0043f650(s_Startup_Segment_004dcad0);
    iVar2 = -1;
    local_20 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    pcVar3 = local_120;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 == -2) {
      local_18 = (char *)0x0;
    }
    else {
      local_18 = FUN_0043f650(local_120);
    }
    local_14 = 0;
    (**(code **)(**(int **)(param_1 + 0x54) + 0xe8))(&local_20);
  }
  return;
}


