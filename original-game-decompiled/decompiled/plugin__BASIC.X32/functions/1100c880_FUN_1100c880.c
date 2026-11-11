
/* ==== FUN_1100c880 @ 1100c880 ==== 
 * signature: undefined __cdecl FUN_1100c880(undefined4 * param_1, int param_2)
 * body: 1100c880-1100c963
 */

void __cdecl FUN_1100c880(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_84;
  short local_80;
  short local_7e;
  undefined4 local_54;
  short local_50;
  short local_4e;
  undefined4 local_24 [7];
  int local_6;
  
  uVar2 = FUN_1100fc30((int)param_1);
  FUN_1100fb90(param_1,uVar2,local_24);
  FUN_1100fc50(param_1,uVar2,&local_84);
  if (local_6 == 0) {
    local_4e = 0;
    local_50 = 0;
  }
  else {
    FUN_1100fc50(param_1,local_6,&local_54);
  }
  *(short *)(param_2 + 0x30) = local_80 - local_50;
  *(short *)(param_2 + 0x32) = local_7e - local_4e;
  *(undefined4 *)(param_2 + 0x46) = *(undefined4 *)(param_2 + 0x30);
  cVar1 = FUN_110062b0((uint *)(param_2 + 0xc),'\x04');
  if (cVar1 == '\0') {
    cVar1 = FUN_110062b0((uint *)(param_2 + 0xc),'\v');
    if (((cVar1 != '\0') && (*(int *)(param_2 + 0x20) != 0)) && (*(short *)(param_2 + 0x28) != 0)) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x20) + -0xc + *(short *)(param_2 + 0x28) * 0xc);
      *(short *)(param_2 + 0x30) = *(short *)(param_2 + 0x30) - (short)uVar2;
      local_84._2_2_ = (short)((uint)uVar2 >> 0x10);
      *(short *)(param_2 + 0x32) = *(short *)(param_2 + 0x32) - local_84._2_2_;
    }
  }
  return;
}


