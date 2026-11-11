
/* ==== FUN_11006730 @ 11006730 ==== 
 * signature: undefined __cdecl FUN_11006730(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11006730-11006be8
 */

void __cdecl FUN_11006730(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  short sVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  short *psVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248 [11];
  undefined4 local_21a [5];
  byte local_204;
  byte local_203;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  short local_1d4;
  undefined4 local_1d2;
  undefined4 local_1a6 [5];
  byte local_190;
  byte local_18f;
  byte local_18e;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  short local_d4 [23];
  undefined4 local_a6 [5];
  byte local_90;
  
  sVar2 = *(short *)(param_3 + 3);
  if (sVar2 == 0) {
    cVar3 = FUN_11011800(param_1,*param_3,&local_200,0x74);
    if (cVar3 == '\0') {
      *(undefined1 *)((int)param_3 + 0x12) = 0;
    }
    else {
      if (local_190 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_190);
      }
      if (local_18f != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_18f);
      }
      if (local_18e != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_18e);
      }
      cVar3 = FUN_110062b0(&local_200,'\0');
      if (cVar3 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x03');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x03');
      }
      puVar1 = (uint *)(param_2 + 0xc);
      FUN_11006290(puVar1,'\0');
      FUN_11006290(puVar1,'\x01');
      FUN_11006290(puVar1,'\x02');
      *(undefined4 *)(param_2 + 0x10) = local_1fc;
      *(undefined4 *)(param_2 + 0x14) = local_1f8;
      *(undefined4 *)(param_2 + 0x18) = local_1ec;
      *(undefined4 *)(param_2 + 0x1c) = local_1e8;
      *(undefined4 *)(param_2 + 0x20) = local_1f4;
      *(undefined4 *)(param_2 + 0x24) = local_1f0;
      *(undefined4 *)(param_2 + 0x28) = local_1e4;
      *(undefined4 *)(param_2 + 0x2c) = local_1e0;
      *(undefined4 *)(param_2 + 0x30) = local_1dc;
      *(undefined4 *)(param_2 + 0x34) = local_1d8;
      psVar6 = &local_1d4;
      psVar8 = (short *)(param_2 + 0x38);
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      *psVar8 = *psVar6;
      if (local_1d4 == 0xf) {
        *(undefined4 *)(param_2 + 0x42) = 0;
        *(short *)(param_2 + 0x38) = 0x1c;
        *(undefined4 *)(param_2 + 0x3e) = local_1d2;
      }
      puVar7 = local_1a6;
      puVar9 = (undefined4 *)(param_2 + 0x66);
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else if (sVar2 == 1) {
    cVar3 = FUN_11011800(param_1,*param_3,&local_100,0x72);
    if (cVar3 == '\0') {
      *(undefined1 *)((int)param_3 + 0x12) = 0;
    }
    else {
      if (local_90 != 0) {
        FUN_11011800(param_1,*param_3,&local_200,(uint)local_90);
        *(undefined1 *)((int)&local_200 + (uint)local_90) = 0;
      }
      cVar3 = FUN_110062b0(&local_100,'\0');
      if (cVar3 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x03');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x03');
      }
      puVar1 = (uint *)(param_2 + 0xc);
      FUN_11006290(puVar1,'\0');
      FUN_11006290(puVar1,'\x01');
      FUN_11006290(puVar1,'\x02');
      *(undefined4 *)(param_2 + 0x10) = local_fc;
      *(undefined4 *)(param_2 + 0x14) = local_f8;
      *(undefined4 *)(param_2 + 0x18) = local_ec;
      *(undefined4 *)(param_2 + 0x1c) = local_e8;
      *(undefined4 *)(param_2 + 0x20) = local_f4;
      *(undefined4 *)(param_2 + 0x24) = local_f0;
      *(undefined4 *)(param_2 + 0x28) = local_e4;
      *(undefined4 *)(param_2 + 0x2c) = local_e0;
      *(undefined4 *)(param_2 + 0x30) = local_dc;
      *(undefined4 *)(param_2 + 0x34) = local_d8;
      psVar6 = local_d4;
      psVar8 = (short *)(param_2 + 0x38);
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      *psVar8 = *psVar6;
      if (*(short *)(param_2 + 0x38) == 0x1c) {
        pcVar4 = FUN_11027da0((char *)&local_200);
        *(char **)(param_2 + 0x42) = pcVar4;
      }
      puVar7 = local_a6;
      puVar9 = (undefined4 *)(param_2 + 0x66);
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else if (sVar2 == 2) {
    local_100._0_1_ = 0;
    cVar3 = FUN_11011800(param_1,*param_3,&local_274,0x72);
    if (cVar3 == '\0') {
      *(undefined1 *)((int)param_3 + 0x12) = 0;
    }
    else {
      if (local_204 != 0) {
        FUN_11011800(param_1,*param_3,&local_200,(uint)local_204);
        *(undefined1 *)((int)&local_200 + (uint)local_204) = 0;
      }
      if (local_203 != 0) {
        FUN_11011800(param_1,*param_3,&local_100,(uint)local_203);
        *(undefined1 *)((int)&local_100 + (uint)local_203) = 0;
      }
      *(undefined4 *)(param_2 + 0xc) = local_274;
      *(undefined4 *)(param_2 + 0x10) = local_270;
      *(undefined4 *)(param_2 + 0x14) = local_26c;
      *(undefined4 *)(param_2 + 0x18) = local_260;
      *(undefined4 *)(param_2 + 0x1c) = local_25c;
      *(undefined4 *)(param_2 + 0x20) = local_268;
      *(undefined4 *)(param_2 + 0x24) = local_264;
      *(undefined4 *)(param_2 + 0x28) = local_258;
      *(undefined4 *)(param_2 + 0x2c) = local_254;
      *(undefined4 *)(param_2 + 0x30) = local_250;
      *(undefined4 *)(param_2 + 0x34) = local_24c;
      FUN_1101e9c0();
      puVar7 = local_248;
      puVar9 = (undefined4 *)(param_2 + 0x38);
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
      if (*(short *)(param_2 + 0x38) == 0x1c) {
        pcVar4 = FUN_11027da0((char *)&local_200);
        *(char **)(param_2 + 0x42) = pcVar4;
      }
      if (*(short *)(param_2 + 0x38) == 0xd) {
        pcVar4 = FUN_11027da0((char *)&local_100);
        *(char **)(param_2 + 0x3c) = pcVar4;
      }
      puVar7 = local_21a;
      puVar9 = (undefined4 *)(param_2 + 0x66);
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  FUN_11011940((short *)(param_2 + 0x38),(short *)(param_2 + 0x28));
  return;
}


