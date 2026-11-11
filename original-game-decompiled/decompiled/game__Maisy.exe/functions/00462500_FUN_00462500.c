
/* ==== FUN_00462500 @ 00462500 ==== 
 * signature: undefined __thiscall FUN_00462500(void * this, undefined4 * param_1, int param_2)
 * body: 00462500-00462541
 */

void __thiscall FUN_00462500(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    (**(code **)(*(int *)this + 0x38c))(param_2,1);
  }
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0xb2) = *param_1;
  *(undefined4 *)((int)this + 0xb6) = uVar1;
  if (*(void **)((int)this + 0x3a) != (void *)0x0) {
    FUN_00406bb0(*(void **)((int)this + 0x3a),3,this,(undefined4 *)0x0);
  }
  return;
}


