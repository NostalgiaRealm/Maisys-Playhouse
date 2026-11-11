
/* ==== FUN_11025880 @ 11025880 ==== 
 * signature: undefined __cdecl FUN_11025880(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11025880-11025a69
 */

void __cdecl FUN_11025880(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c [11];
  undefined4 local_20e;
  undefined4 *local_20a;
  short local_206;
  byte local_204;
  byte local_203;
  char local_200 [256];
  char local_100 [256];
  
  if (*(short *)(param_3 + 3) == 2) {
    local_200[0] = '\0';
    cVar1 = FUN_11011800(param_1,*param_3,&local_260,0x5e);
    if (cVar1 != '\0') {
      if (local_204 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_204);
        local_100[local_204] = '\0';
      }
      if (local_203 != 0) {
        FUN_11011800(param_1,*param_3,local_200,(uint)local_203);
        local_200[local_203] = '\0';
      }
      if (local_206 != 0) {
        FUN_11011880(param_1,*param_3,(int)local_206);
        local_206 = 0;
      }
      local_20e = 0;
      local_20a = FUN_11013fc0(param_1,*param_3);
      *(undefined4 *)(param_2 + 0xc) = local_260;
      *(undefined4 *)(param_2 + 0x10) = local_25c;
      *(undefined4 *)(param_2 + 0x14) = local_258;
      *(undefined4 *)(param_2 + 0x18) = local_254;
      *(undefined4 *)(param_2 + 0x1c) = local_250;
      *(undefined4 *)(param_2 + 0x20) = local_24c;
      *(undefined4 *)(param_2 + 0x24) = local_248;
      *(undefined4 *)(param_2 + 0x28) = local_244;
      *(undefined4 *)(param_2 + 0x2c) = local_240;
      FUN_1101e9c0();
      puVar4 = local_23c;
      puVar5 = (undefined4 *)(param_2 + 0x30);
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      if (*(short *)(param_2 + 0x30) == 0x1c) {
        pcVar2 = FUN_11027da0(local_100);
        *(char **)(param_2 + 0x3a) = pcVar2;
      }
      if ((*(short *)(param_2 + 0x30) == 0xd) || (*(short *)(param_2 + 0x30) == 0x1f)) {
        pcVar2 = FUN_11027da0(local_200);
        *(char **)(param_2 + 0x34) = pcVar2;
      }
      if (*(LPVOID *)(param_2 + 0x62) != (LPVOID)0x0) {
        FUN_11013d10(param_1,*(LPVOID *)(param_2 + 0x62));
      }
      *(undefined4 **)(param_2 + 0x62) = local_20a;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  FUN_11011940((short *)(param_2 + 0x30),(short *)(param_2 + 0x20));
  return;
}


