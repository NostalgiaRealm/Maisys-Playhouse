
/* ==== FUN_00474cd0 @ 00474cd0 ==== 
 * signature: undefined __thiscall FUN_00474cd0(void * this, uint * param_1)
 * body: 00474cd0-00474d1a
 */

void __thiscall FUN_00474cd0(void *this,uint *param_1)

{
  if (param_1[3] == 0x514) {
    FUN_00474bd0(this,param_1[2],(undefined2 *)(param_1 + 9),(short)param_1[9]);
    return;
  }
  if (param_1[3] == 0x4b0) {
    FUN_00474c50(this,param_1[2],param_1 + 9);
    return;
  }
  FUN_0042cd30(this,param_1);
  return;
}


