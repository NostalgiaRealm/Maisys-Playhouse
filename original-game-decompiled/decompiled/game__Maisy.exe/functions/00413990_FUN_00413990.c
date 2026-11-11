
/* ==== FUN_00413990 @ 00413990 ==== 
 * signature: undefined __fastcall FUN_00413990(undefined4 * param_1)
 * body: 00413990-00413a4f
 */

void __fastcall FUN_00413990(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_004be9ac;
  param_1[4] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_00430190(param_1[1]);
    iVar1 = FUN_00414260((int)param_1);
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        iVar3 = iVar4 + 1;
        puVar2 = (undefined4 *)FUN_004301c0((void *)param_1[1],iVar4);
        FUN_0043f720((HLOCAL)*puVar2);
        iVar4 = iVar3;
      } while (iVar3 <= iVar1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00430190(param_1[3]);
    iVar1 = FUN_00414270((int)param_1);
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        iVar3 = iVar4 + 1;
        puVar2 = (undefined4 *)FUN_004301c0((void *)param_1[3],iVar4);
        FUN_0043f720((HLOCAL)*puVar2);
        iVar4 = iVar3;
      } while (iVar3 <= iVar1);
    }
    if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[3])(1);
    }
    param_1[3] = 0;
  }
  return;
}


