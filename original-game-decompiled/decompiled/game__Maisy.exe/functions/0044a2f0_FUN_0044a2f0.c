
/* ==== FUN_0044a2f0 @ 0044a2f0 ==== 
 * signature: undefined __fastcall FUN_0044a2f0(int * param_1)
 * body: 0044a2f0-0044a3f5
 */

void __fastcall FUN_0044a2f0(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  
  pcVar1 = *(code **)(*param_1 + 0x15c);
  cVar3 = (*pcVar1)(0);
  if ((cVar3 == '\0') || (cVar3 = FUN_0040d6d0(param_1), cVar3 == '\0')) {
    iVar4 = FUN_0044a0b0(param_1);
    if (iVar4 != 0) {
      if (*(char *)((int)param_1 + 0x15a) == '\0') {
        iVar4 = FUN_0048d143();
        while (iVar4 != 0) {
          FUN_0048d16a();
          iVar4 = FUN_0048d143();
        }
      }
      FUN_0048ceed();
      *(undefined2 *)(param_1 + 0x2e) = local_18;
      *(undefined2 *)((int)param_1 + 0xba) = local_14;
      *(undefined2 *)(param_1 + 0x2f) = local_10;
      *(undefined2 *)((int)param_1 + 0xbe) = local_c;
      *(undefined2 *)(param_1 + 0x2e) = 0;
      *(undefined2 *)((int)param_1 + 0xba) = 0;
      FUN_0044a640();
      FUN_0048ce85();
    }
    (**(code **)(*param_1 + 0x1cc))();
    pcVar2 = *(code **)(*param_1 + 0x160);
    (*pcVar2)(0,1);
    cVar3 = (*pcVar1)(0xb);
    if (cVar3 == '\0') {
      (*pcVar2)(0xf,1);
    }
  }
  return;
}


