
/* ==== FUN_004181a0 @ 004181a0 ==== 
 * signature: undefined4 __thiscall FUN_004181a0(void * this, int param_1)
 * body: 004181a0-004181cf
 */

undefined4 __thiscall FUN_004181a0(void *this,int param_1)

{
  undefined4 uVar1;
  uint3 uVar2;
  int local_8;
  
  local_8 = 0;
  uVar1 = FUN_00430370(*(void **)((int)this + 0x4a),param_1,&local_8);
  uVar2 = (uint3)((uint)uVar1 >> 8);
  if (((char)uVar1 != '\0') && (local_8 != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


