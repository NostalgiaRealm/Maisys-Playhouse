
/* ==== FUN_004782c0 @ 004782c0 ==== 
 * signature: uint __cdecl FUN_004782c0(int param_1)
 * body: 004782c0-004782fe
 */

uint __cdecl FUN_004782c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  iVar2 = FUN_0048a080(DAT_004dcfa4,(char *)*puVar1,*(short *)(puVar1 + 1),*(int *)((int)puVar1 + 6)
                       ,*(short **)((int)puVar1 + 10),*(undefined4 *)(*(int *)(param_1 + 0x16) + 8))
  ;
  uVar3 = FUN_0048a290(iVar2);
  *(short *)((int)puVar1 + 0xe) = (short)uVar3;
  return uVar3 & 0xffffff00;
}


