
/* ==== FUN_00478200 @ 00478200 ==== 
 * signature: uint __cdecl FUN_00478200(int param_1)
 * body: 00478200-0047821e
 */

uint __cdecl FUN_00478200(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a);
  uVar2 = FUN_0046a8d0(*(int *)(iVar1 + 2));
  *(uint *)(iVar1 + 6) = uVar2;
  return uVar2 & 0xffffff00;
}


