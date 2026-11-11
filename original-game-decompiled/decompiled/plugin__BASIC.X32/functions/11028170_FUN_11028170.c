
/* ==== FUN_11028170 @ 11028170 ==== 
 * signature: undefined __cdecl FUN_11028170(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11028170-11028366
 */

void __cdecl FUN_11028170(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468 [11];
  undefined4 local_43a [11];
  undefined4 local_40c;
  byte local_407;
  byte local_406;
  byte local_405;
  byte local_404;
  char local_400 [256];
  char local_300 [256];
  char local_200 [256];
  char local_100 [256];
  
  local_400[0] = '\0';
  local_300[0] = '\0';
  cVar1 = FUN_11011800(param_1,*param_3,&local_470,0x6e);
  if (cVar1 != '\0') {
    if (local_407 != 0) {
      FUN_11011800(param_1,*param_3,local_200,(uint)local_407);
      local_200[local_407] = '\0';
    }
    if (local_406 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_406);
      local_100[local_406] = '\0';
    }
    if (local_405 != 0) {
      FUN_11011800(param_1,*param_3,local_400,(uint)local_405);
      local_400[local_405] = '\0';
    }
    if (local_404 != 0) {
      FUN_11011800(param_1,*param_3,local_300,(uint)local_404);
      local_300[local_404] = '\0';
    }
    *(undefined4 *)(param_2 + 0xc) = local_470;
    *(undefined4 *)(param_2 + 0x10) = local_46c;
    *(undefined4 *)(param_2 + 0x14) = local_40c;
    FUN_1101e9c0();
    FUN_1101e9c0();
    puVar4 = local_468;
    puVar5 = (undefined4 *)(param_2 + 0x18);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
    puVar4 = local_43a;
    puVar5 = (undefined4 *)(param_2 + 0x46);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
    if (*(short *)(param_2 + 0x18) == 0x1c) {
      pcVar2 = FUN_11027da0(local_200);
      *(char **)(param_2 + 0x22) = pcVar2;
      *(undefined4 *)(param_2 + 0x1a) = 0;
    }
    if (*(short *)(param_2 + 0x46) == 0x1c) {
      pcVar2 = FUN_11027da0(local_100);
      *(char **)(param_2 + 0x50) = pcVar2;
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
    if ((*(short *)(param_2 + 0x18) == 0xd) || (*(short *)(param_2 + 0x18) == 0x1f)) {
      pcVar2 = FUN_11027da0(local_400);
      *(char **)(param_2 + 0x1c) = pcVar2;
    }
    if ((*(short *)(param_2 + 0x46) == 0xd) || (*(short *)(param_2 + 0x46) == 0x1f)) {
      pcVar2 = FUN_11027da0(local_300);
      *(char **)(param_2 + 0x4a) = pcVar2;
    }
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


