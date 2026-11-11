
/* ==== FUN_11018ac0 @ 11018ac0 ==== 
 * signature: undefined __cdecl FUN_11018ac0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11018ac0-11018d4a
 */

void __cdecl FUN_11018ac0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  short local_22a;
  uint local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  byte local_214;
  byte local_213;
  short local_212;
  undefined4 local_20c;
  undefined4 local_204;
  char local_200 [256];
  char local_100 [256];
  
  cVar2 = FUN_11011800(param_1,*param_3,&local_228,0x28);
  if (cVar2 != '\0') {
    if (*(LPVOID *)(param_2 + 0x20) != (LPVOID)0x0) {
      FUN_11029180(*(LPVOID *)(param_2 + 0x20));
    }
    if (local_212 == 0) {
      *(undefined4 *)(param_2 + 0x20) = 0;
    }
    else {
      iVar3 = FUN_11029420(local_212 * 0x58);
      *(int *)(param_2 + 0x20) = iVar3;
      if (iVar3 == 0) {
        *(undefined1 *)((int)param_3 + 0x12) = 0;
        return;
      }
      local_22a = 0;
      if (0 < local_212) {
        do {
          iVar3 = local_22a * 0x58;
          FUN_11011800(param_1,*param_3,*(int *)(param_2 + 0x20) + iVar3,0x58);
          bVar1 = *(byte *)(*(int *)(param_2 + 0x20) + 0x56 + iVar3);
          if (bVar1 != 0) {
            FUN_11011800(param_1,*param_3,local_200,(uint)bVar1);
            local_200[*(byte *)(*(int *)(param_2 + 0x20) + 0x56 + iVar3)] = '\0';
          }
          bVar1 = *(byte *)(*(int *)(param_2 + 0x20) + 0x57 + iVar3);
          if (bVar1 != 0) {
            FUN_11011800(param_1,*param_3,local_100,(uint)bVar1);
            local_100[*(byte *)(*(int *)(param_2 + 0x20) + 0x57 + iVar3)] = '\0';
          }
          FUN_1101e9c0();
          iVar5 = *(int *)(param_2 + 0x20) + iVar3;
          if (*(short *)(iVar5 + 0x28) == 0x1c) {
            pcVar4 = FUN_11027da0(local_200);
            *(char **)(iVar5 + 0x32) = pcVar4;
            *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x2a + iVar3) = 0;
          }
          iVar5 = *(int *)(param_2 + 0x20) + iVar3;
          if (*(short *)(iVar5 + 0x28) == 0xd) {
            pcVar4 = FUN_11027da0(local_100);
            *(char **)(iVar5 + 0x2c) = pcVar4;
          }
          iVar3 = *(int *)(param_2 + 0x20) + iVar3;
          FUN_11011940((short *)(iVar3 + 0x28),(short *)(iVar3 + 0x18));
          local_22a = local_22a + 1;
        } while (local_22a < local_212);
      }
    }
    if (local_214 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_214);
    }
    if (local_213 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_213);
    }
    FUN_11006290(&local_228,'\x02');
    FUN_11006290(&local_228,'\0');
    FUN_11006290(&local_228,'\x01');
    *(uint *)(param_2 + 0xc) = local_228;
    *(undefined4 *)(param_2 + 0x10) = local_224;
    *(undefined4 *)(param_2 + 0x14) = local_220;
    *(undefined4 *)(param_2 + 0x18) = local_21c;
    *(short *)(param_2 + 0x28) = local_212;
    *(undefined4 *)(param_2 + 0x1c) = local_218;
    *(undefined4 *)(param_2 + 0x24) = local_20c;
    *(undefined4 *)(param_2 + 0x46) = local_204;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


