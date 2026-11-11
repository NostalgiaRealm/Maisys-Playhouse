
/* ==== FUN_11026ca0 @ 11026ca0 ==== 
 * signature: undefined __cdecl FUN_11026ca0(int param_1, int param_2)
 * body: 11026ca0-11026d07
 */

void __cdecl FUN_11026ca0(int param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  bVar2 = (*(byte *)(param_2 + 0x20) ^ *(byte *)(param_1 + 0x1c)) & 1 ^ *(byte *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar2;
  bVar2 = (*(byte *)(param_2 + 0x20) ^ bVar2) & 2 ^ bVar2;
  *(byte *)(param_1 + 0x1c) = bVar2;
  bVar2 = (*(byte *)(param_2 + 0x20) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_1 + 0x1c) = bVar2;
  *(byte *)(param_1 + 0x1c) = (*(byte *)(param_2 + 0x20) ^ bVar2) & 8 ^ bVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x22) = uVar1;
  return;
}


