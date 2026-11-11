
/* ==== FUN_00417690 @ 00417690 ==== 
 * signature: uint __cdecl FUN_00417690(short param_1, int param_2)
 * body: 00417690-00417786
 */

uint __cdecl FUN_00417690(short param_1,int param_2)

{
  uint uVar1;
  ushort uVar3;
  undefined2 uVar4;
  int iVar2;
  
  uVar1 = (uint)param_1;
  uVar3 = param_1 >> 0xf;
  if ((int)uVar1 < 0xb) {
    if (uVar1 == 10) {
      return CONCAT22(uVar3,0x10);
    }
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        return (uint)uVar3 << 0x10;
      }
      return CONCAT22(uVar3,1);
    }
    return (uint)uVar3 << 0x10;
  }
  if ((int)uVar1 < 0x15) {
    if (uVar1 == 0x14) {
      return CONCAT22(uVar3,0x1a);
    }
    uVar1 = uVar1 - 0xb;
    uVar4 = (undefined2)(uVar1 >> 0x10);
    switch(uVar1) {
    case 0:
      return CONCAT22(uVar4,0x11);
    case 2:
      return CONCAT22(uVar4,0x13);
    case 4:
      return CONCAT22(uVar4,0x15);
    case 5:
      return CONCAT22(uVar4,0x16);
    }
  }
  else {
    if ((int)uVar1 < 0x6a) {
      if (uVar1 != 0x69) {
        if (uVar1 != 0x66) {
          return (uint)uVar3 << 0x10;
        }
        return CONCAT22(uVar3,0xd);
      }
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 2);
      }
      uVar4 = (undefined2)((uint)iVar2 >> 0x10);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x1e) & 0x80) != 0) {
          return CONCAT22(uVar4,0x1c);
        }
        if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x1f) & 4) != 0)) {
          return CONCAT22(uVar4,0x19);
        }
      }
      return CONCAT22(uVar4,3);
    }
    if ((int)uVar1 < 0x77) {
      if (uVar1 == 0x76) {
        return CONCAT22(uVar3,0x1f);
      }
      if (uVar1 != 0x6a) {
        return (uint)uVar3 << 0x10;
      }
      return CONCAT22(uVar3,0x17);
    }
    if (uVar1 == 0x7c) {
      return CONCAT22(uVar3,6);
    }
    if (uVar1 == 0x32d5) {
      return CONCAT22(uVar3,0x1fd);
    }
  }
  return uVar1 & 0xffff0000;
}


