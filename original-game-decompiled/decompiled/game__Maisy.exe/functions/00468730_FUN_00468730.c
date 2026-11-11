
/* ==== FUN_00468730 @ 00468730 ==== 
 * signature: undefined __fastcall FUN_00468730(int * param_1)
 * body: 00468730-00468840
 */

void __fastcall FUN_00468730(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 local_58 [21];
  
  if (*(char *)((int)param_1 + 0x4e) == '\0') {
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      (**(code **)(*param_1 + 0x240))(0);
    }
    if (*(int **)((int)param_1 + 0x3a) != (int *)0x0) {
      puVar1 = (undefined4 *)((int)param_1 + 0x3e);
      cVar2 = (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x1e4))();
      if (cVar2 == '\0') {
        FUN_0046a5b0((void *)*puVar1,'\0','\0');
      }
      else {
        FUN_0046a5b0((void *)*puVar1,'\0','\x01');
        FUN_004142c0(local_58,0x5dc,0,*puVar1,0);
        FUN_0046b770((void *)*puVar1,(int)local_58);
        FUN_004142c0(local_58,0x578,0,*puVar1,0);
        FUN_0046b770((void *)*puVar1,(int)local_58);
      }
      if (param_1[0x12] == 0) {
        iVar3 = FUN_00434920(DAT_004d99ac,0x28,0);
        param_1[0x12] = iVar3;
        if (iVar3 == 0) {
          FUN_004a3538();
        }
      }
      if (param_1[0x12] != 0) {
        FUN_00473580((void *)*puVar1,param_1[0x12]);
        if (*(char *)((int)param_1 + 0x4d) != '\0') {
          *(char *)(param_1[0x12] + 0x26) =
               '\x01' - ((*(uint *)((int)param_1 + 0x26) & 0x1000000) == 0);
          *(int *)(param_1[0x12] + 0x22) = param_1[0x16];
          *(undefined4 *)(param_1[0x12] + 0x1e) = *(undefined4 *)(param_1[0x12] + 0x22);
        }
        *(undefined4 *)param_1[0x12] = 0;
        (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x204))(param_1[0x12]);
      }
    }
  }
  return;
}


