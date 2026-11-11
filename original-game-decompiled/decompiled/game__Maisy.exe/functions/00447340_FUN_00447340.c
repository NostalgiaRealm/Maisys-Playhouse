
/* ==== FUN_00447340 @ 00447340 ==== 
 * signature: undefined __fastcall FUN_00447340(void * param_1)
 * body: 00447340-00447378
 */

void __fastcall FUN_00447340(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar1 != (void *)0x0) {
    pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
    if ((*(char *)((int)pvVar1 + 0x17d) == '\0') && (*(short *)((int)param_1 + 0x152) == 0)) {
      *(undefined2 *)((int)param_1 + 0x152) = 1;
    }
  }
  return;
}


