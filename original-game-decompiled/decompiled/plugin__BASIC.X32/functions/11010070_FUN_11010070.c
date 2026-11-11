
/* ==== FUN_11010070 @ 11010070 ==== 
 * signature: undefined __cdecl FUN_11010070(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11010070-11010213
 */

void __cdecl FUN_11010070(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  cVar2 = (char)((uint)*(undefined4 *)((int)param_3 + 0xe) >> 0x18);
  if (cVar2 == '\0') {
    local_1c = *(uint *)(param_2 + 0xc);
    local_18 = *(uint *)(param_2 + 0x10);
    local_14 = *(uint *)(param_2 + 0x14);
    local_10 = *(uint *)(param_2 + 0x18);
    local_a = *(undefined2 *)(param_2 + 0x1e);
    local_8 = *(undefined2 *)(param_2 + 0x20);
    local_6 = *(undefined2 *)(param_2 + 0x22);
    local_4 = *(undefined2 *)(param_2 + 0x24);
    local_c = *(undefined2 *)(param_2 + 0x1c);
    local_2 = *(undefined2 *)(param_2 + 0x3c);
  }
  else if (cVar2 == '\x01') {
    uVar1 = *(uint *)(param_2 + 0xc);
    local_1c = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)(param_2 + 0x10);
    local_18 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)(param_2 + 0x14);
    local_14 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)(param_2 + 0x18);
    local_10 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    local_a = CONCAT11((char)*(undefined2 *)(param_2 + 0x1e),
                       (char)((ushort)*(undefined2 *)(param_2 + 0x1e) >> 8));
    local_8 = CONCAT11((char)*(undefined2 *)(param_2 + 0x20),
                       (char)((ushort)*(undefined2 *)(param_2 + 0x20) >> 8));
    local_6 = CONCAT11((char)*(undefined2 *)(param_2 + 0x22),
                       (char)((ushort)*(undefined2 *)(param_2 + 0x22) >> 8));
    local_4 = CONCAT11((char)*(undefined2 *)(param_2 + 0x24),
                       (char)((ushort)*(undefined2 *)(param_2 + 0x24) >> 8));
    local_c = CONCAT11((char)*(undefined2 *)(param_2 + 0x1c),
                       (char)((ushort)*(undefined2 *)(param_2 + 0x1c) >> 8));
    local_2 = CONCAT11((char)*(undefined2 *)(param_2 + 0x3c),
                       (char)((ushort)*(undefined2 *)(param_2 + 0x3c) >> 8));
  }
  FUN_11011780(param_1,*param_3,&local_1c,0x1c);
  return;
}


