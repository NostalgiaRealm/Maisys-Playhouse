
/* ==== FUN_1200d3f0 @ 1200d3f0 ==== 
 * signature: uint __cdecl FUN_1200d3f0(int param_1, short * param_2, short param_3)
 * body: 1200d3f0-1200d461
 */

uint __cdecl FUN_1200d3f0(int param_1,short *param_2,short param_3)

{
  int iVar1;
  int local_4;
  
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    iVar1 = FUN_1200d4c0(param_1,param_2,&local_4);
    if (iVar1 != 0) {
      return CONCAT31((int3)((uint)iVar1 >> 8),0xff);
    }
    param_2 = (short *)0x0;
    if (-1 < local_4) {
      param_2 = (short *)(uint)(ushort)param_3;
      if ((param_3 == 0) || (param_2 = (short *)(int)param_3, local_4 <= (int)param_2))
      goto LAB_1200d45a;
    }
    return CONCAT31((int3)((uint)param_2 >> 8),0xff);
  }
  local_4 = 0;
LAB_1200d45a:
  return CONCAT31((int3)((uint)param_2 >> 8),(undefined1)local_4);
}


