
/* ==== FUN_0047d130 @ 0047d130 ==== 
 * signature: bool __cdecl FUN_0047d130(ushort param_1, ushort param_2, ushort param_3, int param_4)
 * body: 0047d130-0047d1e5
 */

bool __cdecl FUN_0047d130(ushort param_1,ushort param_2,ushort param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == param_1) {
    return true;
  }
  if (param_4 == 0x400) {
    return false;
  }
  if ((param_3 != param_1) && (param_3 != param_2)) {
    iVar2 = (int)(short)((param_1 & 0x1f) - (param_2 & 0x1f));
    iVar3 = (int)(short)(((param_1 & 0x3e0) >> 5) - ((param_2 & 0x3e0) >> 5));
    iVar1 = (int)(short)(((short)param_1 >> 10) - ((short)param_2 >> 10));
    return (uint)((iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1) * 50000) <
           (uint)((0x400 - param_4) * (0x400 - param_4));
  }
  return false;
}


