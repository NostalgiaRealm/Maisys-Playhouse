
/* ==== FUN_00401ef5 @ 00401ef5 ==== 
 * signature: int __stdcall FUN_00401ef5(uint param_1, undefined4 param_2, uint param_3, uint * param_4)
 * body: 00401ef5-004020b5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00401ef5(uint param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_14 [3];
  ushort local_8;
  
  DAT_004043a4 = param_3;
  if (param_3 != 0) {
    uVar2 = param_1;
    if ((DAT_004042d4._1_1_ & 1) == 0) {
      DAT_004043a4 = param_3 - 4;
    }
    else {
      if ((param_1 == 0xffffffff) && (DAT_00404290 != (code *)0x0)) {
        iVar1 = (*DAT_00404290)(0,0);
        uVar2 = DAT_004042b8;
        if (iVar1 != 0) {
          return 0;
        }
        _llseek(DAT_004042b8,DAT_004042a8 - _DAT_004042ac,0);
      }
      _llseek(uVar2,0xe,1);
      _lread(uVar2,local_14,0x10);
      param_1 = local_14[0];
      _llseek(uVar2,(uint)local_8,1);
      DAT_004043a4 = DAT_004043a4 + (-0x1e - (uint)local_8);
    }
    if (DAT_004043a4 != 0) {
      DAT_00404394 = FUN_004020b6((byte *)0x0,0);
      DAT_0040438c = param_2;
      uVar3 = 0;
      DAT_0040439c = 0;
      DAT_00404380 = 0;
      DAT_0040437c = 0;
      DAT_00404384 = 0;
      DAT_004043ac = 0;
      DAT_00404368 = uVar2;
      do {
        if (DAT_00404340 != (code *)0x0) {
          (*DAT_00404340)(1);
        }
        DAT_00404360 = 0;
        iVar1 = FUN_004010c4(&param_3);
        if (iVar1 != 0) {
          if (DAT_004042bc == 0) {
            DAT_004042c0 = 2;
            return iVar1;
          }
          return iVar1;
        }
        if (uVar3 < DAT_00404360) {
          uVar3 = DAT_00404360;
        }
      } while (((param_3 == 0) && (DAT_004042bc == 0)) && (DAT_004042c0 == '\0'));
      if (7 < DAT_0040439c) {
        uVar2 = DAT_0040439c >> 3;
        do {
          DAT_0040439c = DAT_0040439c - 8;
          DAT_0040437c = DAT_0040437c + -1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      FUN_00401d9a();
      if ((DAT_004042d4._1_1_ & 1) == 0) {
        _lread(DAT_00404368,&param_1,4);
      }
      if (((param_1 != DAT_00404394) && (DAT_004042bc == 0)) && (DAT_004042c0 == '\0')) {
        DAT_004042c0 = '\x02';
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = param_1;
      }
      while (DAT_00404390 != 0) {
        FUN_00402185();
      }
    }
  }
  return 0;
}


