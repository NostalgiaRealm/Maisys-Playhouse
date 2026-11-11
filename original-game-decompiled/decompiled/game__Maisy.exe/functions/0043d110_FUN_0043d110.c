
/* ==== FUN_0043d110 @ 0043d110 ==== 
 * signature: short __cdecl FUN_0043d110(int * param_1, short * param_2)
 * body: 0043d110-0043d1f5
 */

short __cdecl FUN_0043d110(int *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  short sVar5;
  undefined4 *this;
  short sVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043d1f6;
  *unaff_FS_OFFSET = &local_10;
  puVar3 = (undefined4 *)FUN_004a5fed(0xe);
  this = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_004be070;
    this = puVar3;
  }
  sVar5 = 0;
  local_8 = 0xffffffff;
  FUN_00430500(this,0);
  FUN_0043ca10(param_1,this);
  sVar2 = *(short *)(this + 3);
  if (sVar2 != 0) {
    sVar6 = 1;
    if (0 < sVar2) {
      do {
        piVar4 = (int *)FUN_004308b0(this,sVar6);
        sVar1 = (**(code **)(*piVar4 + 0x27c))();
        if (*param_2 == sVar1) {
          sVar5 = sVar5 + 1;
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 <= sVar2);
    }
    if (sVar5 != 0) {
      piVar4 = (int *)FUN_004308b0(this,*(short *)(this + 3));
      sVar2 = (**(code **)(*piVar4 + 0x27c))();
      *param_2 = sVar2 + 1;
    }
  }
  FUN_00430540(this);
  *unaff_FS_OFFSET = local_10;
  return sVar5;
}


