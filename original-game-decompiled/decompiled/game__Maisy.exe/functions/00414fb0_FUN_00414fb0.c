
/* ==== FUN_00414fb0 @ 00414fb0 ==== 
 * signature: undefined4 __stdcall FUN_00414fb0(undefined4 param_1, undefined4 param_2)
 * body: 00414fb0-00414fef
 */

undefined4 FUN_00414fb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (int)param_1._2_2_ - (int)param_2._2_2_ >> 0x1f;
  uVar3 = (int)(short)param_1 - (int)(short)param_2 >> 0x1f;
  iVar1 = ((int)(short)param_1 - (int)(short)param_2 ^ uVar3) - uVar3;
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  (int)(((int)param_1._2_2_ - (int)param_2._2_2_ ^ uVar2) - uVar2) < 6 && iVar1 < 6)
  ;
}


