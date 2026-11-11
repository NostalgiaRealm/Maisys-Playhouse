
/* ==== FUN_00421f40 @ 00421f40 ==== 
 * signature: undefined __thiscall FUN_00421f40(void * this, undefined4 param_1, short * param_2, undefined4 param_3, short * param_4, byte * param_5, short param_6)
 * body: 00421f40-00421fad
 */

void __thiscall
FUN_00421f40(void *this,undefined4 param_1,short *param_2,undefined4 param_3,short *param_4,
            byte *param_5,short param_6)

{
  undefined4 local_10 [3];
  
  (**(code **)(*(int *)this + 0x114))();
  FUN_00426800(local_10);
  FUN_00426840((int)this + 0x16a,(int)local_10);
  FUN_00421a80(this,param_6,param_1,local_10,param_2,param_3,param_4,param_5,0,(int *)0x0,
               (short *)0x0);
  FUN_00426900((int)local_10);
  return;
}


