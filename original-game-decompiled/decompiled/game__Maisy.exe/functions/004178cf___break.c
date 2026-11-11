
/* ==== __break @ 004178cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178cf-004178cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


