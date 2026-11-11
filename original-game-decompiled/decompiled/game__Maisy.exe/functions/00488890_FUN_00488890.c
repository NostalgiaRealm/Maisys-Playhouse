
/* ==== FUN_00488890 @ 00488890 ==== 
 * signature: undefined __thiscall FUN_00488890(void * this, tagCREATESTRUCTA * param_1)
 * body: 00488890-004888ae
 */

void __thiscall FUN_00488890(void *this,tagCREATESTRUCTA *param_1)

{
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffdff;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xff7fffff;
  CView::PreCreateWindow(this,param_1);
  return;
}


