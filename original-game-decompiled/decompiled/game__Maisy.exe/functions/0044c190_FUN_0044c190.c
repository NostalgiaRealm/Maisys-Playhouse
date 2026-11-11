
/* ==== FUN_0044c190 @ 0044c190 ==== 
 * signature: undefined __thiscall FUN_0044c190(void * this, char param_1)
 * body: 0044c190-0044c1fd
 */

void __thiscall FUN_0044c190(void *this,char param_1)

{
  char cVar1;
  
  cVar1 = param_1;
  if (*(int *)((int)this + 0x84) == 0) {
    if (param_1 != '\0') {
      cVar1 = FUN_0044bd00(this,0x200);
      goto joined_r0x0044c1b9;
    }
  }
  else {
joined_r0x0044c1b9:
    if (cVar1 != '\0') {
      FUN_0044bee0(this);
      goto LAB_0044c1cb;
    }
  }
  FUN_0044bf20(this);
LAB_0044c1cb:
  ShowWindow(*(HWND *)((int)this + 0x7e),(param_1 == '\0') - 1 & 5);
  FUN_0044bcb0(this,0x100,param_1);
  FUN_0044c130(this);
  return;
}


