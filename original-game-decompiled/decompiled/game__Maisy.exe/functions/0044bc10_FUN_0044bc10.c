
/* ==== FUN_0044bc10 @ 0044bc10 ==== 
 * signature: undefined __fastcall FUN_0044bc10(void * param_1)
 * body: 0044bc10-0044bc54
 */

void __fastcall FUN_0044bc10(void *param_1)

{
  FUN_0044bcb0(param_1,2,'\0');
  FUN_0044bee0(param_1);
  SendMessageA(*(HWND *)((int)param_1 + 0x7e),0x807,0,*(LPARAM *)((int)param_1 + 0x9c));
  SendMessageA(*(HWND *)((int)param_1 + 0x7e),0x47b,0,*(LPARAM *)((int)param_1 + 0xa0));
  return;
}


