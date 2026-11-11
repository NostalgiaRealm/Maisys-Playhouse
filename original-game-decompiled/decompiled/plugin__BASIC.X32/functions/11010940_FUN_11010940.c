
/* ==== FUN_11010940 @ 11010940 ==== 
 * signature: uint __cdecl FUN_11010940(undefined4 * param_1, int param_2)
 * body: 11010940-110109da
 */

uint __cdecl FUN_11010940(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(param_2 + 0x3e) = 1;
  *(byte *)(param_2 + 0x54) = *(byte *)(param_2 + 0x54) | 1;
  DVar1 = timeGetTime();
  *(uint *)(param_2 + 0x44) = (DVar1 * 6) / 100;
  iVar2 = FUN_110109e0((byte *)(param_2 + 0x26));
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x44) + iVar2 / (int)*(short *)(param_2 + 0x24);
  FUN_11004840(param_1,10,1);
  FUN_11004840(param_1,3,1);
  if ((*(short *)(param_2 + 0x1c) == 0) && (*(int *)(param_2 + 0xc) != 0xc9)) {
    FUN_11010bb0(param_1,param_2,0xde,0,'\x01');
  }
  uVar3 = FUN_11010bb0(param_1,param_2,0x1f7,0,'\0');
  return uVar3 & 0xffffff00;
}


