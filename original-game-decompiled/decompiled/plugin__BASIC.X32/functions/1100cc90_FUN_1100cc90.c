
/* ==== FUN_1100cc90 @ 1100cc90 ==== 
 * signature: undefined4 __cdecl FUN_1100cc90(undefined4 * param_1, int param_2)
 * body: 1100cc90-1100ccfb
 */

undefined4 __cdecl FUN_1100cc90(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  uint3 extraout_var;
  uint3 extraout_var_00;
  undefined4 uVar3;
  uint3 uVar4;
  
  puVar1 = (uint *)(param_2 + 0xc);
  cVar2 = FUN_110062b0(puVar1,'\x04');
  uVar4 = extraout_var;
  if (cVar2 != '\0') {
    cVar2 = FUN_110062b0(puVar1,'\0');
    uVar4 = extraout_var_00;
    if (cVar2 != '\0') {
      uVar3 = FUN_1100fc30((int)param_1);
      FUN_1101db80(param_1,uVar3,1,(int)*(short *)(param_2 + 0x30),(int)*(short *)(param_2 + 0x32),0
                   ,0);
      *(undefined4 *)(param_2 + 0x46) = *(undefined4 *)(param_2 + 0x30);
      uVar3 = FUN_11006290(puVar1,'\0');
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return (uint)uVar4 << 8;
}


