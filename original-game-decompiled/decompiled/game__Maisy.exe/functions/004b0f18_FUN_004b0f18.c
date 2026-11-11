
/* ==== FUN_004b0f18 @ 004b0f18 ==== 
 * signature: undefined __thiscall FUN_004b0f18(void * this, int param_1)
 * body: 004b0f18-004b0f71
 */

void __thiscall FUN_004b0f18(void *this,int param_1)

{
  HGDIOBJ pvVar1;
  undefined4 local_8;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    pvVar1 = (HGDIOBJ)0x0;
    if (param_1 != 0) {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    local_8 = SelectObject(*(HDC *)((int)this + 4),pvVar1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    pvVar1 = (HGDIOBJ)0x0;
    if (param_1 != 0) {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    local_8 = SelectObject(*(HDC *)((int)this + 8),pvVar1);
  }
  CGdiObject::FromHandle(local_8);
  return;
}


