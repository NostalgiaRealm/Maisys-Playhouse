
/* ==== FUN_00418390 @ 00418390 ==== 
 * signature: int __thiscall FUN_00418390(void * this, int param_1, int param_2)
 * body: 00418390-004183cf
 */

int __thiscall FUN_00418390(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_8;
  
  if (param_2 != 0) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x4a),param_2,&local_8);
    if (((char)uVar1 != '\0') && (local_8 != (undefined4 *)0x0)) {
      FUN_00430370((void *)*local_8,param_1,&param_1);
    }
  }
  return param_1;
}


