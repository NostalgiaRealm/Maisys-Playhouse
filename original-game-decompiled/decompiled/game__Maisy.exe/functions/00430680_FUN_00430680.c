
/* ==== FUN_00430680 @ 00430680 ==== 
 * signature: undefined __thiscall FUN_00430680(void * this, int param_1)
 * body: 00430680-004306a5
 */

void __thiscall FUN_00430680(void *this,int param_1)

{
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}


