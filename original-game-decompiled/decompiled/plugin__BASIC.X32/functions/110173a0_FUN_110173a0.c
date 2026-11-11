
/* ==== FUN_110173a0 @ 110173a0 ==== 
 * signature: undefined __cdecl FUN_110173a0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 110173a0-11017957
 */

void __cdecl FUN_110173a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  short *psVar10;
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
  undefined4 local_1d8 [3];
  short local_1cc;
  undefined4 local_1ca;
  byte local_1aa;
  byte local_19e;
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
  short local_d8;
  undefined4 local_d6;
  
  sVar2 = *(short *)(param_3 + 3);
  if (sVar2 == 0) {
    cVar3 = FUN_11011800(param_1,*param_3,&local_200,100);
    if (cVar3 == '\0') goto LAB_1101790d;
    if (local_19e != 0) {
      FUN_11011800(param_1,*param_3,&local_100,(uint)local_19e);
      *(undefined1 *)((int)&local_100 + (uint)local_19e) = 0;
    }
    *(undefined4 *)(param_2 + 0x10) = local_1f0;
    *(undefined4 *)(param_2 + 0x14) = local_1ec;
    *(undefined4 *)(param_2 + 0x1c) = local_1e4;
    *(undefined4 *)(param_2 + 0x18) = local_1e8;
    *(undefined4 *)(param_2 + 0x20) = local_1e0;
    *(undefined4 *)(param_2 + 0x24) = local_1dc;
    *(undefined4 *)(param_2 + 0x28) = local_1d8[0];
    *(undefined4 *)(param_2 + 0x2c) = local_1d8[1];
    *(undefined4 *)(param_2 + 0x30) = local_1d8[2];
    psVar8 = &local_1cc;
    psVar10 = (short *)(param_2 + 0x34);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar10 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      psVar10 = psVar10 + 2;
    }
    *psVar10 = *psVar8;
    puVar1 = (uint *)(param_2 + 0xc);
    *puVar1 = 0;
    FUN_11006270(puVar1,'\x03');
    FUN_11006290(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    if (local_1cc == 0xf) {
      *(undefined4 *)(param_2 + 0x3e) = 0;
      *(undefined2 *)(param_2 + 0x34) = 0x1c;
      *(undefined4 *)(param_2 + 0x3a) = local_1ca;
    }
  }
  else if (sVar2 == 1) {
    cVar3 = FUN_11011800(param_1,*param_3,&local_100,0x56);
    if (cVar3 == '\0') goto LAB_1101790d;
    cVar3 = FUN_110062b0(&local_100,'\0');
    if (cVar3 == '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x03');
    }
    else {
      FUN_11006270((uint *)(param_2 + 0xc),'\x03');
    }
    cVar3 = FUN_110062b0(&local_100,'\x01');
    if (cVar3 == '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x04');
    }
    else {
      FUN_11006270((uint *)(param_2 + 0xc),'\x04');
    }
    cVar3 = FUN_110062b0(&local_100,'\x02');
    if (cVar3 == '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x05');
    }
    else {
      FUN_11006270((uint *)(param_2 + 0xc),'\x05');
    }
    puVar1 = (uint *)(param_2 + 0xc);
    FUN_11006290(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    *(undefined4 *)(param_2 + 0x10) = local_fc;
    *(undefined4 *)(param_2 + 0x14) = local_f8;
    *(undefined4 *)(param_2 + 0x1c) = local_f0;
    *(undefined4 *)(param_2 + 0x18) = local_f4;
    *(undefined4 *)(param_2 + 0x20) = local_ec;
    *(undefined4 *)(param_2 + 0x24) = local_e8;
    *(undefined4 *)(param_2 + 0x28) = local_e4;
    *(undefined4 *)(param_2 + 0x2c) = local_e0;
    *(undefined4 *)(param_2 + 0x30) = local_dc;
    psVar8 = &local_d8;
    psVar10 = (short *)(param_2 + 0x34);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar10 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      psVar10 = psVar10 + 2;
    }
    *psVar10 = *psVar8;
    if (local_d8 == 0xf) {
      *(undefined4 *)(param_2 + 0x3e) = 0;
      *(short *)(param_2 + 0x34) = 0x1c;
      *(undefined4 *)(param_2 + 0x3a) = local_d6;
    }
  }
  else if (sVar2 == 2) {
    cVar3 = FUN_11011800(param_1,*param_3,&local_200,0x58);
    if (cVar3 == '\0') goto LAB_1101790d;
    if (local_1aa != 0) {
      FUN_11011800(param_1,*param_3,&local_100,(uint)local_1aa);
      *(undefined1 *)((int)&local_100 + (uint)local_1aa) = 0;
    }
    cVar3 = FUN_110062b0(&local_200,'\0');
    if (cVar3 == '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x03');
    }
    else {
      FUN_11006270((uint *)(param_2 + 0xc),'\x03');
    }
    cVar3 = FUN_110062b0(&local_200,'\x01');
    if (cVar3 == '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x04');
    }
    else {
      FUN_11006270((uint *)(param_2 + 0xc),'\x04');
    }
    cVar3 = FUN_110062b0(&local_200,'\x02');
    if (cVar3 == '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\x05');
    }
    else {
      FUN_11006270((uint *)(param_2 + 0xc),'\x05');
    }
    puVar1 = (uint *)(param_2 + 0xc);
    FUN_11006290(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    *(undefined4 *)(param_2 + 0x10) = local_1fc;
    *(undefined4 *)(param_2 + 0x14) = local_1f8;
    *(undefined4 *)(param_2 + 0x1c) = local_1f0;
    *(undefined4 *)(param_2 + 0x18) = local_1f4;
    *(undefined4 *)(param_2 + 0x20) = local_1ec;
    *(undefined4 *)(param_2 + 0x24) = local_1e8;
    *(undefined4 *)(param_2 + 0x28) = local_1e4;
    *(undefined4 *)(param_2 + 0x2c) = local_1e0;
    *(undefined4 *)(param_2 + 0x30) = local_1dc;
    psVar8 = (short *)local_1d8;
    psVar10 = (short *)(param_2 + 0x34);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar10 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      psVar10 = psVar10 + 2;
    }
    *psVar10 = *psVar8;
    if (*(short *)(param_2 + 0x34) == 0x1c) {
      pcVar5 = FUN_11027da0((char *)&local_100);
      *(char **)(param_2 + 0x3e) = pcVar5;
    }
  }
  else {
    local_200._0_1_ = 0;
    cVar3 = FUN_11011800(param_1,*param_3,&local_258,0x58);
    if (cVar3 == '\0') {
LAB_1101790d:
      *(undefined1 *)((int)param_3 + 0x12) = 0;
      goto LAB_11017918;
    }
    if (local_202 != 0) {
      FUN_11011800(param_1,*param_3,&local_100,(uint)local_202);
      *(undefined1 *)((int)&local_100 + (uint)local_202) = 0;
    }
    if (local_201 != 0) {
      FUN_11011800(param_1,*param_3,&local_200,(uint)local_201);
      *(undefined1 *)((int)&local_200 + (uint)local_201) = 0;
    }
    *(undefined4 *)(param_2 + 0xc) = local_258;
    *(undefined4 *)(param_2 + 0x10) = local_254;
    *(undefined4 *)(param_2 + 0x14) = local_250;
    *(undefined4 *)(param_2 + 0x1c) = local_248;
    *(undefined4 *)(param_2 + 0x18) = local_24c;
    *(undefined4 *)(param_2 + 0x20) = local_244;
    *(undefined4 *)(param_2 + 0x24) = local_240;
    *(undefined4 *)(param_2 + 0x28) = local_23c;
    *(undefined4 *)(param_2 + 0x2c) = local_238;
    *(undefined4 *)(param_2 + 0x30) = local_234;
    FUN_1101e9c0();
    puVar7 = local_230;
    puVar9 = (undefined4 *)(param_2 + 0x34);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
    if (*(short *)(param_2 + 0x34) == 0x1c) {
      pcVar5 = FUN_11027da0((char *)&local_100);
      *(char **)(param_2 + 0x3e) = pcVar5;
    }
    if ((*(short *)(param_2 + 0x34) == 0xd) || (*(short *)(param_2 + 0x34) == 0x1f)) {
      pcVar5 = FUN_11027da0((char *)&local_200);
      *(char **)(param_2 + 0x38) = pcVar5;
    }
  }
  *(undefined1 *)((int)param_3 + 0x12) = 1;
LAB_11017918:
  if (*(short *)(param_2 + 0x34) == 0x1c) {
    *(undefined4 *)(param_2 + 0x36) = 0;
  }
  if ((*(ushort *)(param_2 + 0x12) & 0x800) != 0) {
    uVar4 = *(ushort *)(param_2 + 0x12) & 0xf7ff;
    *(ushort *)(param_2 + 0x12) = uVar4;
    *(ushort *)(param_2 + 0x12) = uVar4 | 0x100;
  }
  FUN_11011940((short *)(param_2 + 0x34),(short *)(param_2 + 0x24));
  return;
}


