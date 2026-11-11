
/* ==== FUN_00488390 @ 00488390 ==== 
 * signature: undefined __thiscall FUN_00488390(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00488390-004883da
 */

void __thiscall FUN_00488390(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_GraphicElement_004dcf50);
    return;
  }
  FUN_00464500(this,param_1,param_2,param_3);
  return;
}


