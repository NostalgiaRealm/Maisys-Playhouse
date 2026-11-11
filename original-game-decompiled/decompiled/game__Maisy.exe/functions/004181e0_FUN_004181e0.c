
/* ==== FUN_004181e0 @ 004181e0 ==== 
 * signature: uint __thiscall FUN_004181e0(void * this, undefined4 param_1, uint param_2)
 * body: 004181e0-00418247
 */

uint __thiscall FUN_004181e0(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  iVar1 = *(int *)((int)*(void **)((int)this + 0x4a) + 0x26);
  if (iVar1 + 1 < (int)param_2) {
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_00430000(*(void **)((int)this + 0x4a),iVar3,param_2 - iVar1);
  }
  if (*(int *)((int)*(int **)((int)this + 0x4a) + 0x26) - uVar2 == -1) {
    (**(code **)(**(int **)((int)this + 0x4a) + 0xe8))(&param_1);
  }
  uVar4 = FUN_0042ff10(*(void **)((int)this + 0x4a),uVar2,&param_1);
  return ((char)uVar4 == '\0') - 1 & uVar2;
}


