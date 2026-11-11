
/* ==== FUN_0045d630 @ 0045d630 ==== 
 * signature: undefined __cdecl FUN_0045d630(undefined4 param_1, int * param_2)
 * body: 0045d630-0045d694
 */

void __cdecl FUN_0045d630(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0043ed20();
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)0x0) goto LAB_0045d67c;
    do {
      if ((((piVar1 != param_2) && ((*(uint *)((int)piVar1 + 0x1e) & 2) != 0)) &&
          ((short)piVar1[0x18] == 0)) &&
         (((*(uint *)((int)piVar1 + 0x1e) & 0x40000000) == 0 &&
          (*(short *)((int)piVar1 + 0x22) != 0x43)))) {
        (**(code **)(*piVar1 + 0x1f8))(0);
      }
LAB_0045d67c:
      piVar1 = (int *)FUN_0043ed30();
    } while (piVar1 != (int *)0x0);
  }
  FUN_0047dc10();
  return;
}


