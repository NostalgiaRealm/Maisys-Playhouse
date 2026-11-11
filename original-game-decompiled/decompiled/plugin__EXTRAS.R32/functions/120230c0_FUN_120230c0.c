
/* ==== FUN_120230c0 @ 120230c0 ==== 
 * signature: int __cdecl FUN_120230c0(short param_1, char param_2)
 * body: 120230c0-1202312a
 */

int __cdecl FUN_120230c0(short param_1,char param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)((uint)(param_1 + 1) >> 0x10);
  switch(param_1) {
  default:
    return (uint)uVar1 << 0x10;
  case 1:
    return CONCAT22(uVar1,6);
  case 9:
    return CONCAT22(uVar1,0xe);
  case 10:
    return CONCAT22(uVar1,6);
  case 0xb:
    return CONCAT22(uVar1,10);
  case 0xf:
    return CONCAT22(uVar1,10);
  case 0x10:
    return CONCAT22(uVar1,0x1a);
  case 0x14:
    return CONCAT22(uVar1,4);
  case 0x66:
    return (-(uint)(param_2 == '\0') & 8) + 10;
  case 0x69:
    return (-(uint)(param_2 == '\0') & 0xfffffffe) + 10;
  case -1:
    return (-(uint)(param_2 == '\0') & 0x20) + 10;
  }
}


