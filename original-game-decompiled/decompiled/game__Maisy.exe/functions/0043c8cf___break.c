
/* ==== __break @ 0043c8cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8cf-0043c8cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


