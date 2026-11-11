
/* ==== FUN_0044bee0 @ 0044bee0 ==== 
 * signature: undefined __fastcall FUN_0044bee0(void * param_1)
 * body: 0044bee0-0044bf13
 */

void __fastcall FUN_0044bee0(void *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_0044bd00(param_1,1);
  if ((cVar1 == '\0') && (*(int *)((int)param_1 + 0x7e) != 0)) {
    piVar2 = (int *)FUN_0041ed90((int)param_1);
    (**(code **)(*piVar2 + 0x78))(10,param_1,1);
    FUN_0044bcb0(param_1,1,'\x01');
  }
  return;
}


