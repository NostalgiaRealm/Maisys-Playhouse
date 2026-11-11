
/* ==== FUN_1100c730 @ 1100c730 ==== 
 * signature: undefined __cdecl FUN_1100c730(undefined4 * param_1, int param_2, char param_3, char param_4)
 * body: 1100c730-1100c878
 */

void __cdecl FUN_1100c730(undefined4 *param_1,int param_2,char param_3,char param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  short sVar5;
  int iVar6;
  undefined4 local_58;
  undefined4 local_54 [5];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_30;
  int local_2e;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar2 = FUN_1100fc30((int)param_1);
    uVar3 = FUN_1100fc40((int)param_1);
    iVar6 = *(short *)(param_2 + 0x2a) * 0xc + *(int *)(param_2 + 0x20);
    sVar1 = *(short *)(iVar6 + 4);
    if ((param_3 != '\0') && ((*(uint *)(iVar6 + 8) & 1) == 0)) {
      FUN_11011900(local_54,0x4b0,6,uVar3,0);
      local_3e = 0xc9;
      local_40 = 5;
      local_2e = sVar1 + 1;
      local_30 = 1;
      FUN_11017cc0(param_1,local_54);
    }
    if (*(short *)(param_2 + 0x2a) < *(short *)(param_2 + 0x28)) {
      psVar4 = (short *)(*(short *)(param_2 + 0x2a) * 0xc + *(int *)(param_2 + 0x20));
      sVar5 = *(short *)(param_2 + 0x30) + *psVar4;
      sVar1 = psVar4[1] + *(short *)(param_2 + 0x32);
      local_58 = CONCAT22(sVar1,sVar5);
      FUN_1101db80(param_1,uVar2,0,(int)sVar5 - (int)*(short *)(param_2 + 0x46),
                   (int)sVar1 - (int)*(short *)(param_2 + 0x48),0,0);
      *(undefined4 *)(param_2 + 0x46) = local_58;
    }
    else {
      *(undefined2 *)(param_2 + 0x2a) = 0;
      FUN_1101db80(param_1,uVar2,1,(int)*(short *)(param_2 + 0x30),(int)*(short *)(param_2 + 0x32),0
                   ,0);
      FUN_11006290((uint *)(param_2 + 0xc),'\0');
    }
    if (param_4 != '\0') {
      FUN_1101db80(param_1,uVar2,4,0,0,0x7fff,0x7fff);
    }
  }
  return;
}


