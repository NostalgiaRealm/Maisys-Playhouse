
/* ==== FUN_0043c380 @ 0043c380 ==== 
 * signature: uint __cdecl FUN_0043c380(short * param_1, ushort * param_2)
 * body: 0043c380-0043c415
 */

uint __cdecl FUN_0043c380(short *param_1,ushort *param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 1) {
    if (*(HRGN *)(param_1 + 5) != (HRGN)0x0) {
      uVar3 = PtInRegion(*(HRGN *)(param_1 + 5),(int)(short)*param_2,(int)(short)param_2[1]);
      return uVar3;
    }
    uVar2 = *param_2;
    uVar3 = (uint)uVar2;
    if ((param_1[1] <= (short)uVar2) && ((short)uVar2 < param_1[3])) {
      uVar2 = param_2[1];
      uVar3 = (uint)uVar2;
      if ((param_1[2] <= (short)uVar2) && ((short)uVar2 < param_1[4])) {
        return CONCAT31((uint3)(byte)(uVar2 >> 8),1);
      }
    }
    return uVar3 & 0xffffff00;
  }
  if (sVar1 == 2) {
    return 0;
  }
  if (sVar1 != 3) {
    return (uint)(uint3)(int3)(char)((ushort)sVar1 >> 8) << 8;
  }
  uVar2 = *param_2;
  uVar3 = (uint)uVar2;
  if ((param_1[1] <= (short)uVar2) && ((short)uVar2 < param_1[3])) {
    uVar2 = param_2[1];
    uVar3 = (uint)uVar2;
    if ((param_1[2] <= (short)uVar2) && ((short)uVar2 < param_1[4])) {
      return CONCAT31((uint3)(byte)(uVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


