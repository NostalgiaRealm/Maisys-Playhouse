
/* ==== FUN_110121f0 @ 110121f0 ==== 
 * signature: undefined __cdecl FUN_110121f0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 110121f0-11012535
 */

void __cdecl FUN_110121f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c [13];
  byte local_406;
  byte local_405;
  byte local_404;
  byte local_403;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec [13];
  byte local_3b8;
  byte local_3b7;
  byte local_3b6;
  char local_300 [256];
  char local_200 [256];
  char local_100 [256];
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_400,0x4c);
    if (cVar1 != '\0') {
      if (local_3b7 != 0) {
        FUN_11011800(param_1,*param_3,local_300,(uint)local_3b7);
        local_300[local_3b7] = '\0';
      }
      if (local_3b6 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_3b6);
        local_200[local_3b6] = '\0';
      }
      if (local_3b8 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_3b8);
        local_100[local_3b8] = '\0';
      }
      *(undefined4 *)(param_2 + 0xc) = local_400;
      *(undefined4 *)(param_2 + 0x10) = local_3fc;
      *(undefined4 *)(param_2 + 0x14) = local_3f8;
      *(undefined4 *)(param_2 + 0x18) = local_3f4;
      *(undefined4 *)(param_2 + 0x1c) = local_3f0;
      puVar4 = local_3ec;
      puVar5 = (undefined4 *)(param_2 + 0x20);
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      if (*(short *)(param_2 + 0x20) == 0x1c) {
        pcVar2 = FUN_11027da0(local_300);
        *(char **)(param_2 + 0x2a) = pcVar2;
      }
      if (*(short *)(param_2 + 0x20) == 0xd) {
        pcVar2 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x24) = pcVar2;
      }
      if (*(LPVOID *)(param_2 + 0x52) != (LPVOID)0x0) {
        FUN_1100d8f0(*(LPVOID *)(param_2 + 0x52));
      }
      if (*(LPVOID *)(param_2 + 0x4e) != (LPVOID)0x0) {
        FUN_1100d8f0(*(LPVOID *)(param_2 + 0x4e));
      }
      pcVar2 = FUN_11027da0(local_100);
      *(char **)(param_2 + 0x52) = pcVar2;
      pcVar2 = FUN_11027da0(s_Ask_User_11036104);
      *(char **)(param_2 + 0x4e) = pcVar2;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar1 = FUN_11011800(param_1,*param_3,&local_450,0x4e);
    if (cVar1 != '\0') {
      if (local_404 != 0) {
        FUN_11011800(param_1,*param_3,local_300,(uint)local_404);
        local_300[local_404] = '\0';
      }
      if (local_403 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_403);
        local_200[local_403] = '\0';
      }
      if (local_406 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_406);
        local_100[local_406] = '\0';
      }
      if (local_405 != 0) {
        FUN_11011800(param_1,*param_3,&local_400,(uint)local_405);
        *(undefined1 *)((int)&local_400 + (uint)local_405) = 0;
      }
      *(undefined4 *)(param_2 + 0xc) = local_450;
      *(undefined4 *)(param_2 + 0x10) = local_44c;
      *(undefined4 *)(param_2 + 0x14) = local_448;
      *(undefined4 *)(param_2 + 0x18) = local_444;
      *(undefined4 *)(param_2 + 0x1c) = local_440;
      puVar4 = local_43c;
      puVar5 = (undefined4 *)(param_2 + 0x20);
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      if (*(short *)(param_2 + 0x20) == 0x1c) {
        pcVar2 = FUN_11027da0(local_300);
        *(char **)(param_2 + 0x2a) = pcVar2;
      }
      if (*(short *)(param_2 + 0x20) == 0xd) {
        pcVar2 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x24) = pcVar2;
      }
      if (*(LPVOID *)(param_2 + 0x4e) != (LPVOID)0x0) {
        FUN_1100d8f0(*(LPVOID *)(param_2 + 0x4e));
      }
      if (*(LPVOID *)(param_2 + 0x52) != (LPVOID)0x0) {
        FUN_1100d8f0(*(LPVOID *)(param_2 + 0x52));
      }
      pcVar2 = FUN_11027da0(local_100);
      *(char **)(param_2 + 0x4e) = pcVar2;
      pcVar2 = FUN_11027da0((char *)&local_400);
      *(char **)(param_2 + 0x52) = pcVar2;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
      return;
    }
  }
  return;
}


