
/* ==== FUN_11001340 @ 11001340 ==== 
 * signature: undefined __cdecl FUN_11001340(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11001340-110019ad
 */

void __cdecl FUN_11001340(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  undefined4 *puVar7;
  short *psVar8;
  short local_25c;
  undefined4 local_25a;
  undefined4 local_256;
  undefined4 local_252;
  undefined4 local_24e;
  undefined4 local_24a;
  undefined4 local_246;
  undefined4 local_242;
  undefined4 local_23e;
  undefined4 local_23a;
  undefined4 local_236;
  short local_232;
  undefined4 local_230;
  byte local_204;
  byte local_203;
  byte local_202;
  undefined2 local_15c;
  undefined4 local_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132 [11];
  byte local_104;
  byte local_103;
  char local_100 [256];
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar2 = FUN_11011800(param_1,*param_3,&local_25c,0x5c);
    if (cVar2 == '\0') goto LAB_11001988;
    if (local_204 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_204);
      local_100[local_204] = '\0';
      FUN_110046e0(param_1,local_100,&local_25a,&local_256);
    }
    if (local_203 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_203);
      local_100[local_203] = '\0';
      FUN_110046e0(param_1,local_100,&local_252,&local_24e);
    }
    if (local_202 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_202);
      local_100[local_202] = '\0';
      FUN_110046e0(param_1,local_100,&local_24a,&local_246);
    }
    puVar1 = (ushort *)(param_2 + 0xc);
    *puVar1 = 0;
    cVar2 = FUN_11006310(&local_25c,'\0');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x03');
    }
    else {
      FUN_110062d0(puVar1,'\x03');
    }
    cVar2 = FUN_11006310(&local_25c,'\x01');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x04');
    }
    else {
      FUN_110062d0(puVar1,'\x04');
    }
    cVar2 = FUN_11006310(&local_25c,'\x02');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x05');
    }
    else {
      FUN_110062d0(puVar1,'\x05');
    }
    cVar2 = FUN_11006310(&local_25c,'\x03');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x06');
    }
    else {
      FUN_110062d0(puVar1,'\x06');
    }
    cVar2 = FUN_11006310(&local_25c,'\x04');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\a');
    }
    else {
      FUN_110062d0(puVar1,'\a');
    }
    cVar2 = FUN_11006310(&local_25c,'\x05');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\b');
    }
    else {
      FUN_110062d0(puVar1,'\b');
    }
    cVar2 = FUN_11006310(&local_25c,'\x06');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\t');
    }
    else {
      FUN_110062d0(puVar1,'\t');
    }
    FUN_110062f0(puVar1,'\0');
    FUN_110062f0(puVar1,'\x01');
    FUN_110062f0(puVar1,'\x02');
    *(undefined4 *)(param_2 + 0x10) = local_25a;
    *(undefined4 *)(param_2 + 0x14) = local_256;
    *(undefined4 *)(param_2 + 0x18) = local_252;
    *(undefined4 *)(param_2 + 0x1c) = local_24e;
    *(undefined4 *)(param_2 + 0x20) = local_24a;
    *(undefined4 *)(param_2 + 0x24) = local_246;
    *(undefined4 *)(param_2 + 0x28) = local_242;
    *(undefined4 *)(param_2 + 0x2c) = local_23e;
    *(undefined4 *)(param_2 + 0x30) = local_23a;
    *(undefined4 *)(param_2 + 0x34) = local_236;
    psVar6 = &local_232;
    psVar8 = (short *)(param_2 + 0x38);
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      psVar8 = psVar8 + 2;
    }
    *psVar8 = *psVar6;
    if (local_232 == 0xf) {
      *(undefined4 *)(param_2 + 0x42) = 0;
      *(short *)(param_2 + 0x38) = 0x1c;
      *(undefined4 *)(param_2 + 0x3e) = local_230;
    }
  }
  else if (*(short *)(param_3 + 3) == 1) {
    cVar2 = FUN_11011800(param_1,*param_3,&local_25c,0x5a);
    if (cVar2 == '\0') goto LAB_11001988;
    if (local_204 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_204);
      local_100[local_204] = '\0';
    }
    puVar1 = (ushort *)(param_2 + 0xc);
    *puVar1 = 0;
    cVar2 = FUN_11006310(&local_25c,'\0');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x03');
    }
    else {
      FUN_110062d0(puVar1,'\x03');
    }
    cVar2 = FUN_11006310(&local_25c,'\x01');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x04');
    }
    else {
      FUN_110062d0(puVar1,'\x04');
    }
    cVar2 = FUN_11006310(&local_25c,'\x02');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x05');
    }
    else {
      FUN_110062d0(puVar1,'\x05');
    }
    cVar2 = FUN_11006310(&local_25c,'\x03');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\x06');
    }
    else {
      FUN_110062d0(puVar1,'\x06');
    }
    cVar2 = FUN_11006310(&local_25c,'\x04');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\a');
    }
    else {
      FUN_110062d0(puVar1,'\a');
    }
    cVar2 = FUN_11006310(&local_25c,'\x05');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\b');
    }
    else {
      FUN_110062d0(puVar1,'\b');
    }
    cVar2 = FUN_11006310(&local_25c,'\x06');
    if (cVar2 == '\0') {
      FUN_110062f0(puVar1,'\t');
    }
    else {
      FUN_110062d0(puVar1,'\t');
    }
    FUN_110062f0(puVar1,'\0');
    FUN_110062f0(puVar1,'\x01');
    FUN_110062f0(puVar1,'\x02');
    *(undefined4 *)(param_2 + 0x10) = local_25a;
    *(undefined4 *)(param_2 + 0x14) = local_256;
    *(undefined4 *)(param_2 + 0x18) = local_252;
    *(undefined4 *)(param_2 + 0x1c) = local_24e;
    *(undefined4 *)(param_2 + 0x20) = local_24a;
    *(undefined4 *)(param_2 + 0x24) = local_246;
    *(undefined4 *)(param_2 + 0x28) = local_242;
    *(undefined4 *)(param_2 + 0x2c) = local_23e;
    *(undefined4 *)(param_2 + 0x30) = local_23a;
    *(undefined4 *)(param_2 + 0x34) = local_236;
    psVar6 = &local_232;
    psVar8 = (short *)(param_2 + 0x38);
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      psVar8 = psVar8 + 2;
    }
    *psVar8 = *psVar6;
    if (*(short *)(param_2 + 0x38) == 0x1c) {
      pcVar3 = FUN_11027da0(local_100);
      *(char **)(param_2 + 0x42) = pcVar3;
    }
  }
  else {
    local_25c._0_1_ = 0;
    cVar2 = FUN_11011800(param_1,*param_3,&local_15c,0x5a);
    if (cVar2 == '\0') {
LAB_11001988:
      *(undefined1 *)((int)param_3 + 0x12) = 0;
      goto LAB_11001993;
    }
    if (local_104 != 0) {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_104);
      local_100[local_104] = '\0';
    }
    if (local_103 != 0) {
      FUN_11011800(param_1,*param_3,&local_25c,(uint)local_103);
      *(undefined1 *)((int)&local_25c + (uint)local_103) = 0;
    }
    *(undefined2 *)(param_2 + 0xc) = local_15c;
    *(undefined4 *)(param_2 + 0x10) = local_15a;
    *(undefined4 *)(param_2 + 0x14) = local_156;
    *(undefined4 *)(param_2 + 0x18) = local_152;
    *(undefined4 *)(param_2 + 0x1c) = local_14e;
    *(undefined4 *)(param_2 + 0x20) = local_14a;
    *(undefined4 *)(param_2 + 0x24) = local_146;
    *(undefined4 *)(param_2 + 0x28) = local_142;
    *(undefined4 *)(param_2 + 0x2c) = local_13e;
    *(undefined4 *)(param_2 + 0x30) = local_13a;
    *(undefined4 *)(param_2 + 0x34) = local_136;
    FUN_1101e9c0();
    puVar5 = local_132;
    puVar7 = (undefined4 *)(param_2 + 0x38);
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
    if (*(short *)(param_2 + 0x38) == 0x1c) {
      pcVar3 = FUN_11027da0(local_100);
      *(char **)(param_2 + 0x42) = pcVar3;
    }
    if (*(short *)(param_2 + 0x38) == 0xd) {
      pcVar3 = FUN_11027da0((char *)&local_25c);
      *(char **)(param_2 + 0x3c) = pcVar3;
    }
  }
  *(undefined1 *)((int)param_3 + 0x12) = 1;
LAB_11001993:
  FUN_11011940((short *)(param_2 + 0x38),(short *)(param_2 + 0x28));
  return;
}


