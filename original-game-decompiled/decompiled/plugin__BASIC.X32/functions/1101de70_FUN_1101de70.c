
/* ==== FUN_1101de70 @ 1101de70 ==== 
 * signature: undefined __cdecl FUN_1101de70(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1101de70-1101e09f
 */

void __cdecl FUN_1101de70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  short local_234 [23];
  undefined2 local_206;
  byte local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  short local_1f0;
  undefined4 local_1ee;
  undefined2 local_1c2;
  byte local_1c0;
  byte local_1bf;
  undefined1 local_100 [256];
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar2 = FUN_11011800(param_1,*param_3,&local_200,0x42);
    if (cVar2 != '\0') {
      if (local_1c0 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_1c0);
        local_100[local_1c0] = 0;
        FUN_110046e0(param_1,local_100,&local_200,&local_1fc);
      }
      if (local_1bf != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_1bf);
        local_100[local_1bf] = 0;
        FUN_110046e0(param_1,local_100,&local_1f8,&local_1f4);
      }
      *(undefined4 *)(param_2 + 0xe) = local_200;
      *(undefined4 *)(param_2 + 0x12) = local_1fc;
      *(undefined2 *)(param_2 + 0x6e) = local_1c2;
      *(undefined4 *)(param_2 + 0x16) = local_1f8;
      *(undefined4 *)(param_2 + 0x1a) = local_1f4;
      if (local_1f0 == 0xf) {
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(undefined2 *)(param_2 + 0x1e) = 0x1c;
        *(undefined4 *)(param_2 + 0x24) = local_1ee;
      }
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar2 = FUN_11011800(param_1,*param_3,&local_244,0x42);
    if (cVar2 != '\0') {
      if (local_204 != 0) {
        FUN_11011800(param_1,*param_3,&local_200,(uint)local_204);
        *(undefined1 *)((int)&local_200 + (uint)local_204) = 0;
      }
      *(undefined4 *)(param_2 + 0xe) = local_244;
      *(undefined4 *)(param_2 + 0x12) = local_240;
      *(undefined4 *)(param_2 + 0x16) = local_23c;
      *(undefined4 *)(param_2 + 0x1a) = local_238;
      FUN_1101e9c0();
      psVar5 = local_234;
      psVar6 = (short *)(param_2 + 0x1e);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
        psVar5 = psVar5 + 2;
        psVar6 = psVar6 + 2;
      }
      *psVar6 = *psVar5;
      sVar1 = *(short *)(param_2 + 0x1e);
      if (sVar1 == 0x1c) {
        pcVar3 = FUN_11027da0((char *)&local_200);
        *(char **)(param_2 + 0x28) = pcVar3;
        *(undefined4 *)(param_2 + 0x20) = 0;
      }
      else if (sVar1 == 0xd) {
        pcVar3 = FUN_11027da0(&DAT_11036554);
        *(char **)(param_2 + 0x22) = pcVar3;
      }
      *(undefined2 *)(param_2 + 0x6e) = local_206;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  if (*(short *)(param_2 + 0x1e) == 0x1c) {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  return;
}


