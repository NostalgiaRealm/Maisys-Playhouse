
/* ==== FUN_11026f20 @ 11026f20 ==== 
 * signature: undefined __cdecl FUN_11026f20(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11026f20-1102726b
 */

void __cdecl FUN_11026f20(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined1 local_12c [16];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  byte local_10c;
  byte local_10b;
  uint local_10a;
  undefined4 local_106;
  byte local_102;
  byte local_101;
  undefined1 local_100 [256];
  
  iVar1 = param_3[2];
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    cVar3 = FUN_11011700(param_1,*param_3,local_12c,iVar1,0x18);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0xc) = local_11c;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) & 0xfe;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else if (iVar2 == 1) {
    cVar3 = FUN_11011700(param_1,*param_3,local_12c,iVar1,0x1c);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = local_11c;
      *(undefined4 *)(param_2 + 0x10) = local_118;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) & 0xfe;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else if (iVar2 == 2) {
    cVar3 = FUN_11011700(param_1,*param_3,local_12c,iVar1,0x22);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = local_11c;
      *(undefined4 *)(param_2 + 0x10) = local_118;
      *(undefined4 *)(param_2 + 0x18) = local_110;
      *(undefined4 *)(param_2 + 0x14) = local_114;
      *(byte *)(param_2 + 0x1c) =
           (*(byte *)(param_2 + 0x1c) ^ local_10c) & 1 ^ *(byte *)(param_2 + 0x1c);
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else if (iVar2 == 3) {
    cVar3 = FUN_11011700(param_1,*param_3,local_12c,iVar1,0x24);
    if (cVar3 != '\0') {
      if (local_10b != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_10b);
        local_100[local_10b] = 0;
        FUN_110046e0(param_1,local_100,&local_11c,&local_118);
      }
      if ((char)local_10a != '\0') {
        FUN_11011800(param_1,*param_3,local_100,local_10a & 0xff);
        local_100[local_10a & 0xff] = 0;
        FUN_110046e0(param_1,local_100,&local_114,&local_110);
      }
      *(undefined4 *)(param_2 + 0xc) = local_11c;
      *(undefined4 *)(param_2 + 0x10) = local_118;
      *(undefined4 *)(param_2 + 0x14) = local_114;
      *(undefined4 *)(param_2 + 0x18) = local_110;
      *(byte *)(param_2 + 0x1c) =
           (local_10c ^ *(byte *)(param_2 + 0x1c)) & 1 ^ *(byte *)(param_2 + 0x1c);
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else {
    cVar3 = FUN_11011700(param_1,*param_3,local_12c,iVar1,0x2c);
    if (cVar3 != '\0') {
      if (local_102 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_102);
        local_100[local_102] = 0;
        FUN_110046e0(param_1,local_100,&local_11c,&local_118);
      }
      if (local_101 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_101);
        local_100[local_101] = 0;
        FUN_110046e0(param_1,local_100,&local_114,&local_110);
      }
      *(undefined4 *)(param_2 + 0xc) = local_11c;
      *(undefined4 *)(param_2 + 0x10) = local_118;
      *(undefined4 *)(param_2 + 0x14) = local_114;
      *(undefined4 *)(param_2 + 0x18) = local_110;
      bVar4 = (local_10c ^ *(byte *)(param_2 + 0x1c)) & 1 ^ *(byte *)(param_2 + 0x1c);
      *(byte *)(param_2 + 0x1c) = bVar4;
      bVar4 = (local_10c ^ bVar4) & 2 ^ bVar4;
      *(byte *)(param_2 + 0x1c) = bVar4;
      bVar4 = (local_10c ^ bVar4) & 4 ^ bVar4;
      *(byte *)(param_2 + 0x1c) = bVar4;
      *(byte *)(param_2 + 0x1c) = (local_10c ^ bVar4) & 8 ^ bVar4;
      *(uint *)(param_2 + 0x1e) = local_10a;
      *(undefined4 *)(param_2 + 0x22) = local_106;
      *(undefined1 *)(param_3 + 3) = 1;
    }
  }
  return;
}


