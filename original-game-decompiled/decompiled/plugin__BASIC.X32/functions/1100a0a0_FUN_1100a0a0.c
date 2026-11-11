
/* ==== FUN_1100a0a0 @ 1100a0a0 ==== 
 * signature: undefined __cdecl FUN_1100a0a0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1100a0a0-1100a425
 */

void __cdecl FUN_1100a0a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234 [11];
  undefined4 local_206;
  byte local_202;
  byte local_201;
  char local_200 [4];
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  short local_1e0;
  undefined4 local_1de;
  undefined4 local_1b2;
  byte local_1ae;
  byte local_1ad;
  char local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  short local_e0 [23];
  undefined4 local_b2;
  byte local_ae;
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar2 = FUN_11011800(param_1,*param_3,local_200,0x54);
    if (cVar2 != '\0') {
      if (local_1ae != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_1ae);
      }
      if (local_1ad != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_1ad);
      }
      puVar1 = (uint *)(param_2 + 0xc);
      FUN_11006290(puVar1,'\0');
      FUN_11006290(puVar1,'\x01');
      FUN_11006290(puVar1,'\x02');
      *(undefined4 *)(param_2 + 0x10) = local_1fc;
      *(undefined4 *)(param_2 + 0x14) = local_1b2;
      *(undefined4 *)(param_2 + 0x18) = local_1f8;
      *(undefined4 *)(param_2 + 0x1c) = local_1f4;
      *(undefined4 *)(param_2 + 0x20) = local_1f0;
      *(undefined4 *)(param_2 + 0x24) = local_1ec;
      *(undefined4 *)(param_2 + 0x28) = local_1e8;
      *(undefined4 *)(param_2 + 0x2c) = local_1e4;
      psVar6 = &local_1e0;
      psVar8 = (short *)(param_2 + 0x30);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      *psVar8 = *psVar6;
      if (local_1e0 == 0xf) {
        *(undefined4 *)(param_2 + 0x3a) = 0;
        *(short *)(param_2 + 0x30) = 0x1c;
        *(undefined4 *)(param_2 + 0x36) = local_1de;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else if (*(short *)(param_3 + 3) == 1) {
    cVar2 = FUN_11011800(param_1,*param_3,local_100,0x54);
    if (cVar2 != '\0') {
      if (local_ae != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_ae);
        local_200[local_ae] = '\0';
      }
      puVar1 = (uint *)(param_2 + 0xc);
      FUN_11006290(puVar1,'\0');
      FUN_11006290(puVar1,'\x01');
      FUN_11006290(puVar1,'\x02');
      *(undefined4 *)(param_2 + 0x10) = local_fc;
      *(undefined4 *)(param_2 + 0x14) = local_b2;
      *(undefined4 *)(param_2 + 0x18) = local_f8;
      *(undefined4 *)(param_2 + 0x1c) = local_f4;
      *(undefined4 *)(param_2 + 0x20) = local_f0;
      *(undefined4 *)(param_2 + 0x24) = local_ec;
      *(undefined4 *)(param_2 + 0x28) = local_e8;
      *(undefined4 *)(param_2 + 0x2c) = local_e4;
      psVar6 = local_e0;
      psVar8 = (short *)(param_2 + 0x30);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      *psVar8 = *psVar6;
      if (*(short *)(param_2 + 0x30) == 0x1c) {
        pcVar3 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x3a) = pcVar3;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    local_100[0] = '\0';
    cVar2 = FUN_11011800(param_1,*param_3,&local_254,0x54);
    if (cVar2 != '\0') {
      if (local_202 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_202);
        local_200[local_202] = '\0';
      }
      if (local_201 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_201);
        local_100[local_201] = '\0';
      }
      *(undefined4 *)(param_2 + 0xc) = local_254;
      *(undefined4 *)(param_2 + 0x10) = local_250;
      *(undefined4 *)(param_2 + 0x14) = local_206;
      *(undefined4 *)(param_2 + 0x18) = local_24c;
      *(undefined4 *)(param_2 + 0x1c) = local_248;
      *(undefined4 *)(param_2 + 0x20) = local_244;
      *(undefined4 *)(param_2 + 0x24) = local_240;
      *(undefined4 *)(param_2 + 0x28) = local_23c;
      *(undefined4 *)(param_2 + 0x2c) = local_238;
      FUN_1101e9c0();
      puVar5 = local_234;
      puVar7 = (undefined4 *)(param_2 + 0x30);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
      if (*(short *)(param_2 + 0x30) == 0x1c) {
        pcVar3 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x3a) = pcVar3;
      }
      if ((*(short *)(param_2 + 0x30) == 0xd) || (*(short *)(param_2 + 0x30) == 0x1f)) {
        pcVar3 = FUN_11027da0(local_100);
        *(char **)(param_2 + 0x34) = pcVar3;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  FUN_11011940((short *)(param_2 + 0x30),(short *)(param_2 + 0x20));
  return;
}


