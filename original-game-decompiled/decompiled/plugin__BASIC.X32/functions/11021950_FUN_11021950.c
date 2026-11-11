
/* ==== FUN_11021950 @ 11021950 ==== 
 * signature: undefined __cdecl FUN_11021950(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11021950-11022035
 */

void __cdecl FUN_11021950(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230 [11];
  byte local_202;
  byte local_201;
  char local_200 [16];
  uint local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  short local_1c4;
  undefined4 local_1c2;
  byte local_196;
  byte local_195;
  byte local_194;
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
  byte local_a6;
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar2 = FUN_11011800(param_1,*param_3,local_200,0x6e);
    if (cVar2 != '\0') {
      if (local_196 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_196);
      }
      if (local_195 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_195);
      }
      if (local_194 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_194);
      }
      cVar2 = FUN_110062b0(&local_1f0,'\0');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x03');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x03');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\x01');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x04');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x04');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\x02');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x05');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x05');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\x03');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x06');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x06');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\x04');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\a');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\a');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\x05');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\b');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\b');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\x06');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\t');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\t');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\a');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\n');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\n');
      }
      cVar2 = FUN_110062b0(&local_1f0,'\b');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\v');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\v');
      }
      puVar1 = (uint *)(param_2 + 0xc);
      FUN_11006290(puVar1,'\0');
      FUN_11006290(puVar1,'\x01');
      FUN_11006290(puVar1,'\x02');
      *(undefined4 *)(param_2 + 0x10) = local_1ec;
      *(undefined4 *)(param_2 + 0x14) = local_1e8;
      *(undefined4 *)(param_2 + 0x18) = local_1e4;
      *(undefined4 *)(param_2 + 0x1c) = local_1e0;
      *(undefined4 *)(param_2 + 0x20) = local_1dc;
      *(undefined4 *)(param_2 + 0x24) = local_1d8;
      *(undefined4 *)(param_2 + 0x28) = local_1d4;
      *(undefined4 *)(param_2 + 0x2c) = local_1d0;
      *(undefined4 *)(param_2 + 0x30) = local_1cc;
      *(undefined4 *)(param_2 + 0x34) = local_1c8;
      psVar6 = &local_1c4;
      psVar8 = (short *)(param_2 + 0x38);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      *psVar8 = *psVar6;
      if (local_1c4 == 0xf) {
        *(undefined4 *)(param_2 + 0x42) = 0;
        *(short *)(param_2 + 0x38) = 0x1c;
        *(undefined4 *)(param_2 + 0x3e) = local_1c2;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else if (*(short *)(param_3 + 3) == 1) {
    cVar2 = FUN_11011800(param_1,*param_3,&local_100,0x5c);
    if (cVar2 != '\0') {
      if (local_a6 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_a6);
        local_200[local_a6] = '\0';
      }
      cVar2 = FUN_110062b0(&local_100,'\0');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x03');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x03');
      }
      cVar2 = FUN_110062b0(&local_100,'\x01');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x04');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x04');
      }
      cVar2 = FUN_110062b0(&local_100,'\x02');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x05');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x05');
      }
      cVar2 = FUN_110062b0(&local_100,'\x03');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\x06');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\x06');
      }
      cVar2 = FUN_110062b0(&local_100,'\x04');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\a');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\a');
      }
      cVar2 = FUN_110062b0(&local_100,'\x05');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\b');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\b');
      }
      cVar2 = FUN_110062b0(&local_100,'\x06');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\t');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\t');
      }
      cVar2 = FUN_110062b0(&local_100,'\a');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\n');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\n');
      }
      cVar2 = FUN_110062b0(&local_100,'\b');
      if (cVar2 == '\0') {
        FUN_11006290((uint *)(param_2 + 0xc),'\v');
      }
      else {
        FUN_11006270((uint *)(param_2 + 0xc),'\v');
      }
      puVar1 = (uint *)(param_2 + 0xc);
      FUN_11006290(puVar1,'\0');
      FUN_11006290(puVar1,'\x01');
      FUN_11006290(puVar1,'\x02');
      *(undefined4 *)(param_2 + 0x10) = local_fc;
      *(undefined4 *)(param_2 + 0x14) = local_f8;
      *(undefined4 *)(param_2 + 0x18) = local_f4;
      *(undefined4 *)(param_2 + 0x1c) = local_f0;
      *(undefined4 *)(param_2 + 0x20) = local_ec;
      *(undefined4 *)(param_2 + 0x24) = local_e8;
      *(undefined4 *)(param_2 + 0x28) = local_e4;
      *(undefined4 *)(param_2 + 0x2c) = local_e0;
      *(undefined4 *)(param_2 + 0x30) = local_dc;
      *(undefined4 *)(param_2 + 0x34) = local_d8;
      psVar6 = local_d4;
      psVar8 = (short *)(param_2 + 0x38);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar8 = psVar8 + 2;
      }
      *psVar8 = *psVar6;
      if (*(short *)(param_2 + 0x38) == 0x1c) {
        pcVar3 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x42) = pcVar3;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    local_100._0_1_ = 0;
    cVar2 = FUN_11011800(param_1,*param_3,&local_25c,0x5c);
    if (cVar2 != '\0') {
      if (local_202 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_202);
        local_200[local_202] = '\0';
      }
      if (local_201 != 0) {
        FUN_11011800(param_1,*param_3,&local_100,(uint)local_201);
        *(undefined1 *)((int)&local_100 + (uint)local_201) = 0;
      }
      *(undefined4 *)(param_2 + 0xc) = local_25c;
      *(undefined4 *)(param_2 + 0x10) = local_258;
      *(undefined4 *)(param_2 + 0x14) = local_254;
      *(undefined4 *)(param_2 + 0x18) = local_250;
      *(undefined4 *)(param_2 + 0x1c) = local_24c;
      *(undefined4 *)(param_2 + 0x20) = local_248;
      *(undefined4 *)(param_2 + 0x24) = local_244;
      *(undefined4 *)(param_2 + 0x28) = local_240;
      *(undefined4 *)(param_2 + 0x2c) = local_23c;
      *(undefined4 *)(param_2 + 0x30) = local_238;
      *(undefined4 *)(param_2 + 0x34) = local_234;
      FUN_1101e9c0();
      puVar5 = local_230;
      puVar7 = (undefined4 *)(param_2 + 0x38);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
      if (*(short *)(param_2 + 0x38) == 0x1c) {
        pcVar3 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x42) = pcVar3;
      }
      if (*(short *)(param_2 + 0x38) == 0xd) {
        pcVar3 = FUN_11027da0((char *)&local_100);
        *(char **)(param_2 + 0x3c) = pcVar3;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  FUN_11011940((short *)(param_2 + 0x38),(short *)(param_2 + 0x28));
  return;
}


