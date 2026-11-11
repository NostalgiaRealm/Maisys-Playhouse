
/* ==== FUN_00417310 @ 00417310 ==== 
 * signature: uint __cdecl FUN_00417310(short param_1)
 * body: 00417310-004173ae
 */

uint __cdecl FUN_00417310(short param_1)

{
  uint uVar1;
  ushort uVar3;
  uint uVar2;
  undefined2 uVar4;
  
  uVar1 = (uint)param_1;
  uVar3 = param_1 >> 0xf;
  uVar2 = uVar1;
  if ((int)uVar1 < 0xe) {
    if (uVar1 == 0xd) {
      return CONCAT22(uVar3,0x66);
    }
    switch(uVar1) {
    case 0:
      return (uint)uVar3 << 0x10;
    case 1:
      return CONCAT22(uVar3,1);
    case 3:
      return CONCAT22(uVar3,0x69);
    case 6:
      return CONCAT22(uVar3,0x7c);
    }
  }
  else if ((int)uVar1 < 0x1fe) {
    if (uVar1 == 0x1fd) {
      return CONCAT22(uVar3,0x32d5);
    }
    uVar2 = uVar1 - 0x10;
    uVar4 = (undefined2)(uVar2 >> 0x10);
    switch(uVar1) {
    case 0x10:
      return CONCAT22(uVar4,10);
    case 0x11:
      return CONCAT22(uVar4,0xb);
    case 0x13:
      return CONCAT22(uVar4,0xd);
    case 0x15:
      return CONCAT22(uVar4,0xf);
    case 0x16:
      return CONCAT22(uVar4,0x10);
    case 0x17:
      return CONCAT22(uVar4,0x6a);
    case 0x19:
      return CONCAT22(uVar4,0x69);
    case 0x1a:
      return CONCAT22(uVar4,0x14);
    case 0x1c:
      return CONCAT22(uVar4,0x69);
    case 0x1f:
      return CONCAT22(uVar4,0x76);
    }
  }
  return uVar2 & 0xffff0000;
}


