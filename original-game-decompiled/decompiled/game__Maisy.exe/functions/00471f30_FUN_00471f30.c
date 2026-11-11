
/* ==== FUN_00471f30 @ 00471f30 ==== 
 * signature: undefined __thiscall FUN_00471f30(void * this, int param_1, undefined4 * param_2, short param_3, undefined4 param_4)
 * body: 00471f30-00471f7d
 */

void __thiscall
FUN_00471f30(void *this,int param_1,undefined4 *param_2,short param_3,undefined4 param_4)

{
  *(int *)((int)this + 0x15a) = (int)param_3;
  *(undefined4 *)((int)this + 0x15e) = param_4;
  *(undefined2 *)((int)this + 0x22) = 0x5d;
  FUN_004374c0((undefined4 *)((int)this + 0x14a),param_2);
  FUN_00460220(this,param_1,0,0xffff);
  *(undefined1 *)((int)this + 0x162) = 1;
  return;
}


