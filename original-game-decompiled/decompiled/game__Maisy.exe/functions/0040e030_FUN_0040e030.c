
/* ==== FUN_0040e030 @ 0040e030 ==== 
 * signature: undefined __fastcall FUN_0040e030(int param_1)
 * body: 0040e030-0040e05f
 */

void __fastcall FUN_0040e030(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x6a);
  *(byte *)(param_1 + 0x6a) = bVar1 & 0xdf;
  *(byte *)(param_1 + 0x6a) = bVar1 & 0x9f;
  *(byte *)(param_1 + 0x6a) = bVar1 & 0x9d;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  *(byte *)(param_1 + 0x6a) = bVar1 & 0x99;
  *(byte *)(param_1 + 0x6a) = bVar1 & 0x99 | 8;
  bVar1 = *(byte *)(param_1 + 0x6b);
  *(byte *)(param_1 + 0x6b) = bVar1 & 0xfd;
  *(byte *)(param_1 + 0x6b) = bVar1 & 0xf5;
  return;
}


