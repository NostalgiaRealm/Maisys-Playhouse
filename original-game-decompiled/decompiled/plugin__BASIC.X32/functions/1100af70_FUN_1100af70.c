
/* ==== FUN_1100af70 @ 1100af70 ==== 
 * signature: undefined __cdecl FUN_1100af70(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1100af70-1100b1b1
 */

void __cdecl FUN_1100af70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  short local_568 [23];
  short local_53a [25];
  byte local_508;
  byte local_507;
  byte local_506;
  byte local_505;
  byte local_504;
  char local_500 [256];
  char local_400 [256];
  char local_300 [256];
  char local_200 [256];
  char local_100 [256];
  
  cVar2 = FUN_11011800(param_1,*param_3,&local_57c,0x7a);
  if (cVar2 != '\0') {
    if (local_508 == 0) {
      if (local_507 != 0) {
        FUN_11011800(param_1,*param_3,local_400,(uint)local_507);
        local_400[local_507] = '\0';
      }
    }
    else {
      FUN_11011800(param_1,*param_3,local_500,(uint)local_508);
      local_500[local_508] = '\0';
    }
    if (local_506 == 0) {
      if (local_505 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_505);
        local_200[local_505] = '\0';
      }
    }
    else {
      FUN_11011800(param_1,*param_3,local_300,(uint)local_506);
      local_300[local_506] = '\0';
    }
    if (local_504 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_504);
      local_100[local_504] = '\0';
    }
    *(undefined4 *)(param_2 + 0xc) = local_57c;
    *(undefined4 *)(param_2 + 0x10) = local_578;
    *(undefined4 *)(param_2 + 0x14) = local_574;
    *(undefined4 *)(param_2 + 0x18) = local_570;
    *(undefined4 *)(param_2 + 0x1c) = local_56c;
    psVar5 = local_568;
    psVar6 = (short *)(param_2 + 0x20);
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
      psVar5 = psVar5 + 2;
      psVar6 = psVar6 + 2;
    }
    *psVar6 = *psVar5;
    sVar1 = *(short *)(param_2 + 0x20);
    if (sVar1 == 0x1c) {
      pcVar3 = FUN_11027da0(local_500);
      *(char **)(param_2 + 0x2a) = pcVar3;
    }
    else if (sVar1 == 0xd) {
      pcVar3 = FUN_11027da0(local_400);
      *(char **)(param_2 + 0x24) = pcVar3;
    }
    psVar5 = local_53a;
    psVar6 = (short *)(param_2 + 0x4e);
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
      psVar5 = psVar5 + 2;
      psVar6 = psVar6 + 2;
    }
    *psVar6 = *psVar5;
    sVar1 = *(short *)(param_2 + 0x4e);
    if (sVar1 == 0x1c) {
      pcVar3 = FUN_11027da0(local_300);
      *(char **)(param_2 + 0x58) = pcVar3;
    }
    else if (sVar1 == 0xd) {
      pcVar3 = FUN_11027da0(local_200);
      *(char **)(param_2 + 0x52) = pcVar3;
    }
    if (*(LPVOID *)(param_2 + 0x7c) != (LPVOID)0x0) {
      FUN_1100d8f0(*(LPVOID *)(param_2 + 0x7c));
    }
    pcVar3 = FUN_11027da0(local_100);
    *(char **)(param_2 + 0x7c) = pcVar3;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


