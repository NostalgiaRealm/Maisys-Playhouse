
/* ==== FUN_00441e90 @ 00441e90 ==== 
 * signature: uint __fastcall FUN_00441e90(void * param_1)
 * body: 00441e90-00441f64
 */

uint __fastcall FUN_00441e90(void *param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  uint uVar4;
  uint3 uVar5;
  int local_8;
  uint uVar3;
  
  cVar2 = FUN_00440230(param_1,2);
  uVar3 = CONCAT31(extraout_var,cVar2);
  if (cVar2 != '\0') goto LAB_00441f5c;
  bVar1 = false;
  uVar4 = FUN_004414c0(param_1,0);
  if (*(int *)((int)param_1 + 0x9c) < 1) {
    FUN_0048d184();
    if (((uVar4 <= local_8 + 1U) || (*(uint *)((int)param_1 + 0xb6) < uVar4)) &&
       (*(int *)((int)param_1 + 0xba) < 0)) goto LAB_00441f0b;
  }
  else if (((*(int *)((int)param_1 + 0xb2) - 1U <= uVar4) ||
           (uVar4 < *(uint *)((int)param_1 + 0xb6))) && (0 < *(int *)((int)param_1 + 0xba))) {
LAB_00441f0b:
    bVar1 = true;
  }
  uVar3 = *(uint *)((int)param_1 + 0x9c);
  *(uint *)((int)param_1 + 0xba) = uVar3;
  if (bVar1) {
    uVar5 = (uint3)(uVar3 >> 8);
    if (*(char *)((int)param_1 + 0xb0) == '\0') {
      *(uint *)((int)param_1 + 0xb6) = uVar4;
      return (uint)uVar5 << 8;
    }
    *(undefined1 *)((int)param_1 + 0xb0) = 0;
    *(undefined4 *)((int)param_1 + 0xb6) = 0;
    return CONCAT31(uVar5,1);
  }
  *(undefined1 *)((int)param_1 + 0xb0) = 1;
  *(uint *)((int)param_1 + 0xb6) = uVar4;
LAB_00441f5c:
  return uVar3 & 0xffffff00;
}


