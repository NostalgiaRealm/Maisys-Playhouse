
/* ==== FUN_00417b10 @ 00417b10 ==== 
 * signature: undefined __thiscall FUN_00417b10(void * this, int param_1, undefined4 * param_2, short param_3, undefined4 param_4)
 * body: 00417b10-00417b52
 */

void __thiscall
FUN_00417b10(void *this,int param_1,undefined4 *param_2,short param_3,undefined4 param_4)

{
  *(int *)((int)this + 0x162) = (int)param_3;
  *(undefined4 *)((int)this + 0x166) = param_4;
  *(undefined2 *)((int)this + 0x22) = 0x5c;
  FUN_004374c0((undefined4 *)((int)this + 0x152),param_2);
  FUN_0041d270(this,param_1);
  return;
}


