
/* ==== FUN_004a7da0 @ 004a7da0 ==== 
 * signature: undefined __thiscall FUN_004a7da0(void * this, int param_1)
 * body: 004a7da0-004a7df2
 */

void __thiscall FUN_004a7da0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(param_1 != 0);
  if ((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x10) == 0)) {
    if (DAT_004e51ec == (HBITMAP)0x0) {
      FUN_004ba73d();
    }
    if (DAT_004e51ec != (HBITMAP)0x0) {
      SetMenuItemBitmaps(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400,
                         (HBITMAP)0x0,DAT_004e51ec);
    }
  }
  return;
}


