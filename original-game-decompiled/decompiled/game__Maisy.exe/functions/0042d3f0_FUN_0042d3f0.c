
/* ==== FUN_0042d3f0 @ 0042d3f0 ==== 
 * signature: bool __thiscall FUN_0042d3f0(void * this, short param_1, undefined4 param_2, undefined4 param_3)
 * body: 0042d3f0-0042d429
 */

bool __thiscall FUN_0042d3f0(void *this,short param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar1 = FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(int *)((int)this + 0x4c),
                         (int)param_1,param_2,param_3);
    return (char)uVar1 == '\0';
  }
  return false;
}


