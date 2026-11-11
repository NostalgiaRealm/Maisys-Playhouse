
/* ==== FUN_11002150 @ 11002150 ==== 
 * signature: undefined __cdecl FUN_11002150(undefined4 * param_1, int param_2)
 * body: 11002150-110021a7
 */

void __cdecl FUN_11002150(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_30 [3];
  undefined2 local_24;
  undefined2 local_22;
  
  *(undefined1 *)(param_2 + 0xe) = 1;
  bVar1 = *(byte *)(param_2 + 0x66);
  *(byte *)(param_2 + 0x66) = bVar1 & 0xfe;
  *(byte *)(param_2 + 0x66) = bVar1 & 0xfc;
  *(byte *)(param_2 + 0x66) = bVar1 & 0xf8;
  *(byte *)(param_2 + 0x66) = bVar1 & 0xf0;
  uVar2 = FUN_1100fc30((int)param_1);
  FUN_1100fc50(param_1,uVar2,local_30);
  *(undefined2 *)(param_2 + 0x68) = local_24;
  *(undefined2 *)(param_2 + 0x6a) = local_22;
  return;
}


