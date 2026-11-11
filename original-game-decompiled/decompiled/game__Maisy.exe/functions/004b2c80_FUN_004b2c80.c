
/* ==== FUN_004b2c80 @ 004b2c80 ==== 
 * signature: undefined __thiscall FUN_004b2c80(void * this, tagCREATESTRUCTA * param_1)
 * body: 004b2c80-004b2cb3
 */

void __thiscall FUN_004b2c80(void *this,tagCREATESTRUCTA *param_1)

{
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x40);
  if ((*(uint *)(param_1 + 0x20) | 0x800000) == 0x50800000) {
    *(uint *)(param_1 + 0x20) =
         *(uint *)((int)this + 0x44) & (*(uint *)(param_1 + 0x20) | 0xff7fffff);
  }
  CView::PreCreateWindow(this,param_1);
  return;
}


