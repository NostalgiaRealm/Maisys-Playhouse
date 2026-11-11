
/* ==== FUN_0044a2a0 @ 0044a2a0 ==== 
 * signature: undefined __thiscall FUN_0044a2a0(void * this, int * param_1)
 * body: 0044a2a0-0044a2ed
 */

void __thiscall FUN_0044a2a0(void *this,int *param_1)

{
  if ((*(short *)((int)this + 0xb8) < *(short *)((int)this + 0xbc)) &&
     (*(short *)((int)this + 0xba) < *(short *)((int)this + 0xbe))) {
    FUN_0041e190(this,param_1);
    return;
  }
  *(undefined2 *)((int)param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 1) = 0xa0;
  *(undefined2 *)((int)param_1 + 6) = 0x78;
  *(undefined2 *)param_1 = 0;
  return;
}


