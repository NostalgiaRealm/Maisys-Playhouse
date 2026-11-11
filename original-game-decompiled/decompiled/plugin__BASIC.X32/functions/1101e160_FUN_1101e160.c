
/* ==== FUN_1101e160 @ 1101e160 ==== 
 * signature: uint __cdecl FUN_1101e160(undefined4 * param_1, int param_2)
 * body: 1101e160-1101e30c
 */

uint __cdecl FUN_1101e160(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  DWORD DVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined2 local_4;
  
  if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
    DVar2 = timeGetTime();
    in_EAX = (DVar2 * 6) / 100;
    if (*(uint *)(param_2 + 0x70) <= in_EAX) {
      local_18 = FUN_1100fc30((int)param_1);
      DVar2 = timeGetTime();
      *(uint *)(param_2 + 0x70) = (DVar2 * 6) / 100 + (int)*(short *)(param_2 + 0x6e);
      if (*(short *)(param_2 + 0x1e) == 0x16) {
        uVar1 = *(undefined4 *)(param_2 + 0x1e);
        uStack_10 = *(undefined4 *)(param_2 + 0x22);
        local_14 = (undefined2)uVar1;
        uStack_12 = (undefined2)((uint)uVar1 >> 0x10);
        uStack_8 = *(undefined4 *)(param_2 + 0x2a);
        uStack_c = (undefined2)*(undefined4 *)(param_2 + 0x26);
        uStack_a = (undefined2)((uint)*(undefined4 *)(param_2 + 0x26) >> 0x10);
        local_4 = *(undefined2 *)(param_2 + 0x2e);
      }
      else {
        FUN_1101e310(param_1,param_2,(undefined4 *)&local_14);
      }
      if ((*(double *)(param_2 + 0x56) != (double)CONCAT26(uStack_c,CONCAT42(uStack_10,uStack_12)))
         || (*(double *)(param_2 + 0x5e) != (double)CONCAT26(local_4,CONCAT42(uStack_8,uStack_a))))
      {
        FUN_1101e4c0(param_1,(int)&local_14,(undefined2 *)&local_1c);
        *(undefined2 *)(param_2 + 0x52) = local_1c._2_2_;
        *(undefined2 *)(param_2 + 0x50) = (undefined2)local_1c;
        *(uint *)(param_2 + 0x54) = CONCAT22(uStack_12,local_14);
        *(undefined4 *)(param_2 + 0x58) = uStack_10;
        *(uint *)(param_2 + 0x5c) = CONCAT22(uStack_a,uStack_c);
        *(undefined4 *)(param_2 + 0x60) = uStack_8;
        *(undefined2 *)(param_2 + 100) = local_4;
        DVar2 = timeGetTime();
        *(undefined2 *)(param_2 + 0x68) = 0;
        *(undefined2 *)(param_2 + 0x66) = 0;
        *(uint *)(param_2 + 0x6a) = (DVar2 * 6) / 100 - (int)*(short *)(param_2 + 0x6e);
      }
      DVar2 = timeGetTime();
      iVar3 = (DVar2 * 6) / 100 - *(int *)(param_2 + 0x6a);
      sVar5 = (short)((*(short *)(param_2 + 0x50) * iVar3) / 0x3c);
      sVar4 = (short)((*(short *)(param_2 + 0x52) * iVar3) / 0x3c);
      local_1c = CONCAT22(sVar4,sVar5);
      sVar4 = sVar4 - *(short *)(param_2 + 0x68);
      sVar5 = sVar5 - *(short *)(param_2 + 0x66);
      if ((sVar5 != 0) || (sVar4 != 0)) {
        FUN_1101db80(param_1,local_18,0,(int)sVar5,(int)sVar4,0,0);
        *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x76) + sVar5;
        *(short *)(param_2 + 0x78) = *(short *)(param_2 + 0x78) + sVar4;
      }
      *(uint *)(param_2 + 0x66) = local_1c;
      in_EAX = local_1c;
    }
  }
  return in_EAX & 0xffffff00;
}


