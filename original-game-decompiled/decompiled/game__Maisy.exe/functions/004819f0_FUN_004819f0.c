
/* ==== FUN_004819f0 @ 004819f0 ==== 
 * signature: undefined4 __thiscall FUN_004819f0(void * this, uint * param_1, uint * param_2, undefined2 * param_3, uint * param_4, uint * param_5)
 * body: 004819f0-00481a3b
 */

undefined4 __thiscall
FUN_004819f0(void *this,uint *param_1,uint *param_2,undefined2 *param_3,uint *param_4,uint *param_5)

{
  FUN_00481bc0(this,param_2,*param_1);
  FUN_00481b90(this,param_3,(short)param_1[1]);
  FUN_00481bc0(this,param_4,*(uint *)((int)param_1 + 6));
  FUN_00481bc0(this,param_5,*(uint *)((int)param_1 + 10));
  return 0;
}


