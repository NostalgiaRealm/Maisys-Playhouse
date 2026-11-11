
/* ==== FUN_110042c0 @ 110042c0 ==== 
 * signature: uint __cdecl FUN_110042c0(undefined4 param_1, int param_2, int param_3)
 * body: 110042c0-1100430c
 */

uint __cdecl FUN_110042c0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_3 + 0xe) >> 0x18;
  cVar1 = (char)((uint)*(int *)(param_3 + 0xe) >> 0x18);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_3 + 8) = 0x14;
    *(undefined2 *)(param_3 + 0xc) = 3;
    return uVar2 & 0xffffff00;
  }
  if (cVar1 == '\x01') {
    iVar3 = FUN_11013f20(param_1,*(int *)(param_2 + 0x14));
    uVar2 = iVar3 + 0x14;
    *(uint *)(param_3 + 8) = uVar2;
  }
  *(undefined2 *)(param_3 + 0xc) = 3;
  return uVar2 & 0xffffff00;
}


