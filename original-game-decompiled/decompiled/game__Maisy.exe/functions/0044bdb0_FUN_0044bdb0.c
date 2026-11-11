
/* ==== FUN_0044bdb0 @ 0044bdb0 ==== 
 * signature: undefined __fastcall FUN_0044bdb0(void * param_1)
 * body: 0044bdb0-0044bddc
 */

void __fastcall FUN_0044bdb0(void *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_0044bd00(param_1,0x80);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_0041ed90((int)param_1);
    (**(code **)(*piVar2 + 0x78))(0xb,param_1,1);
    return;
  }
  FUN_0044bc10(param_1);
  return;
}


