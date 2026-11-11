
/* ==== FUN_11017a50 @ 11017a50 ==== 
 * signature: undefined4 __cdecl FUN_11017a50(undefined4 param_1, short * param_2, int param_3)
 * body: 11017a50-11017a8e
 */

undefined4 __cdecl FUN_11017a50(undefined4 param_1,short *param_2,int param_3)

{
  uint uVar1;
  int in_EAX;
  
  if (*(short *)(param_3 + 0x34) == 0x1d) {
    in_EAX = (int)*param_2;
    if (in_EAX == 3) {
      param_2[1] = 1;
      return (uint)(uint3)(int3)(char)((ushort)*param_2 >> 8) << 8;
    }
    if (in_EAX == 4) {
      uVar1 = *(uint *)(param_3 + 0x3a);
      *(uint *)(param_2 + 2) = uVar1;
      return uVar1 & 0xffffff00;
    }
    if (in_EAX == 5) {
      uVar1 = *(uint *)(param_2 + 2);
      *(uint *)(param_3 + 0x3a) = uVar1;
      return uVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


