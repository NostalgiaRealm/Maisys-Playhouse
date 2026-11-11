
/* ==== __break @ 004316cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004316cf-004316cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


