
/* ==== FUN_11013fc0 @ 11013fc0 ==== 
 * signature: undefined4 * __cdecl FUN_11013fc0(undefined4 * param_1, undefined4 param_2)
 * body: 11013fc0-110141c8
 */

undefined4 * __cdecl FUN_11013fc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint local_120;
  byte local_11c;
  int local_118 [2];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  FUN_11011800(param_1,param_2,local_118,4);
  puVar1 = FUN_11013ca0(param_1);
  if (local_118[0] < 0) {
    if ((3 < -local_118[0]) && (local_118[0] == -5 || -local_118[0] < 5)) {
      FUN_11011800(param_1,param_2,&local_110,0x10);
      puVar1[1] = local_110;
      puVar1[2] = local_10c;
      puVar1[5] = local_108;
      puVar1[8] = local_104;
      FUN_11002780(param_1,puVar1 + 3,puVar1[1]);
      FUN_11002780(param_1,puVar1 + 6,puVar1[5] * 0xe);
      FUN_11002780(param_1,puVar1 + 9,puVar1[8] << 2);
      FUN_11013e60();
      FUN_110141d0(param_1,(int)puVar1);
      iVar4 = 0;
      FUN_11011800(param_1,param_2,puVar1[4],puVar1[1]);
      if (0 < (int)puVar1[5]) {
        iVar3 = 0;
        do {
          FUN_11011800(param_1,param_2,&local_120,6);
          if (local_11c == 0) {
            local_100[0] = 0;
          }
          else {
            FUN_11011800(param_1,param_2,local_100,(uint)local_11c);
          }
          *(undefined2 *)(puVar1[7] + iVar3) = 0x1c;
          *(undefined4 *)(puVar1[7] + 2 + iVar3) = 0;
          iVar3 = iVar3 + 0xe;
          iVar4 = iVar4 + 1;
          *(uint *)(puVar1[7] + -8 + iVar3) = local_120;
          uVar2 = FUN_110024d0(param_1,local_100);
          *(undefined4 *)(puVar1[7] + -4 + iVar3) = uVar2;
        } while (iVar4 < (int)puVar1[5]);
      }
      iVar4 = 0;
      if (0 < (int)puVar1[8]) {
        iVar3 = 0;
        do {
          FUN_11011800(param_1,param_2,&local_120,2);
          if ((char)local_120 == '\0') {
            local_100[0] = 0;
          }
          else {
            FUN_11011800(param_1,param_2,local_100,local_120 & 0xff);
          }
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + 1;
          uVar2 = FUN_110024d0(param_1,local_100);
          *(undefined4 *)(puVar1[10] + -4 + iVar3) = uVar2;
        } while (iVar4 < (int)puVar1[8]);
      }
      FUN_11013e70();
    }
  }
  return puVar1;
}


