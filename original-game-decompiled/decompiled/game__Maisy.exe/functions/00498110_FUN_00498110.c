
/* ==== FUN_00498110 @ 00498110 ==== 
 * signature: float10 __cdecl FUN_00498110(uint param_1, uint param_2)
 * body: 00498110-00498226
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00498110(uint param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  int local_4;
  
  uVar2 = __ctrlfp();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
      fVar4 = __except1(4,0x25,param_1,param_2,SUB84(-_DAT_004decb8,0),
                        (int)((ulonglong)-_DAT_004decb8 >> 0x20),uVar2);
      return fVar4;
    }
    __decomp(param_1,param_2,&local_4);
    __ctrlfp();
    return (float10)(local_4 + -1);
  }
  iVar3 = __sptype(param_1,param_2);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      __ctrlfp();
      return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    if (iVar3 == 3) {
      fVar4 = __handle_qnan1(0x25,param_1,param_2);
      return fVar4;
    }
  }
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + 1.0;
  fVar4 = __except1(8,0x25,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),uVar2);
  return fVar4;
}


