
/* ==== FUN_00404120 @ 00404120 ==== 
 * signature: undefined __thiscall FUN_00404120(void * this, undefined4 param_1)
 * body: 00404120-00404186
 */

void __thiscall FUN_00404120(void *this,undefined4 param_1)

{
  undefined4 local_8;
  
  if (*(int **)((int)this + 300) != (int *)0x0) {
    if ((*(short *)((int)this + 0x130) != (short)param_1) ||
       (*(short *)((int)this + 0x132) != param_1._2_2_)) {
      local_8 = CONCAT22(param_1._2_2_ - *(short *)((int)this + 0x12a),
                         (short)param_1 - *(short *)((int)this + 0x128));
      (**(code **)(**(int **)((int)this + 300) + 0x3f8))(local_8);
      *(undefined4 *)((int)this + 0x130) = param_1;
    }
  }
  return;
}


