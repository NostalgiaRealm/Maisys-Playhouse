
/* ==== FUN_004325e0 @ 004325e0 ==== 
 * signature: int __cdecl FUN_004325e0(short param_1, short * param_2, short * param_3)
 * body: 004325e0-0043263a
 */

int __cdecl FUN_004325e0(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  short *psVar2;
  short local_6;
  
  if ((param_1 < 2) || (3 < param_1)) {
    iVar1 = 0x10000;
  }
  else {
    if (param_1 == 3) {
      psVar2 = param_2 + 0x2c;
    }
    else {
      psVar2 = (short *)0x0;
    }
    iVar1 = FUN_00432490(param_2,param_2 + 0x16,psVar2,&local_6);
    if (iVar1 == 0) {
      iVar1 = FUN_00454d00(param_3,(int)local_6);
      return iVar1;
    }
  }
  return iVar1;
}


