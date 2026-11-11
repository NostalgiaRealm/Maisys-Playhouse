
/* ==== __break @ 0045aa89 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aa89-0045aa89
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


