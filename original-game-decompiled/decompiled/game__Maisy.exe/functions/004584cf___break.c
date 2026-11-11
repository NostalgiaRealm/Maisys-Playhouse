
/* ==== __break @ 004584cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584cf-004584cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


