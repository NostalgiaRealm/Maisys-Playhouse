
/* ==== FUN_00474b60 @ 00474b60 ==== 
 * signature: undefined __fastcall FUN_00474b60(int * param_1)
 * body: 00474b60-00474bc7
 */

void __fastcall FUN_00474b60(int *param_1)

{
  int iVar1;
  void *this;
  short *psVar2;
  int *piVar3;
  short local_6;
  
  if ((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) {
    iVar1 = FUN_00466a80(param_1[1]);
    if (iVar1 != 0) {
      local_6 = *(short *)((int)param_1 + 0x36);
      iVar1 = *(int *)((int)param_1 + 0x2a);
      psVar2 = &local_6;
      piVar3 = param_1;
      this = (void *)FUN_00466a80(param_1[1]);
      FUN_00450af0(this,iVar1,psVar2,piVar3);
      *(short *)((int)param_1 + 0x36) = local_6;
    }
  }
  FUN_0041f4c0(DAT_004da380,0,*(short *)((int)param_1 + 0x46),param_1[0x13],7,0,0);
  return;
}


