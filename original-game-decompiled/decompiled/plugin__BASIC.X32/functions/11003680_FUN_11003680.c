
/* ==== FUN_11003680 @ 11003680 ==== 
 * signature: uint __cdecl FUN_11003680(undefined4 * param_1, int param_2)
 * body: 11003680-11003920
 */

uint __cdecl FUN_11003680(undefined4 *param_1,int param_2)

{
  short sVar1;
  uint in_EAX;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_2 + 0x36) != '\0') {
    DVar2 = timeGetTime();
    in_EAX = (DVar2 * 6) / 100;
    if (*(uint *)(param_2 + 0x56) <= in_EAX) {
      DVar2 = timeGetTime();
      iVar3 = *(int *)(param_2 + 0x52) / 100000 + (DVar2 * 6) / 100;
      *(int *)(param_2 + 0x56) = iVar3;
      sVar6 = *(short *)(param_2 + 0x1c);
      in_EAX = CONCAT22((short)((uint)iVar3 >> 0x10),sVar6);
      if (sVar6 == 3) {
        local_34 = *(undefined4 *)(param_2 + 0x4c);
        FUN_1100fc50(param_1,*(undefined4 *)(param_2 + 0x30),&local_30);
        local_44 = local_10;
        uVar4 = local_44;
        local_40 = local_c;
        local_3c = local_1c;
        local_44._2_2_ = (short)((uint)local_10 >> 0x10);
        sVar7 = -local_44._2_2_;
        local_38 = local_18;
        local_44._0_2_ = (short)local_10;
        sVar6 = -(short)local_44;
        local_44 = uVar4;
        FUN_11028c90((short *)&local_3c,sVar6,sVar7);
        FUN_11028c90((short *)&local_44,-(short)local_44,-local_44._2_2_);
        sVar6 = local_34._2_2_;
        sVar7 = (short)local_34;
        FUN_11028c90((short *)&local_3c,(short)local_34,local_34._2_2_);
        if (local_40._2_2_ <= local_38._2_2_) {
          sVar6 = (sVar6 - local_38._2_2_) + local_40._2_2_;
          uVar4 = FUN_11003930(*(short *)(param_2 + 0x4a));
          *(short *)(param_2 + 0x4e) = -(short)uVar4;
        }
        if (local_3c._2_2_ <= local_44._2_2_) {
          sVar6 = (sVar6 - local_3c._2_2_) + local_44._2_2_;
          uVar4 = FUN_11003930(*(short *)(param_2 + 0x4a));
          *(short *)(param_2 + 0x4e) = (short)uVar4;
        }
        if ((short)local_40 <= (short)local_38) {
          sVar7 = (sVar7 - (short)local_38) + (short)local_40;
          uVar4 = FUN_11003930(*(short *)(param_2 + 0x48));
          *(short *)(param_2 + 0x4c) = -(short)uVar4;
        }
        if ((short)local_3c <= (short)local_44) {
          sVar7 = (sVar7 - (short)local_3c) + (short)local_44;
          uVar4 = FUN_11003930(*(short *)(param_2 + 0x48));
          *(short *)(param_2 + 0x4c) = (short)uVar4;
        }
        sVar1 = *(short *)(param_2 + 0x5a);
        *(short *)(param_2 + 0x5a) = sVar1 + 1;
        if ((1 < sVar1) && (*(short *)(param_2 + 0x4e) < *(short *)(param_2 + 0x4a))) {
          *(undefined2 *)(param_2 + 0x5a) = 0;
          *(short *)(param_2 + 0x4e) = *(short *)(param_2 + 0x4e) + 1;
        }
        uVar5 = FUN_1101db80(param_1,*(undefined4 *)(param_2 + 0x30),0,(int)sVar7,(int)sVar6,0,0);
        return uVar5 & 0xffffff00;
      }
      if ((sVar6 == 2) || (sVar6 == 1)) {
        sVar6 = *(short *)(param_2 + 0x5a);
        *(short *)(param_2 + 0x5a) = sVar6 + 1;
        local_30 = CONCAT22((short)((((int)*(short *)(param_2 + 0x2e) -
                                     (int)*(short *)(param_2 + 0x2a)) * (int)sVar6) /
                                   (int)*(short *)(param_2 + 0x50)) + *(short *)(param_2 + 0x2a),
                            (short)((((int)*(short *)(param_2 + 0x2c) -
                                     (int)*(short *)(param_2 + 0x28)) * (int)sVar6) /
                                   (int)*(short *)(param_2 + 0x50)) + *(short *)(param_2 + 0x28));
        if (*(short *)(param_2 + 0x50) <= (short)(sVar6 + 1)) {
          local_30 = *(undefined4 *)(param_2 + 0x2c);
          *(undefined1 *)(param_2 + 0x36) = 0;
          FUN_11003980(0x1f6,param_1);
          FUN_11004840(param_1,10,0);
        }
        uVar5 = FUN_1101db80(param_1,*(undefined4 *)(param_2 + 0x30),1,(int)(short)local_30,
                             (int)local_30._2_2_,0,0);
        return uVar5 & 0xffffff00;
      }
    }
  }
  return in_EAX & 0xffffff00;
}


