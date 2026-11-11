
/* ==== FUN_11026d10 @ 11026d10 ==== 
 * signature: undefined __cdecl FUN_11026d10(int param_1, int param_2)
 * body: 11026d10-11026d77
 */

void __cdecl FUN_11026d10(int param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  bVar2 = (*(byte *)(param_1 + 0x1c) ^ *(byte *)(param_2 + 0x20)) & 1 ^ *(byte *)(param_2 + 0x20);
  *(byte *)(param_2 + 0x20) = bVar2;
  bVar2 = (*(byte *)(param_1 + 0x1c) ^ bVar2) & 2 ^ bVar2;
  *(byte *)(param_2 + 0x20) = bVar2;
  bVar2 = (*(byte *)(param_1 + 0x1c) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_2 + 0x20) = bVar2;
  *(byte *)(param_2 + 0x20) = (*(byte *)(param_1 + 0x1c) ^ bVar2) & 8 ^ bVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x22);
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)(param_2 + 0x26) = uVar1;
  return;
}


