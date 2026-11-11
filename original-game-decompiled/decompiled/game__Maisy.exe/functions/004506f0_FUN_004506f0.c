
/* ==== FUN_004506f0 @ 004506f0 ==== 
 * signature: undefined __thiscall FUN_004506f0(void * this, int * param_1)
 * body: 004506f0-00450770
 */

void __thiscall FUN_004506f0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_104;
  undefined4 local_103 [63];
  
  local_104 = DAT_004d99e4;
  puVar3 = local_103;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  piVar1 = (int *)FUN_00450230(this,*(short *)((int)param_1 + 0x36));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))(&local_104);
  }
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) & 0xfb;
  FUN_004502a0(this,(int)param_1);
  iVar2 = *param_1;
  (**(code **)(iVar2 + 0x10c))(0);
  if (local_104 != '\0') {
    (**(code **)(iVar2 + 0x74))(&local_104);
  }
  return;
}


