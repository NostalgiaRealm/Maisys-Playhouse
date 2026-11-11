
/* ==== FUN_00497f00 @ 00497f00 ==== 
 * signature: float10 __cdecl FUN_00497f00(undefined4 param_1, undefined4 param_2, short param_3)
 * body: 00497f00-00497f34
 */

float10 __cdecl FUN_00497f00(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_3 << 4 | param_2._2_2_ & 0x800f,CONCAT24(uStack_4,param_1))
  ;
}


