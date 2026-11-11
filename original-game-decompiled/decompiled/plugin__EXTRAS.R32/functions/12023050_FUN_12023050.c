
/* ==== FUN_12023050 @ 12023050 ==== 
 * signature: int __cdecl FUN_12023050(int param_1)
 * body: 12023050-12023091
 */

int __cdecl FUN_12023050(int param_1)

{
  ushort uVar1;
  
  uVar1 = (ushort)((uint)(param_1 + -1) >> 0x10);
  switch(param_1 + -1) {
  case 0:
    return CONCAT22(uVar1,1);
  case 1:
    return CONCAT22(uVar1,10);
  case 2:
    return CONCAT22(uVar1,0xb);
  case 3:
    return CONCAT22(uVar1,0xf);
  case 4:
    return CONCAT22(uVar1,0x66);
  case 5:
    return CONCAT22(uVar1,0xffff);
  case 6:
    return CONCAT22(uVar1,9);
  case 7:
    return CONCAT22(uVar1,0x10);
  case 8:
    return CONCAT22(uVar1,0x14);
  default:
    return (uint)uVar1 << 0x10;
  }
}


