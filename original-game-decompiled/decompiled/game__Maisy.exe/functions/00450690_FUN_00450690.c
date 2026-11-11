
/* ==== FUN_00450690 @ 00450690 ==== 
 * signature: short __thiscall FUN_00450690(void * this, short param_1, int param_2)
 * body: 00450690-004506e8
 */

short __thiscall FUN_00450690(void *this,short param_1,int param_2)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  (**(code **)(*(int *)this + 0x1c))(1);
  uVar1 = FUN_00430370(*(void **)((int)this + 0x26),(int)param_1,&local_14);
  if (((char)uVar1 != '\0') && (*(short *)(local_c + 0xc) == 0)) {
    local_14 = param_2;
    local_10 = *(undefined4 *)(param_2 + 0x2a);
    FUN_0042ff10(*(void **)((int)this + 0x26),(int)param_1,&local_14);
  }
  return param_1;
}


