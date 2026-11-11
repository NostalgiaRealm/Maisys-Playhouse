
/* ==== FUN_00418330 @ 00418330 ==== 
 * signature: undefined __thiscall FUN_00418330(void * this, int param_1)
 * body: 00418330-00418364
 */

void __thiscall FUN_00418330(void *this,int param_1)

{
  undefined4 uVar1;
  int *local_8;
  
  if (param_1 != 0) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x4a),param_1,&local_8);
    if (((char)uVar1 != '\0') && (local_8 != (int *)0x0)) {
      FUN_004301f0(*local_8);
    }
  }
  return;
}


