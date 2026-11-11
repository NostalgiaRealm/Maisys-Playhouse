
/* ==== FUN_00441780 @ 00441780 ==== 
 * signature: undefined1 __thiscall FUN_00441780(void * this, char * param_1)
 * body: 00441780-004417c9
 */

undefined1 __thiscall FUN_00441780(void *this,char *param_1)

{
  void *this_00;
  uint uVar1;
  undefined1 uVar2;
  uint local_c;
  uint local_8;
  
  uVar2 = 0;
  this_00 = (void *)(**(code **)(*(int *)this + 0x244))();
  if (this_00 != (void *)0x0) {
    uVar1 = FUN_0044a5a0(this_00,param_1,&local_8,&local_c);
    if ((char)uVar1 != '\0') {
      uVar2 = 1;
      FUN_00441690(this,local_8,local_c);
    }
  }
  return uVar2;
}


