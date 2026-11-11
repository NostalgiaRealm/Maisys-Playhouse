
/* ==== FUN_004061e0 @ 004061e0 ==== 
 * signature: undefined __thiscall FUN_004061e0(void * this, int * param_1)
 * body: 004061e0-00406235
 */

void __thiscall FUN_004061e0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00459fc0(*(void **)((int)this + 0x2a),param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_004021e0(param_1);
    if ((((char)uVar2 != '\0') && (*param_1 == 3)) && (iVar1 = *(int *)(iVar1 + 0x6a), iVar1 != 0))
    {
      iVar3 = FUN_0046ca60(iVar1);
      param_1[1] = *(int *)(iVar3 + 0xc);
      iVar3 = FUN_0046ca90(iVar1);
      param_1[2] = *(int *)(iVar3 + 0xc);
      param_1[3] = *(int *)(iVar1 + 0xc);
    }
  }
  return;
}


