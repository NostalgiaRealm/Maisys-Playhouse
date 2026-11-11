
/* ==== FUN_004a7df3 @ 004a7df3 ==== 
 * signature: undefined __thiscall FUN_004a7df3(void * this, char * param_1)
 * body: 004a7df3-004a7e49
 */

void __thiscall FUN_004a7df3(void *this,char *param_1)

{
  UINT UVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    AfxSetWindowText(*(HWND__ **)(*(int *)((int)this + 0x14) + 0x1c),param_1);
  }
  else if (*(int *)((int)this + 0x10) == 0) {
    UVar1 = GetMenuState(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400);
    ModifyMenuA(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                UVar1 & 0xfffff6fb | 0x400,*(UINT_PTR *)((int)this + 4),param_1);
  }
  return;
}


