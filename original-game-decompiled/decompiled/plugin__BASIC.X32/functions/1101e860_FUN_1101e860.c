
/* ==== FUN_1101e860 @ 1101e860 ==== 
 * signature: uint __cdecl FUN_1101e860(int param_1, int param_2)
 * body: 1101e860-1101e892
 */

uint __cdecl FUN_1101e860(int param_1,int param_2)

{
  byte bVar1;
  uint in_EAX;
  
  if ((*(byte *)(param_2 + 0xc) & 2) != 0) {
    FUN_1100fc30(param_1);
    bVar1 = *(byte *)(param_2 + 0xc);
    *(byte *)(param_2 + 0xc) = bVar1 & 0xfe;
    *(byte *)(param_2 + 0xc) = bVar1 & 0xfc;
    in_EAX = 0;
    *(undefined2 *)(param_2 + 0x78) = 0;
    *(undefined2 *)(param_2 + 0x76) = 0;
  }
  return in_EAX & 0xffffff00;
}


