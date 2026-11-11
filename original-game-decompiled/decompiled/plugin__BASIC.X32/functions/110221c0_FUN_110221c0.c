
/* ==== FUN_110221c0 @ 110221c0 ==== 
 * signature: undefined4 __cdecl FUN_110221c0(undefined4 * param_1, int param_2, int param_3)
 * body: 110221c0-11022420
 */

int __cdecl FUN_110221c0(undefined4 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  int iVar5;
  uint3 extraout_var;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined3 extraout_var_00;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48 [3];
  short local_3c;
  int local_2a;
  undefined4 local_24 [3];
  short local_18;
  
  if (*(char *)(param_3 + 0x66) != '\0') {
    iVar2 = *(int *)(param_2 + 0xc);
    iVar5 = FUN_1100fc30((int)param_1);
    if (iVar5 == iVar2) {
      local_4c = FUN_110026d0(param_1,0x24);
      if (local_4c == 0) {
        return 1;
      }
      puVar1 = (uint *)(param_3 + 0xc);
      uVar8 = 0;
      local_50 = 0;
      puVar7 = &local_50;
      bVar4 = FUN_110062b0(puVar1,'\x03');
      uVar6 = (uint)bVar4;
      bVar4 = FUN_110062b0(puVar1,'\x04');
      FUN_1101db80(param_1,iVar5,5,(uint)bVar4,uVar6,puVar7,uVar8);
      if (local_50._2_2_ != 0) {
        uVar8 = FUN_11002730(param_1,local_4c);
        return CONCAT31((int3)((uint)uVar8 >> 8),1);
      }
      cVar3 = FUN_110062b0(puVar1,'\v');
      if (cVar3 != '\0') {
        FUN_11022a60(param_1,param_3,(short *)&local_50);
      }
      cVar3 = FUN_110062b0(puVar1,'\b');
      if (cVar3 == '\0') {
        cVar3 = FUN_110062b0(puVar1,'\a');
        if (cVar3 != '\0') {
          FUN_11022830(param_1,(short *)&local_50,param_3);
        }
      }
      else {
        FUN_110226c0(param_1,(short *)&local_50,param_3);
      }
      cVar3 = FUN_110062b0(puVar1,'\b');
      if ((cVar3 == '\0') &&
         ((cVar3 = FUN_110062b0(puVar1,'\a'), cVar3 == '\0' ||
          (cVar3 = FUN_110062b0(puVar1,'\t'), cVar3 == '\0')))) {
        uVar6 = FUN_11002730(param_1,local_4c);
        return uVar6 & 0xffffff00;
      }
      if (*(int *)(param_3 + 0xd0) != 0) {
        FUN_11002730(param_1,*(int *)(param_3 + 0xd0));
      }
      *(uint *)(param_3 + 0xcc) = local_50;
      *(int *)(param_3 + 0xd0) = local_4c;
      in_EAX = local_50;
    }
    else {
      FUN_1100fb90(param_1,iVar5,local_48);
      if ((local_2a == iVar2) && (cVar3 = FUN_110062b0((uint *)(param_3 + 0xc),'\v'), cVar3 != '\0')
         ) {
        return (uint)extraout_var << 8;
      }
      FUN_1100fb90(param_1,iVar2,local_24);
      cVar3 = FUN_110062b0((uint *)(param_3 + 0xc),'\x03');
      if (((cVar3 == '\0') && (uVar6 = CONCAT22(extraout_var_01,local_18), local_3c < local_18)) ||
         ((cVar3 = FUN_110062b0((uint *)(param_3 + 0xc),'\x04'), cVar3 == '\0' &&
          (uVar6 = CONCAT22(extraout_var_02,local_18), local_18 < local_3c)))) {
        return uVar6 & 0xffffff00;
      }
      cVar3 = FUN_11022430(param_1,param_3,iVar5,iVar2);
      in_EAX = CONCAT31(extraout_var_00,cVar3);
      if (cVar3 != '\0') {
        cVar3 = FUN_110062b0((uint *)(param_3 + 0xc),'\x06');
        if (cVar3 != '\0') {
          uVar6 = FUN_11022c40(param_1,param_3,iVar2,0);
          return uVar6 & 0xffffff00;
        }
        uVar6 = FUN_11022cd0(param_1,param_3);
        return uVar6 & 0xffffff00;
      }
    }
  }
  return in_EAX & 0xffffff00;
}


