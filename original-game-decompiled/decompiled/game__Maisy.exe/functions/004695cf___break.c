
/* ==== __break @ 004695cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695cf-004695cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


