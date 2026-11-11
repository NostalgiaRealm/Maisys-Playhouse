
/* ==== FUN_004021e0 @ 004021e0 ==== 
 * signature: undefined4 __cdecl FUN_004021e0(int * param_1)
 * body: 004021e0-0040220d
 */

undefined4 __cdecl FUN_004021e0(int *param_1)

{
  int in_EAX;
  short sVar1;
  
  sVar1 = 1;
  if (0 < *param_1) {
    do {
      if (param_1[sVar1] != -1) {
        return (uint)(uint3)(int3)(char)((ushort)sVar1 >> 8) << 8;
      }
      sVar1 = sVar1 + 1;
      in_EAX = (int)sVar1;
    } while (in_EAX <= *param_1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


