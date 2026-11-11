
/* ==== FUN_0044bbb0 @ 0044bbb0 ==== 
 * signature: undefined __fastcall FUN_0044bbb0(void * param_1)
 * body: 0044bbb0-0044bbf7
 */

void __fastcall FUN_0044bbb0(void *param_1)

{
  longlong lVar1;
  
  FUN_0044bcb0(param_1,2,'\0');
  FUN_0044bee0(param_1);
  lVar1 = FUN_0044c670(param_1,'\0');
  SendMessageA(*(HWND *)((int)param_1 + 0x7e),0x807,0,(LPARAM)lVar1);
  SendMessageA(*(HWND *)((int)param_1 + 0x7e),0x47b,0,*(LPARAM *)((int)param_1 + 0xa0));
  return;
}


