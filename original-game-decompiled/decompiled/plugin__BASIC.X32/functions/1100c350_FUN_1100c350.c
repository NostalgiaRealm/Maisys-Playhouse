
/* ==== FUN_1100c350 @ 1100c350 ==== 
 * signature: uint __cdecl FUN_1100c350(undefined4 param_1, int param_2, uint param_3)
 * body: 1100c350-1100c370
 */

uint __cdecl FUN_1100c350(undefined4 param_1,int param_2,uint param_3)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x28);
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(int *)(param_3 + 8) = sVar1 * 0xc + 0x28;
  return param_3 & 0xffffff00;
}


