
/* ==== FUN_11023c50 @ 11023c50 ==== 
 * signature: undefined __cdecl FUN_11023c50(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11023c50-11023f63
 */

void __cdecl FUN_11023c50(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 local_164 [20];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  byte local_140;
  byte local_13f;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined4 local_13a;
  undefined4 local_136;
  undefined2 local_132;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_12a;
  undefined4 local_126;
  undefined2 local_122;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  short local_110;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined1 local_100 [256];
  
  iVar1 = param_3[2];
  if (*(int *)(iVar1 + 8) < 3) {
    *(undefined1 *)(param_3 + 3) = 0;
    return;
  }
  if (*(int *)(iVar1 + 8) == 3) {
    cVar2 = FUN_11011700(param_1,*param_3,local_164,iVar1,0x54);
    if (cVar2 != '\0') {
      if (local_140 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_140);
        local_100[local_140] = 0;
        FUN_110046e0(param_1,local_100,&local_150,&local_14c);
      }
      if (local_13f != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_13f);
        local_100[local_13f] = 0;
        FUN_110046e0(param_1,local_100,&local_148,&local_144);
      }
      *(undefined4 *)(param_2 + 0x10) = local_150;
      *(undefined4 *)(param_2 + 0x14) = local_14c;
      *(undefined2 *)(param_2 + 0x20) = local_13e;
      *(undefined4 *)(param_2 + 0x18) = local_148;
      *(undefined2 *)(param_2 + 0x22) = local_13c;
      *(undefined4 *)(param_2 + 0x1c) = local_144;
      *(undefined2 *)(param_2 + 0x2c) = local_132;
      *(undefined4 *)(param_2 + 0x24) = local_13a;
      *(undefined4 *)(param_2 + 0x28) = local_136;
      *(undefined4 *)(param_2 + 0x2e) = local_130;
      *(undefined2 *)(param_2 + 0x32) = local_12c;
      *(undefined4 *)(param_2 + 0x34) = local_12a;
      *(undefined2 *)(param_2 + 0x3c) = local_122;
      *(undefined4 *)(param_2 + 0x38) = local_126;
      *(undefined4 *)(param_2 + 0x3e) = local_120;
      *(undefined4 *)(param_2 + 0x42) = local_11c;
      *(undefined4 *)(param_2 + 0x46) = local_118;
      *(undefined2 *)(param_2 + 0x4a) = local_114;
      *(undefined2 *)(param_2 + 0x4c) = local_112;
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(undefined2 *)(param_2 + 0x56) = 0;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else {
    cVar2 = FUN_11011700(param_1,*param_3,local_164,iVar1,0x62);
    if (cVar2 != '\0') {
      if (local_140 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_140);
        local_100[local_140] = 0;
        FUN_110046e0(param_1,local_100,&local_150,&local_14c);
      }
      if (local_13f != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_13f);
        local_100[local_13f] = 0;
        FUN_110046e0(param_1,local_100,&local_148,&local_144);
      }
      if (local_110 != 0) {
        FUN_11011880(param_1,*param_3,(int)local_110 << 3);
      }
      *(undefined4 *)(param_2 + 0x10) = local_150;
      *(undefined4 *)(param_2 + 0x14) = local_14c;
      *(undefined2 *)(param_2 + 0x20) = local_13e;
      *(undefined4 *)(param_2 + 0x18) = local_148;
      *(undefined2 *)(param_2 + 0x22) = local_13c;
      *(undefined4 *)(param_2 + 0x1c) = local_144;
      *(undefined2 *)(param_2 + 0x2c) = local_132;
      *(undefined4 *)(param_2 + 0x24) = local_13a;
      *(undefined4 *)(param_2 + 0x28) = local_136;
      *(undefined4 *)(param_2 + 0x2e) = local_130;
      *(undefined2 *)(param_2 + 0x32) = local_12c;
      *(undefined4 *)(param_2 + 0x34) = local_12a;
      *(undefined2 *)(param_2 + 0x3c) = local_122;
      *(undefined4 *)(param_2 + 0x38) = local_126;
      *(undefined4 *)(param_2 + 0x3e) = local_120;
      *(undefined4 *)(param_2 + 0x42) = local_11c;
      *(undefined4 *)(param_2 + 0x46) = local_118;
      *(undefined2 *)(param_2 + 0x4a) = local_114;
      *(undefined4 *)(param_2 + 0x58) = local_10e;
      *(undefined2 *)(param_2 + 0x4c) = local_112;
      *(undefined4 *)(param_2 + 0x5c) = local_10a;
      *(short *)(param_2 + 0x56) = local_110;
      *(undefined4 *)(param_2 + 0x60) = local_106;
      *(undefined1 *)(param_3 + 3) = 1;
    }
  }
  return;
}


