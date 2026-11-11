
/* ==== __break @ 004107cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107cf-004107cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


