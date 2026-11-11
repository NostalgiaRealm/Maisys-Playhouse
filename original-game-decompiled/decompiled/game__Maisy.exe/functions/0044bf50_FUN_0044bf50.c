
/* ==== FUN_0044bf50 @ 0044bf50 ==== 
 * signature: undefined __fastcall FUN_0044bf50(int * param_1)
 * body: 0044bf50-0044bff0
 */

void __fastcall FUN_0044bf50(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = FUN_0044bd00(param_1,1);
  if (cVar2 != '\0') {
    cVar2 = FUN_0044bd00(param_1,2);
    if (cVar2 == '\0') {
      iVar3 = FUN_0044c890((int)param_1);
      if (iVar3 == 0x20d) {
        pcVar1 = *(code **)(*param_1 + 0x210);
        piVar4 = (int *)(*pcVar1)();
        (**(code **)(*piVar4 + 0x240))(0x325,0,0);
        cVar2 = FUN_0044bd00(param_1,4);
        if (cVar2 == '\0') {
          FUN_0044bb40(param_1);
          piVar4 = (int *)(*pcVar1)();
          (**(code **)(*piVar4 + 0x240))(0x321,0,0);
        }
        else {
          FUN_0044bc10(param_1);
        }
      }
    }
  }
  if ((param_1[0x21] != 0) && (*(char *)((int)param_1 + 0x96) != '\0')) {
    (**(code **)(*param_1 + 0x1f8))();
    *(undefined1 *)((int)param_1 + 0x96) = 0;
  }
  return;
}


